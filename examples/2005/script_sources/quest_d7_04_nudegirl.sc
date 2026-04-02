include std.sci
include dgame.sci
include disp_idle.sci
include NPC_Nude.sci

maintask TBirdmask : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
}
