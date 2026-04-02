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
		
		float fDiseaseRate, fHealthIncrease;
		item->GetProperty(fDiseaseRate, "DiseaseRate");
		item->GetProperty(fHealthIncrease, "HealthIncrease");
		
		ModPropertyF("health", fHealthIncrease, 0, 1);
		ReportHealthChange(fHealthIncrease);
		
		float fDisease;
		@GetProperty("disease", fDisease);
		@SetProperty("disease", fDisease * fDiseaseRate);
		ReportDiseaseChange(fDisease - fDisease * fDiseaseRate);

		@Trace("GC: " + fHealthIncrease + " " + fDiseaseRate);
		
		@RemoveItem(iItem, 1, Container);
	}
}