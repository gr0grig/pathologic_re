include std.sci

task TPointsFollower
{
	var bool m_bStop;

	bool init(string prefix, int point, bool bRun) {
		object scene;
		@GetScene(scene);
		
		Vector vLastDir;
		
		bool bSuccess;
		
		for (;;) {
			bool bFound;
			Vector vPos, vDir;
			scene->GetLocator(prefix + (point + 1), bFound, vPos, vDir);
			if (!bFound)
				break;
			vLastDir = vDir;
			@MovePoint(vPos, bRun, bSuccess);
			if (bSuccess) {
				OnPointReach(point, vPos, vDir);
				++point;
				continue;
			}
			if (m_bStop)
				return false;
		}
		
		@WaitForAnimEnd(bSuccess);
		if (!bSuccess) {
			if (m_bStop)
				return false;
		}
		for (;;) {
			bool bSuccess;
			@Rotate(vLastDir.x, vLastDir.z, bSuccess);
			if (bSuccess)
				break;
			if (m_bStop)
				return false;
		}
		
		return true;
	}
	
	void CancelActivity(void) {
		@Stop();
		@StopAnimation();
		m_bStop = true;
	}
	
	void OnPointReach(int point, Vector vPos, Vector vDir) {}
}

const float c_fLoadRadius = 3500.0;
const float c_fPerceptionDistance = 2000.0;

bool IsPointInLoadArea(Vector vPos) {
	return GetDistanceSqtrToLoadCenter(vPos) < c_fLoadRadius * c_fLoadRadius;
}

bool IsPointInPerceptionArea(Vector vPos) {
	return GetDistanceSqtrToLoadCenter(vPos) < c_fPerceptionDistance * c_fPerceptionDistance;
}

float GetDistanceSqtrToLoadCenter(Vector vPos) {
	object player;
	@FindActor(player, "player");
	if (!player)
		return 0;
		
	Vector vDist = GetActorPosition(player) - vPos;
	return (vDist | vDist);
}

// comments:
// points are spread so that they can't be all in load area
// distance between points is 15m max
int GetBestSpawnPoint(string prefix)
{
	Vector vBestPos;
	int iBestPoint = -1;
	object scene;
	@GetMainOutdoorScene(scene);

	int point = -1;
	for (;;) {
		++point;
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator(prefix + (point + 1), bFound, vPos, vDir);
		if (!bFound)
			break;
		if (!IsPointInLoadArea(vPos))
			continue;
			
		if (IsPointInPerceptionArea(vPos))
			continue;
			
		if (point < iBestPoint)
			continue;
			
		iBestPoint = point;
		vBestPos = vPos;
	}
	return (iBestPoint == -1) ? (point - 1) : iBestPoint;
}

int GetLastPathPoint(string prefix) {
	object scene;
	@GetMainOutdoorScene(scene);
	int point = 0;
	for (;;) {
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator(prefix + (point + 1), bFound, vPos, vDir);
		if (!bFound)
			break;
		++point;
	}
	return point;
}

