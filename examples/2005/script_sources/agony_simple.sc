include std.sci

maintask TAgony
{
	void init(void) {
		@RemoveEnvelope();
		@RemoveRTEnvelope();

		for (;;) {
			while (!IsLoaded()) {
				@Hold();
			}
			bool bSuccess;
			@Is3DSoundLoaded(bSuccess, "agony");
			if (bSuccess && rndbool(1.0 / 3.0))
				@PlayGlobalSound("agony", [0, 40, 0]);
			@PlayAnimation("all", "agony");
			@WaitForAnimEnd(bSuccess);
		}
	}
	
	void OnLoad(void) {
		@StopGroup0();
	}
}
