include std.sci

task TPathFollower
{
	var int m_iTotalPoints;
	var bool m_bStop;

	bool init(string prefix, int point) {
		object scene;
		@GetScene(scene);
		for (m_iTotalPoints = 0; ; ++m_iTotalPoints) {
			bool bFound;
			scene->GetLocator(prefix + (m_iTotalPoints + 1), bFound);
			if (!bFound)
				break;
		}
		
		if (!m_iTotalPoints)
			return false;
		
		for (;;) {
			while (point < m_iTotalPoints) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator(prefix + (point + 1), bFound, vPos, vDir);
				if (RotateToPoint(vPos)) {
					bool bSuccess;
					@MovePoint(vPos, 0, bSuccess);
					if (bSuccess) {
						@WaitForAnimEnd(bSuccess);
						if (bSuccess) {
							OnPointReach(point, vPos, vDir);
							++point;
							continue;
						}
					}
				}
				if (m_bStop)
					return true;
			}
			
			point = m_iTotalPoints - 2;
			while (point >= 0) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator(prefix + (point + 1), bFound, vPos, vDir);
				if (RotateToPoint(vPos)) {
					bool bSuccess;
					@MovePoint(vPos, 0, bSuccess);
					if (bSuccess) {
						@WaitForAnimEnd(bSuccess);
						if (bSuccess) {
							OnPointReach(point, vPos, vDir);
							--point;
							continue;
						}
					}
				}
				if (m_bStop)
					return true;
			}
			
			point = 0;
		}
		
		return true;
	}
	
	void CancelActivity(void) {
		@Stop();
		m_bStop = true;
	}
	
	void OnPointReach(int point, Vector vPos, Vector vDir) {}
}
