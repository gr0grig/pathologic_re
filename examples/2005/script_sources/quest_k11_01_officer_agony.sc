include std.sci
include agony_base.sci

maintask TAgony : TAgonyBase
{
	void OnTrigger(string name) {
		if (name == "heal") {
			TriggerActor("quest_k11_01", "cure_officer");
		}
	}

	void AgonyStopped(void) {
	}
}
