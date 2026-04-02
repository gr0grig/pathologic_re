include std.sci
include bull_base.sci

var object g_Envelope;
var bool g_bToBeRemoved;

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

void OnUnload(void) {
	if (g_bToBeRemoved)
		@RemoveActor(self());
}

void OnDispose(void)
{
	if (g_Envelope)
		@RemoveActor(g_Envelope);
}

maintask TBull : TBullBase
{
	void init(void) {
		InitEnvelope();
		super.init();
	}

	void InitEnvelope(void) {
		object scene;
		@GetScene(scene);
		object envelope;
		@AddActor(envelope, "b6q01_bull_envelope", scene, [0, 0, 0], [0, 0, 1]);
		g_Envelope = envelope;
	}
	
	void OnUnload(void) {
		global.OnUnload();
	}
}

task TPlayIdle : TPlayIdleBase
{
	void OnUnload(void) {
		global.OnUnload();
		super.OnUnload();
	}
}
