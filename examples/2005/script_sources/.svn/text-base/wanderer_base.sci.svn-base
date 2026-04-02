include std.sci

task TWanderBase
{
	var bool m_bTerminate;
	var bool m_bKeepPoint;

	void init(void) {
		m_bTerminate = false;
		m_bKeepPoint = false;

		float fRandomTime;
		@rand(fRandomTime, 0.5);
		@Sleep(fRandomTime);
		Vector vDestPosition;
		while (!m_bTerminate) {
			if (!m_bKeepPoint) {
				for (;;) {
					Vector vCurPos;
					@GetPosition(vCurPos);
					bool bFound;
					@GetRandomPFPointInCircle(vDestPosition, vCurPos, GetCircleRadius(), bFound);
					if (bFound)
						break;
					@Sleep(1);
				}
			}
			else {
				m_bKeepPoint = false;
			}
			object path = FindPathTo(vDestPosition);
			if (path != null) {
				bool bSuccess;
				@RotatePath(path, bSuccess);
				if (bSuccess) {
					@FollowPath(path, GetFollowRunMode(), bSuccess);
					path = null;
					if (bSuccess) {
						TIdle{};
					}
				}
			}
			else {
				@Sleep(1);
			}
		}
	}
	
	float GetCircleRadius(void) {
		float fDistance;
		@GetCameraFarDistance(fDistance);
		return fDistance;
	}
	
	void OnCollision(object obj) {
		@RequestClearPath(obj);
	}
	
	void OnActorStuck(void) {
		@Stop();
	}
	
	void CancelActivity(void) {
		m_bTerminate = true;
		m_bKeepPoint = false;
		@Stop();
		@StopGroup0();
	}

	void CancelActivityAndKP(void) {
		m_bTerminate = true;
		m_bKeepPoint = true;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
	
	bool GetFollowRunMode(void) {return false;}

	object FindPathTo(Vector vDestPosition) {
		object path;
		@FindShiftedPathTo(path, vDestPosition);
		return path;
	}
}
