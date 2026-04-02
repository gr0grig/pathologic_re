include std.sci

const float c_fIntervalDist = 100;
const int c_iStuckTimer = 0;
const int c_iStuckTimeout = 10;

property object Race;
property int Index;

void OnUnload(void) {
	@RemoveActor(self());
	@Hold();
}

maintask TRatRace
{
	void init(void) {
		@Sleep(1);

		Vector vInitPosition;
		@GetPosition(vInitPosition);
		Vector vDirection;
		@GetDirection(vDirection);

		TMovePoint{vInitPosition + vDirection * c_fIntervalDist, false};

		int iLastPos = 0;
		bool bForward = true;

		int iCount;
		Race->size(iCount);
		for (int i = 0; i < iCount; ++i) {
			int iPoint;
			Race->get(iPoint, i);
			
			if (iPoint != iLastPos) {

				bool bRotate = false;
				
				if (iPoint < iLastPos) {
					if (bForward) {
						bRotate = true;
						bForward = false;
					}
				}
				else {
					if (!bForward) {
						bRotate = true;
						bForward = true;
					}
				}
				TMovePoint{vInitPosition + vDirection * c_fIntervalDist * (iPoint + 1), bRotate};
				iLastPos = iPoint;
			}
			else {
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_begin");
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_end");
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_begin");
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_end");
				@WaitForAnimEnd();
			}
		}
		
		object scene;
		@GetScene(scene);

		TMovePoint{GetLocatorPosition(scene, "pt_ratf" + Index), !bForward};
		
		TriggerActor("rats_manager", "race_over" + Index);
		
		@Sleep(3);
		@RemoveActor(self());
	}
}

task TMovePoint
{
	void init(Vector vDestination, bool bRotate) {
		if (bRotate) {
			@WaitForAnimEnd();

			Vector vCurPos;
			@GetPosition(vCurPos);
			Vector vDelta = vDestination - vCurPos;
			bool bLeft;
			@RotateAsync(vDelta.x, vDelta.z, PI * 2, bLeft);
			@PlayAnimation("all", (bLeft)? "rotate_left" : "rotate_right");
			@WaitForAnimEnd();
			@StopAsync();
			@Rotate(vDelta.x, vDelta.z);
		}

		@SetTimer(c_iStuckTimer, c_iStuckTimeout);
		bool bSuccess;
		@MovePoint(vDestination, true, bSuccess);
		@KillTimer(c_iStuckTimer);
		
		if (!bSuccess) {
			object scene;
			@GetScene(scene);
			@Teleport(self(), scene, vDestination, Normalize(vDestination - GetActorPosition()));
		}
	}
	
	void OnTimer(int id) {
		if (id == c_iStuckTimer) {
			@Stop();
		}
	}
}
