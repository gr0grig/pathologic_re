include std.sci
include disp_idle.sci
include bgame.sci
include NPC_Morlok.sci

maintask TDisp : TDispIdle
{
	void OnUse(object actor) {
		CancelActivity();
		if (TDlg_DN6_Burah_Morlok{actor} == 1) {
			object items = CreateObjectVector();
			object indices;
			@CreateIntVector(indices);
			int iCount;
			actor->GetItemCount(iCount, 4);
			for (int i = 0; i < iCount; ++i) {
				object item;
				actor->GetItem(item, i, 4);
				int id;
				item->GetItemID(id);
				bool bHas;
				@HasInvItemProperty(bHas, id, "Microscope");
				if (!bHas)
					continue;
				
				int iType;
				@GetInvItemProperty(iType, id, "Microscope");
				
				if (iType != 2) // ordinary diseased citizen blood
					continue;
				
				items->add(item);
				indices->add(i);
			}
			
			items->size(iCount);
			if (iCount == 0) {
				@Trace("b6q01 error, no blood to open bull");
				return;
			}
			
			int index;
			if (iCount == 1)
				index = 0;
			else {
				object sel;
				@CreateIntVector(sel);
				@ChooseItem(items, sel);
				sel->size(iCount);
				if (iCount) {
					sel->get(index, 0);
				}
				else {
					return;
				}
			}
			
			object item;
			items->get(item, index);
			int cindex;
			indices->get(cindex, index);
			actor->RemoveItem(cindex, 1, 4);
			TriggerActor("quest_b6_01", "sacrifice");
			@SetVariable("b6q01", 5);			
		} 
	}
}
