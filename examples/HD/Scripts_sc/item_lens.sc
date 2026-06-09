property int ItemID1;
property int ItemID2;
property int Container;

maintask t0
{
	void init(void)
	{
		int L0;
		@GetProperty("visir", L0);
		if (L0 && L0 < 4) {
			int L1;
			@SetProperty("visir", L0 + 1);
			@GetItemPosByID(L1, ItemID1, ItemID2, Container);
			@RemoveItem(L1, 1, Container);
		}
	}
}

