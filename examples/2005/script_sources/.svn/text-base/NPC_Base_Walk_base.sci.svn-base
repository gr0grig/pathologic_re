include std.sci
include NPC_base.sci
include idle_logic.sci

// CONSTANTS
const float c_fNoticeTimer = 10;
const float c_fCheckDistTimer = 0.5;
const float c_fNoticeDist = 250;
// CONSTANTS

const int c_iNoticeTimerID = 20;
const int c_iCheckDistTimerID = 21;

var string g_LocPrefix;

string GetPointName(int n)
{
	return (n == 0)? ("pt_" + g_LocPrefix) : ("pt_" + g_LocPrefix + n);
}

task TNPCBaseWalk
{
	var float m_fStopDist, m_fMaxError;
	var int m_iPointCount;

	void init(void) {
		@SensePlayerOnly(true);

		GetPrefix();
		
		object scene;
		@GetScene(scene);
		for (m_iPointCount = 0; ; ++m_iPointCount) {
			bool bFound;
			scene->GetLocator(GetPointName(m_iPointCount), bFound);
			if (!bFound)
				break;
		}
		
		if (!IsLoaded()) {
			TWaitForLoad{};
		}
		
		CalculateStopDistance();
		
		for (;;) {
			int iPoint;
			@irand(iPoint, m_iPointCount);
			bool bFound;
			Vector vPos, vDir;
			scene->GetLocator(GetPointName(iPoint), bFound, vPos, vDir);
			Vector vMoveOffset = vPos - GetActorPosition();
			if (Length2D(vMoveOffset) > m_fMaxError) {
				float fHeight;
				@GetHeight(fHeight);
				Vector vReachPos = vPos;
				vReachPos.y += fHeight;
				bool bCanReach;
				@CanReachByPF(bCanReach, vReachPos);
				if (bCanReach) {
					Vector vMovePos = vPos - vMoveOffset * (m_fStopDist / sqrt(vMoveOffset | vMoveOffset));
					if (TGoToPoint{vMovePos, vDir})
						TPlayPointAnim{iPoint};
				}
			}
			@Sleep(1);
		}
	}

	void GetPrefix(void) {
		string prefix;
		@GetProperty("loc", prefix);
		g_LocPrefix = prefix;
	}
	
	void CalculateStopDistance(void) {
		Vector vStep1, vStep2;
		@GetAnimationOffset(vStep1, "all", "walk_stopl");
		@GetAnimationOffset(vStep2, "all", "walk_stopr");
		m_fStopDist = (vStep1.z + vStep2.z) / 2.0;
		m_fMaxError = absf(vStep1.z - m_fStopDist) + 40;
	}

	void OnUnload() {
		global.OnUnload();
		TWaitForLoad{};
	}

	void OnUse(object actor) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive) {
			disable OnUse;
			RotateToActor(actor);
			enable OnUse;
			PerformUse(actor);
		}
	}
}

task TGoToPoint
{
	var bool m_bNotice;

	bool init(Vector vPos, Vector vDir) {
		m_bNotice = true;

		@SetTimer(c_iCheckDistTimerID, c_fCheckDistTimer);
		
		bool bSuccess;
		for (;;) {
			while (!RotateToPoint(vPos)) ;
			@MovePoint(vPos, false, bSuccess);
			if (bSuccess)
				break;
		}
		@KillTimer(c_iNoticeTimerID);
		@KillTimer(c_iCheckDistTimerID);
		m_bNotice = false;
		@WaitForAnimEnd(bSuccess);
		if (!bSuccess)
			return false;
		@Rotate(vDir.x, vDir.z, bSuccess);
		if (!bSuccess)
			return false;
		return true;
	}

	void OnUnload() {
		m_bNotice = true;
		CancelActivity();
		global.OnUnload();
		TWaitForLoad{};
	}

	void OnUse(object actor) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive) {
			CancelActivity();
			disable OnUse;
			RotateToActor(actor);
			enable OnUse;
			PerformUse(actor);
			m_bNotice = false;
		}
	}
	
	/*void OnSee(object actor) {
		if (m_bNotice)
			OnCollision(actor);
	}*/

	void OnCollision(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			CancelActivity();
			TNoticePlayer{actor};
			m_bNotice = false;
			@SetTimer(c_iNoticeTimerID, c_fNoticeTimer);
		}
	}
	
	void OnTimer(int id) {
		if (id == c_iNoticeTimerID) {
			m_bNotice = true;
			@KillTimer(c_iNoticeTimerID);
		}
		else if (id == c_iCheckDistTimerID) {
			if (m_bNotice) {
				object player;
				@FindActor(player, "player");
				if (player && GetActorDistanceSqr(player) <= c_fNoticeDist * c_fNoticeDist) {
					OnCollision(player);
				}
			}
		}
	}

	void CancelActivity(void) {
		@Stop();
	}
}

task TNoticePlayer
{
	void init(object actor) {
		bool bSuccess;
		@WaitForAnimEnd(bSuccess);
		if (!bSuccess)
			return;
		RotateAsyncToActor(actor);
		@Sleep(6);
	}

	void OnUnload() {
		CancelActivity();
		global.OnUnload();
		TWaitForLoad{};
	}

	void OnUse(object actor) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive) {
			CancelActivity();
			disable OnUse;
			RotateToActor(actor);
			enable OnUse;
			PerformUse(actor);
		}
	}

	void CancelActivity(void) {
		@StopGroup0();
		@StopAnimation();
	}
}

task TPlayPointAnim
{
	void init(int iAnimation) {
		string prop = (iAnimation)? "ptidle" + iAnimation : "ptidle";
		bool bHas;
		@HasProperty(prop, bHas);
		if (bHas) {
			string prefix;
			@GetProperty(prop, prefix);
			int iCount = GetAnimationCount(prefix);
			int iAnim;
			@irand(iAnim, iCount);
			@PlayAnimation("all", GetAnimationName(prefix, iAnim));
			@WaitForAnimEnd();
		}
		else {
			int iCount = GetIdleAnimationCount();
			if (iCount) {
				int iAnim;
				@irand(iAnim, iCount);
				@PlayAnimation("all", GetIdleAnimation(iAnim));
				@WaitForAnimEnd();
			}
		}
	}

	void OnUnload() {
		global.OnUnload();
		TWaitForLoad{};
	}

	string GetAnimationName(string prefix, int n) {
		return (n == 0)? prefix : (prefix + n);
	}
	
	int GetAnimationCount(string prefix) {
		int iCount;
		for (iCount = 0; ; ++iCount) {
			bool bHas;
			@HasAnimation(bHas, "all", GetAnimationName(prefix, iCount));
			if (!bHas)
				break;
		}
		return iCount;
	}
}
