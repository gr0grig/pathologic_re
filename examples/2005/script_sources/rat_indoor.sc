include std.sci
include rat.sc

void OnUnload(void)
{
	@RemoveActor(self());
	@Hold();
}
