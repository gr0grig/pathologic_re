include std.sci

property int ItemID1, ItemID2;
property int Container;

maintask TEffect
{
	void init(void) {
		int iLevel;
		@GetProperty("visir", iLevel);
		if (iLevel && iLevel < 4) {
			@SetProperty("visir", iLevel + 1);
			
			int iPos;
			@GetItemPosByID(iPos, ItemID1, ItemID2, Container);
			@RemoveItem(iPos, 1, Container);
		}
	}
}
