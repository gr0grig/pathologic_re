include std.sci
include player_steps.sci

maintask TPlayer
{
	void init(void) {
		bool bHasProp;
		@HasProperty("effects", bHasProp);
		if (!bHasProp) {
			@SetProperty("effects", true);
			@ApplyEffect("player_head.bin");
			@ApplyEffect("player_eyes_height.bin");
		}
		for (;;) {
			@Hold();
		}
	}
	
	void OnTimer(int id) {
		HandleStepsTimer(id);
	}
}