package org.tigris.ape.views.ModelTree.Actions;

import org.eclipse.jface.action.Action;
import org.tigris.ape.views.ModelTree.ModelTreeView;

public abstract class ModelTreeViewAction extends Action{

	protected ModelTreeView view;
	
	ModelTreeViewAction(ModelTreeView view){
		this.view = view;
	}
}
