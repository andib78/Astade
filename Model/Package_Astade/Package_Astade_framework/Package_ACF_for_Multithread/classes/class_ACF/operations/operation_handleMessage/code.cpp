//~~ void handleMessage() [ACF] ~~

while (sem_wait(&myQueueSemaphore))
	continue;

ACF_MessageReceiver* Destination = 0;
size_t handleThis = nextRead;

if (nextRead != nextWrite)
{
	Destination = my_Messages[handleThis].Destination;
	// might be NULL, when the destination was deleted
	if (Destination && Destination->Name)
	{
		if (my_Messages[handleThis].Source)
		{
			Trace2UML::notify_message_received(
					my_Messages[handleThis].Source,
					my_Messages[handleThis].Source->Name,
					my_Messages[handleThis].Destination,
					my_Messages[handleThis].Destination->Name,
					my_Messages[handleThis].ID);
		}
		else
		{
			Trace2UML::notify_message_received(
					0, 0,
					my_Messages[handleThis].Destination,
					my_Messages[handleThis].Destination->Name,
					my_Messages[handleThis].ID);
		}
	}
	if (++nextRead >= my_Messages.size())
		nextRead = 0;
}    

sem_post(&myQueueSemaphore);

if (Destination)
{
	Destination->HandleFunction(my_Messages[handleThis].Destination, &my_Messages[handleThis]);
	if (my_Messages[handleThis].DataIncluded)
		((ACF_MessageData*)(my_Messages[handleThis].Data))->dec();
}
