include std.sci

var object g_Envelope;

void OnDispose(void)
{
	if (g_Envelope)
		@RemoveActor(g_Envelope);
}

maintask TBull {
	var bool bToBeRemoved;
	
	void init(void) {
		if (!IsLoaded())
			@Hold();
			
		InitEnvelope();
			
		while (true) {
			@PlayAnimation("all", "ill");
			@WaitForAnimEnd();
		}
	}
	
	void InitEnvelope(void) {
		object scene;
		@GetScene(scene);
		object envelope;
		@AddActor(envelope, "b10q04_bull_envelope", scene, [0, 0, 0], [0, 0, 1]);
		g_Envelope = envelope;
	}
	
	void OnUnload(void) {
		@StopAnimation();
		if (bToBeRemoved) {
			@RemoveActor(self());
		}
		@Hold();
	}
	
	void OnLoad(void) {
		@StopGroup0();
	}		
	
	void OnTrigger(string name)
	{
		if (name == "cleanup") {
			bToBeRemoved = true;
			bool bLoaded;
			@IsLoaded(bLoaded);
			if (!bLoaded) { 
				@RemoveActor(self());
			}
		}
		else if (name == "restore") {
			bToBeRemoved = false;
		}
	}	
}

