include std.sci
include agony_base.sci
include item_base.sci

maintask TAgony: TAgonyBase
{
	void init(void) {
		@SetProperty("agony", 0.5);
		super.init();
	}

	void AgonyStopped(void) {
		//bool bAdded;
		//@AddItem(bAdded, "Money", 0, 500);
		GenerateAgony1Items();
	}
}
