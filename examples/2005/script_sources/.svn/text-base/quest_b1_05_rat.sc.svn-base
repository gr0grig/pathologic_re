include std.sci
include rat.sc

void OnUnload(void)
{
	if (IsDead(self())) {
		TriggerActor("quest_b1_05", "rat_dead");
	}
	@RemoveActor(self());
	@Hold();
}
