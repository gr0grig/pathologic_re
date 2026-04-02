include std.sci
include world_wnd_messages.sci

task TWaterSource
{
	void init(void) {
	}

	void OnUse(object actor) {
		int iItemID;
		@GetInvItemByName(iItemID, "bottle_empty");
		int iCategory;
		@GetInvItemProperty(iCategory, iItemID, "Category");
		int iCount;
		actor->GetItemCount(iCount, iCategory);
		
		int iBottleCount = 0;

		for (int i = 0; i < iCount; ) {
			object item;
			actor->GetItem(item, i, iCategory);
			int iID;
			item->GetItemID(iID);
			if (iID == iItemID) {
				int iAmount;
				actor->GetItemAmount(iAmount, i, iCategory);
				iBottleCount += iAmount;
				actor->RemoveItem(i, iAmount, iCategory);
				--iCount;
			}
			else {
				++i;
			}
		}
		
		if (iBottleCount) {
			disable OnUse;

			object item;
			@CreateInvItem(item);
			item->SetItemName("bottle_water");
			PlayerPutItem(actor, item, iBottleCount);

			@PlaySound("fill");
			@SendWorldWndMessage(c_iWM_PlayerExchange);
			@Sleep(1);
			
			enable OnUse;
		}
		else {
			SendHelpWndMessage(c_iTID_GameNoBottle);
		}
	}
}
