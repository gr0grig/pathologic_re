include std.sci
include container_base.sci
include item_base.sci

maintask TFactoryCorpse : TCorpseContainerBase
{
	void init(void) {
		@SetVisibility(true);
		AddOrgans();
		super.init();
	}
	
	void OnUnload(void) {
		@RemoveActor(self());
	}
}
