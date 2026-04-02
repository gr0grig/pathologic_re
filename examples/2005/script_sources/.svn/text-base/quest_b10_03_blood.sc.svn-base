include std.sci
include bgame.sci

maintask TCorpse
{
	var bool bUsed;
	void init(void) {
		@SetVisibility(true);
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		if (bUsed)
			return;
		else
			bUsed = true;
			
		object item;
		@CreateInvItem(item);
		item->SetItemName("avroks_blood");
		if (PlayerAddItem(actor, item, 1)) {
			AddDiaryEntry_b10q03BloodGotoMishka();
			@SetVariable("b10q03", 4);
			@RemoveActor(self());
		}
	}
}
