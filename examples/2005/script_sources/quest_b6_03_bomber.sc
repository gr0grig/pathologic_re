include std.sci
include bomber.sc

void OnUnload(void)
{
	@RemoveActor(self());
	@Hold();
}
