include std.sci

maintask TInventoryObject
{
	void init(void) {
		object geo;
		@FindGeometry("object", geo);
		geo->Enable(true);

		for (;;) {
			@Hold();
		}
	}

	void OnUse(object actor) {
		if (!IsAccessible(actor))
			return;

		string item_name;
		@GetProperty("Item", item_name);
		object item;
		@CreateInvItem(item);
		item->SetItemName(item_name);
		if (PlayerAddItem(actor, item, 1)) {
			object scene;
			@GetScene(scene);
			scene->RemoveStationaryActor(self());
			@RemoveActor(self());
		}
	}
}
