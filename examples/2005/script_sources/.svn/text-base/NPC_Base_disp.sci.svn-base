include NPC_idle_base.sci

task TNPCBaseDisp
{
	var bool g_bToBeRemoved;
	void init(void) {
		if (!IsLoaded()) {
			TWaitForLoad{};
		}
		for (;;) {
			PlayHeadAnimation("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}
	
	void OnTrigger(string name)
	{
		if (name == "cleanup") {
			g_bToBeRemoved = true;
			bool bLoaded;
			@IsLoaded(bLoaded);
			if (!bLoaded)
				@RemoveActor(self());
		}
		else if (name == "restore") {
			g_bToBeRemoved = false;
		}
	}	
	
	void OnUnload(void)
	{
		if (g_bToBeRemoved) {
			@RemoveActor(self());
			@Hold();
		}
		@Hold();
	}	
	
	void OnLoad() {
		@StopGroup0();
		@sync();
	}
	
	void OnUse(object actor) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive) {
			disable OnUse;
			RotateToActor(actor);
			enable OnUse;
			PerformUse(actor);
		}
	}
}

task TNPCSmartIdleBaseDisp : TNPCSmartIdleBase
{
	var bool g_bToBeRemoved;
	void init(void) {
		super.init();
	}
	
	void OnTrigger(string name)
	{
		if (name == "cleanup") {
			g_bToBeRemoved = true;
			bool bLoaded;
			@IsLoaded(bLoaded);
			if (!bLoaded)
				@RemoveActor(self());
		}
		else if (name == "restore") {
			g_bToBeRemoved = false;
		}
	}	
	
	void OnUnload(void)
	{
		if (g_bToBeRemoved) {
			@RemoveActor(self());
			@Hold();
		}
		super.OnUnload();
	}	
	
	void OnLoad() {	
		super.OnLoad();
	}
}

