include std.sci

// CONSTANTS
const float c_fTime = 1;
// CONSTANTS

maintask TSurvival
{
	void init(void) {
		@GameSleep(c_fTime);
		TriggerActor("quest_d4_02", "survived");
		@RemoveActor(self());
	}
}
