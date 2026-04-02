include std.sci

task TFollowBase
{
	var bool m_bTerminate;
	var object m_objActor;

	bool init(object actor, float fFollowDist, float fLooseDist, bool bRun, bool bRotate) {
		bool bSuccess;
		m_bTerminate = false;
		m_objActor = actor;
		bool bAfterStop = bRotate;
		for (;;) {
			if (!ContinueFollow(actor))
				return false;
			object path;
			Vector vDestPosition;
			actor->GetPosition(vDestPosition);
			Vector vCurPosition;
			@GetPosition(vCurPosition);
			Vector vDiff = vDestPosition - vCurPosition;
			float fDist2 = (vDiff | vDiff);
			if (fLooseDist > 0 && fDist2 > fLooseDist * fLooseDist) {
				@Stop();
				return false;
			}
			if (fDist2 > fFollowDist * fFollowDist) {
				actor->GetPFPosition(vDestPosition);
				object NewPath;
				@FindPathTo(NewPath, vDestPosition);
				if (NewPath != null) {
					path = NewPath;
					NewPath = null;
				}
				if (path != null) {
					if (bAfterStop) {
						bAfterStop = false;
						@RotatePath(path, bSuccess);
						if (!bSuccess)
							break;
					}
					@SetTimer(0, 0.3);
					@FollowPath(path, bRun, bSuccess, GetWalkPrefix(), GetRunPrefix());
					if (!bSuccess) {
						if (m_bTerminate) {
							path = null;
							break;
						}
						else {
							continue;
						}
					}
					else {
						path = null;
					}
				}
				else {
					@KillTimer(0);
					@Sleep(0.5, bSuccess);
					if (!bSuccess) {
						if (m_bTerminate) {
							path = null;
							break;
						}
					}
					@SetTimer(0, 0.3);
				}
			}
			else {
				@KillTimer(0);
				break;
			}
		}
		return !m_bTerminate;
	}

	void OnTimer(int id) {
		if (id != 0)
			return;
		if (!ContinueFollow(m_objActor)) {
			m_bTerminate = true;
		}
		@KillTimer(0);
		@Stop();
	}


	void OnCollision(object obj) {
		@RequestClearPath(obj);
	}
	
	void CancelActivity(void) {
		m_bTerminate = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
	
	bool ContinueFollow(object actor) {
		return IsAccessible(actor);
	}
	
	string GetWalkPrefix(void) {return "walk";}
	string GetRunPrefix(void) {return "run";}
}

task TFollowPointBase
{
	var bool m_bTerminate;

	bool init(Vector vPos, Vector vDir, float fFollowDist, float fLooseDist, bool bRun, bool bRotate) {
		bool bSuccess;
		m_bTerminate = false;
		bool bAfterStop = bRotate;
		for (;;) {
			if (!ContinueFollow())
				return false;
			object path;
			Vector vDestPosition = vPos;
			Vector vCurPosition;
			@GetPosition(vCurPosition);
			Vector vDiff = vDestPosition - vCurPosition;
			float fDist2 = (vDiff | vDiff);
			if (fLooseDist > 0 && fDist2 > fLooseDist * fLooseDist) {
				@Stop();
				return false;
			}
			if (fDist2 > fFollowDist * fFollowDist) {
				object NewPath;
				@FindPathTo(NewPath, vDestPosition);
				if (NewPath != null) {
					path = NewPath;
					NewPath = null;
				}
				if (path != null) {
					if (bAfterStop) {
						bAfterStop = false;
						@RotatePath(path, bSuccess);
						if (!bSuccess)
							break;
					}
					@SetTimer(0, 0.3);
					@FollowPath(path, bRun, bSuccess, GetWalkPrefix(), GetRunPrefix());
					if (!bSuccess) {
						if (m_bTerminate) {
							path = null;
							break;
						}
						else {
							continue;
						}
					}
					else {
						path = null;
					}
				}
				else {
					@KillTimer(0);
					@Sleep(0.5, bSuccess);
					if (!bSuccess) {
						if (m_bTerminate) {
							path = null;
							break;
						}
					}
					@SetTimer(0, 0.3);
				}
			}
			else {
				@KillTimer(0);
				break;
			}
		}
		
		if (!m_bTerminate) {
			@RotateAsync(vDir.x, vDir.z);
		}
		return !m_bTerminate;
	}

	void OnTimer(int id) {
		if (id != 0)
			return;
		if (!ContinueFollow()) {
			m_bTerminate = true;
		}
		@KillTimer(0);
		@Stop();
	}


	void OnCollision(object obj) {
		@RequestClearPath(obj);
	}
	
	void CancelActivity(void) {
		m_bTerminate = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
	
	bool ContinueFollow(object actor) {
		return IsAccessible(actor);
	}
	
	string GetWalkPrefix(void) {return "walk";}
	string GetRunPrefix(void) {return "run";}
}
