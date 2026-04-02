include std.sci

property int ItemID1, ItemID2;
property int Container;

task TEquippable
{
	void init(void) {}

	void OnInventoryRemoveItem(object item, int id1, int id2, int container) {
		Check(id1, id2, container);
	}
	
	void OnInventorySelChange(object item, int id1, int id2, bool bSelect, int container) {
		if (!bSelect)
			Check(id1, id2, container);
	}
	
	void Check(int id1, int id2, int container) {
		if (id1 == ItemID1 && id2 == ItemID2 && Container == container) {
			OnDispose();
		}
	}

	// void OnDispose(void) = 0
}
