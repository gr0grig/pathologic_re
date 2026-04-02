include std.sci
include container_base.sci
include bgame.sci

maintask TContainer : TContainerBase
{
	void init(void) {
		@SetVisibility(true);
		super.init();
	}
	
	void OnUse(object actor) {
		int iLocked;
		@GetProperty("locked", iLocked);
		if (iLocked) {
			if (PlayerHasItem(actor, "b2q01_key")) {
				PlayerRemoveItem(actor, "b2q01_key");
				@SetProperty("locked", 0);
				@PlaySound("unlock");
				AddDiaryEntry_b2q01NasledstvoGotoBakalavr();
				RemoveDiaryEntry_B_Mission01();
				AddDiaryEntry_B_Mission02();
			}
			else {
				@PlaySound("locked");
				return;
			}
		}
		super.OnUse(actor);
	}
}
