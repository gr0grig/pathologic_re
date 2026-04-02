include std.sci

task TStationaryBase
{
	var Vector m_vDirection;
	var Vector m_vPFPosition;
	
	void init(void) {
		@GetPFPosition(m_vPFPosition);
		@GetDirection(m_vDirection);
		
		for (;;) {
			OnResumeActivity();
			int iWaitTime;
			@irand(iWaitTime, 10);
			bool bSuccess;
			@Sleep(iWaitTime + 5, bSuccess);
			if (bSuccess) {
				DoSomething();
			}
			else {
				for (;;) {
					OnResumeActivity();
					Vector vCurPos;
					@GetPFPosition(vCurPos);
					if (VectorDistSqr(m_vPFPosition, vCurPos) > 200 * 200) {
						object path;
						@FindPathTo(path, m_vPFPosition);
						if (path != null) {
							@RotatePath(path, bSuccess);
							if (!bSuccess)
								continue;
							@FollowPath(path, false, bSuccess);
							if (!bSuccess)
								continue;
							@Rotate(m_vDirection.x, m_vDirection.z, bSuccess);
							if (!bSuccess)
								continue;
							@WaitForAnimEnd(bSuccess);
							if (!bSuccess)
								continue;
							break;
						}
						else {
							@Sleep(1);
						}
					}
					else {
						@Rotate(m_vDirection.x, m_vDirection.z, bSuccess);
						if (!bSuccess)
							continue;
						@WaitForAnimEnd(bSuccess);
						if (!bSuccess)
							continue;
						break;
					}
				}
			}
		}
	}
	
	void CancelActivity(void) {
		@StopGroup0();
		@Stop();
	}

	void OnResumeActivity(void) {}
	
	// void DoSomething(void) = 0;

}
