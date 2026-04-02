include std.sci

property int ItemID1, ItemID2;
property int Container;

maintask TEffect
{
	void init(void) {
	
		int iItem;
		@GetItemPosByID(iItem, ItemID1, ItemID2, Container);
		if (iItem == -1) {
			@Trace("error: " + ItemID1 + " " + ItemID2);
			return;
		}
			
		object item;
		@GetItem(item, iItem, Container);
	
		float fHealthIncrease, fImmunityIncrease, fTirednessIncrease;
		item->GetProperty(fHealthIncrease, "hl_inc");
		item->GetProperty(fImmunityIncrease, "im_inc");
		//item->GetProperty(fTirednessIncrease, "tr_inc");
		
		@Trace("GC: " + fHealthIncrease + " " + fImmunityIncrease + " " + fTirednessIncrease);
		
		ModPropertyF("health", fHealthIncrease, 0, 1);
		ReportHealthChange(fHealthIncrease);
		ModPropertyF("immunity", fImmunityIncrease, 0, 1);
		ReportImmunityChange(fImmunityIncrease);
		
		@RemoveItem(iItem, 1, Container);
	}
}
