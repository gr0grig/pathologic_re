include std.sci

const float c_fStopDist = 50;
const float c_fNormalRetreatAngle = PI / 1.8;
const float c_fCorneredRetreatAngle = PI  / 1.2;
const float c_fRetreatUpdateTime = 0.5;
const float c_fDistInertia = 1.5;
const float c_fMaxTraceDist = 7000;
const float c_fFacedAngle = 110 * PI / 180;
const int c_iRayCount = 32;

const int c_iRetreatTimer = 120;

task TRetreatBase
{
	var object m_Enemy;
	var Vector m_vPoint;
	var bool m_bStop;
	
	Vector FindBestDir(float fAngle) {
		Vector vCurPos, vEnemyPos;
		@GetPosition(vCurPos);
		m_Enemy->GetPosition(vEnemyPos);
		Vector vCurDir;
		@GetDirection(vCurDir);
		Vector vSearchDir = Normalize(Normalize(vCurPos - vEnemyPos) + vCurDir * 0.75);
		Vector vBestDir;
		float fDist;
		@FindLongestDir(vBestDir, fDist, vSearchDir, fAngle, c_iRayCount, c_fMaxTraceDist);
		fDist -= 100;
		if (fDist < 0) fDist = 0;
		return vBestDir * fDist;
	}
	
	void init(object actor) {
		m_Enemy = actor;
		Vector vDir = FindBestDir(c_fNormalRetreatAngle);
		float fDist2 = (vDir | vDir);
		if (fDist2 < c_fStopDist * c_fStopDist) {
			vDir = FindBestDir(c_fCorneredRetreatAngle);
			fDist2 = (vDir | vDir);
			if (fDist2 < c_fStopDist * c_fStopDist) {
				@Trace("Can't retreat, distance: " + sqrt(fDist2));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(vDir.x, vDir.z);
		m_vPoint = GetActorPosition() + vDir;
		@SetTimer(c_iRetreatTimer, c_fRetreatUpdateTime);
		m_bStop = false;
		do {
			bool bSuccess;
			@MovePoint(m_vPoint, 1, bSuccess);
			if (bSuccess) {
				if (m_Enemy == null) {
					break;
				}
				else {
					Vector vDir = FindBestDir(c_fCorneredRetreatAngle);
					float fDist2 = (vDir | vDir);
					if (fDist2 >= c_fStopDist * c_fStopDist) {
						m_vPoint = GetActorPosition() + vDir;
						@SetTimer(c_iRetreatTimer, c_fRetreatUpdateTime);
					}
					else {
						break;
					}
				}
			}
		} while (!m_bStop);
	}
	
	void OnTimer(int id) {
		if (id != c_iRetreatTimer)
			return;
		if (m_Enemy == null) {
			@Stop();
			@KillTimer(1);
			m_bStop = true;
		}
		else {
			Vector vActorDir;
			@GetDirection(vActorDir);
			float fCurDist;
			@FindDirLength(fCurDist, vActorDir, c_fMaxTraceDist);
			Vector vDir = FindBestDir(c_fNormalRetreatAngle);
			float fDist2 = (vDir | vDir);
			if (fDist2 >= c_fStopDist * c_fStopDist && (fDist2 >= fCurDist * fCurDist * (c_fDistInertia * c_fDistInertia) || IsFaced())) {
				@Stop();
				m_vPoint = GetActorPosition() + vDir;
			}
		}
	}
	
	void CancelActivity(void) {
		@Stop();
		@KillTimer(c_iRetreatTimer);
		m_bStop = true;
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
	
	bool IsFaced(void) {
		Vector vDir;
		@GetDirection(vDir);
		Vector vDelta = GetActorDelta(m_Enemy);
		return CosAngle(vDir, vDelta) >= cos(c_fFacedAngle);
	}
}
