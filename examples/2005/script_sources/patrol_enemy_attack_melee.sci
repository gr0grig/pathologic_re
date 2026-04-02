include std.sci
include follow_attack.sci

task TFollowAttackMeleeBase : TFollowAttackBase
{
}

task TAttackMeleeBase
{
	var object m_Victim;
	var int m_iAttackTypes;
	var int m_iSoundCount;
	var bool m_bStopAttack, m_bExit;
	var float m_fBackJumpLength;
	
	var int m_iSoundAttackIndex;
	
	void init(object actor, bool bPrepare, float fAttackDistance) {
		InitConstants();
		
		m_iSoundAttackIndex = 0;
		
		float fFollowDist;
		if (actor->FuncExist("@GetAttackDistance", 1)) {
			actor->GetAttackDistance(fFollowDist);
			fFollowDist += 50;
		}
		else {
			fFollowDist = fAttackDistance;
		}
		if (fFollowDist >= 150) {
			fFollowDist = 150;
		}
		
		Vector vVictimPos;
		Vector vPos;

		m_bStopAttack = false;
		m_Victim = actor;
		bool bPlayer;
		@IsPlayerActor(m_Victim, bPlayer);
		if (bPlayer) {
			@PlayGlobalMusic("attack");
		}

		bool bFromAttack;
		if (bPrepare) {
			bFromAttack = false;
		}
		else {
			bFromAttack = true;
		}
		float fLongAttackDist = c_fLongAttackDistance + fFollowDist;
		while (IsAccessible(m_Victim) && !m_bStopAttack && !m_bExit) {
			PlayAttackMusic();

			m_Victim->GetPFPosition(vVictimPos);
			@GetPFPosition(vPos);
			Vector vDist = vVictimPos - vPos;
			float fDist2 = (vDist | vDist);
			
			if (fDist2 >= fLongAttackDist * fLongAttackDist) {
				if (!TFollowAttackMelee{m_Victim, fFollowDist, c_fLooseDistance, true, false}) {
					m_bStopAttack = true;
					break;
				}
				bFromAttack = false;
			}
			else if (fDist2 >= fAttackDistance * fAttackDistance) {
				Vector vDestPosition;
				m_Victim->GetPFPosition(vDestPosition);
				bool bCanReach;
				@CanReachByPF(bCanReach, vDestPosition);
				if (!bCanReach) {
					if (!TFollowAttackMelee{m_Victim, fFollowDist, c_fLooseDistance, true, false}) {
						m_bStopAttack = true;
						break;
					}
					bFromAttack = false;
					continue;
				}

				if (!bFromAttack) {
					RotateAsyncToActor(m_Victim);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					PlayAttackMusic();
					@StopAsync();
					bFromAttack = true;
					if (!IsAccessible(m_Victim) || m_bExit)
						break;
				}
				float fRand;
				@rand(fRand);
				if (fRand < 1 - c_fForceJumpProbability || IsEnemyAttacking()) {
					@Face(m_Victim);
					OnAttackStay();
					@PlayAnimation("all", "attack_stay");
					Camp(fAttackDistance);
					@StopAsync();
				}
				else {
					@Face(m_Victim);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					PlayAttackMusic();
					@SetSpeed([0, 0, 0]);
					@Stop();
					@StopAsync();
					if (!IsEnemyAttacking()) {
						if (!IsAccessible(m_Victim) || m_bExit)
							break;
						m_Victim->GetPFPosition(vVictimPos);
						@GetPFPosition(vPos);
						vDist = vVictimPos - vPos;
						fDist2 = (vDist | vDist);
						if (fDist2 < fAttackDistance * fAttackDistance) {
							if (!PerformAttack(fAttackDistance))
								break;
						}
					}
				}
			}
			else {
				if (!PerformAttack(fAttackDistance))
					break;
				bFromAttack = true;
			}
		}
		@WaitForAnimEnd();
		if (m_bStopAttack || m_bExit)
			return;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if (bPlayer) {
			@Sleep(2.0);
		}
	}
	
	void CancelActivity() {
		@Stop();
		@StopAnimation();
		@StopGroup0();
		m_bExit = true;
	}
	
	void InitConstants(void) {
		m_iAttackTypes = 0;
		for (;;) {
			bool bExist;
			@HasAnimation(bExist, "all", "attack_begin" + (m_iAttackTypes + 1));
			if (!bExist) break;
			++m_iAttackTypes;
		}
		
		m_iSoundCount = 0;
		for (;;) {
			bool bExist;
			@IsExisting3DSound(bExist, "attack" + (m_iSoundCount + 1));
			if (!bExist) break;
			++m_iSoundCount;
		}
		
		Vector vOffset;
		@GetAnimationOffset(vOffset, "all", "bjump");
		m_fBackJumpLength = -vOffset.z;
	}
	
	void PerformDamage(float fAttackDistance, int iAttackType) {
		object victim;
		@GetVictim(fAttackDistance * 0.9, victim);
		@ReportAttack(m_Victim);
		if (victim == m_Victim) {
			float fHit = GetDamageAmount(victim, iAttackType);
			float fDamage = Damage(victim, fHit, GetDamageType(victim, iAttackType));
			@ReportHit(m_Victim, GetHitType(), fDamage, fHit);
			OnDamageTarget(victim, fDamage);
		}
	}
	
	bool PerformAttack(float fAttackDistance) {
		PlayAttackMusic();

		int iAttackType;
		@irand(iAttackType, m_iAttackTypes);
		++iAttackType;
		
		@Face(m_Victim);
		@SetAttackState(true);
		@PlayAnimation("all", "attack_begin" + iAttackType);
		@WaitForAnimEnd();
		PlayAttackSound();
		if (!IsAccessible(m_Victim) || m_bExit) {
			@StopAsync();
			return false;
		}

		PerformDamage(fAttackDistance, iAttackType);
		bool bMiddle;
		@HasAnimation(bMiddle, "all", "attack_middle" + iAttackType);
		if (bMiddle) {
			@PlayAnimation("all", "attack_middle" + iAttackType);
			@WaitForAnimEnd();
			PlayAttackMusic();
			if (!IsAccessible(m_Victim) || m_bExit) {
				@StopAsync();
				return false;
			}
			PerformDamage(fAttackDistance, iAttackType);
			for (int i = 1; ; ++i) {
				string anim = "attack_middle" + iAttackType + "_" + i;
				@HasAnimation(bMiddle, "all", anim);
				if (!bMiddle)
					break;
				@PlayAnimation("all", anim);
				@WaitForAnimEnd();
				PlayAttackMusic();
				if (!IsAccessible(m_Victim) || m_bExit) {
					@StopAsync();
					return false;
				}
				PerformDamage(fAttackDistance, iAttackType);
			}
		}

		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + iAttackType);
		if (OnPerformedAttack()) {
			Defend(c_fEvadeProbability);
			@StopAsync();
		}
		
		return true;
	}
	
	void StopAttack(void) {
		m_bStopAttack = true;
	}
	
	bool Defend(float fEvadeProbability) {
		float fEvadeProb;
		/*@rand(fEvadeProb);
		if (fEvadeProb <= c_fFalseAttackProbability) {
			if (EvadeAct())
				return true;
		}*/
		@rand(fEvadeProb);
		if (fEvadeProb < fEvadeProbability) {
			for (;;) {
				bool bPlaying;
				@IsAnimationPlaying(bPlaying);
				if (!bPlaying)
					break;
				if (Evade())
					return true;
				@sync();
			}
		}
		else {
			@WaitForAnimEnd();
			PlayAttackMusic();
		}
		return false;
	}
	
	bool Camp(float fAttackDistance) {
		for (;;) {
			bool bPlaying;
			@IsAnimationPlaying(bPlaying);
			if (!bPlaying)
				break;
			if (Evade())
				return true;
			if (!IsAccessible(m_Victim) || m_bExit)
				return false;
			Vector vVictimPos, vPos;
			m_Victim->GetPFPosition(vVictimPos);
			@GetPFPosition(vPos);
			Vector vDist = vVictimPos - vPos;
			float fDist2 = (vDist | vDist);
			if (fDist2 < fAttackDistance * fAttackDistance) {
				PerformAttack(fAttackDistance);
				return true;
			}
			@sync();
		}
		PlayAttackMusic();
		return false;
	}
	
	bool ShouldEvade(void) {
		if (!IsAccessible(m_Victim) || m_bExit)
			return false;
		if (IsEnemyAttacking()) {
			Vector vVictimPos, vPos;
			m_Victim->GetPFPosition(vVictimPos);
			@GetPFPosition(vPos);
			Vector vDist = vVictimPos - vPos;
			float fDist2 = (vDist | vDist);

			float fAttackDist;
			m_Victim->GetAttackDistance(fAttackDist);
			fAttackDist += 50;

			return fDist2 <= fAttackDist * fAttackDist;
		}
		return false;
	}
	
	bool Evade(void) {
		if (ShouldEvade() && EvadeAct()) {
			return true;
		}
		return false;
	}
	
	bool EvadeAct(void) {
		object scene;
		@GetScene(scene);
		
		bool bEvaded = false;
		for (;;) {
			float fDist;
			@FindDirLength(fDist, -GetActorDelta(m_Victim), m_fBackJumpLength);
			if (fDist < m_fBackJumpLength) {
				break;
			}

			@Face(m_Victim);
			@PlayAnimation("all", "bjump");
			Vector vVictimPos, vPos;
			m_Victim->GetPFPosition(vVictimPos);
			@GetPFPosition(vPos);
			@WaitForAnimEnd();
			PlayAttackMusic();
			@StopAsync();
			@SetSpeed([0, 0, 0]);
			bEvaded = true;
			
			if (!ShouldEvade())
				break;
		}

		return bEvaded;
	}
	
	bool IsEnemyAttacking(void) {
		if (m_Victim->FuncExist("IsAttacking", 1)) {
			bool bEnemyAttacking;
			m_Victim->IsAttacking(bEnemyAttacking);
			return bEnemyAttacking;
		}
		return false;
	}
	
	void PlayAttackSound(void) {
		if (!m_iSoundCount)
			return;
		if (m_iSoundAttackIndex) {
			if (--m_iSoundAttackIndex > 0)
				return;
		}
		float fRand;
		@rand(fRand);
		if (fRand < GetAttackSoundProbability()) {
			int iNSound;
			@irand(iNSound, m_iSoundCount);
			++iNSound;
			@Speak("attack" + iNSound);
			m_iSoundAttackIndex = GetAttackSoundFreq();
		}
	}
	
	void PlayAttackMusic(void) {
		PlayAttackMusic(m_Victim);
	}
	
	//int GetHitType(void) { return c_iHitTypePhysical; }
	
	void OnAttackStay(void) {
		PlayAnimationSound("attack_stay");
	}

	void OnDamageTarget(object actor, float fDamage) {}
	bool OnPerformedAttack(void) { return true; }
	
	int GetAttackSoundFreq(void) {return 1;}
	float GetAttackSoundProbability(void) {return 0.5;}


	// float GetDamageAmount(object actor, int iAttackType) = 0
	// int GetDamageType(object actor, int iAttackType) = 0
	
}
