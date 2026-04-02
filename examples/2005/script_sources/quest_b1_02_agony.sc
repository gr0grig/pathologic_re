include std.sci
include agony_base.sci

maintask TAgony : TAgonyBase
{
	void OnUse(object actor) {}

	void AgonyStopped(void) {
		TriggerActor("quest_b1_02", "agony_dead");
	}
}
