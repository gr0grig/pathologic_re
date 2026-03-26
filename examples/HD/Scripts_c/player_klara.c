// @IMPORTS: GetCurrentWeapon/1,IsWeaponHolstered/1,GetScene/1,BroadcastMessage/3,SetWeaponHolster/1,PlayAnimation/1,WaitForAnimEnd/0,HasAnimation/2,GetAttackDistance/1,GetDirection/1,GetVictimMaterialExact/5,PlaySound/1,irand/2,SetAttackState/1,ReportAttack/1,ReportHit/6,BroadcastPlayerDamage/2,IsShooting/1,GetWeaponItem/1,GetPlayerSelectedObject/1,GetWeaponProperty/3,SelectItem/3,RemoveItem/3,SetWeaponProperty/3,SetHandsItem/1,CreateStringVector/1,GetVariable/2,Diary/0,SetVariable/2,HasProperty/2,SetProperty/2,ApplyEffect/1,GetProperty/2,IsWalking/1,Sleep/1,IsAltShooting/1,KillTimer/1,Trigger/2,TriggerWeapon/1,RandVecCone3D/3,GetVictimMaterialExact/6,AddActorByType/6,IsPlayerActor/2,self/1,CreateObjectSet/1,CreateObjectVector/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,IsExistingSound/2,GetItemCountOfType/2,GetGroundMaterial/2,UnlockAchievement/1,GetMainOutdoorScene/1,AddBlankActor/4,SetDeathState/0,KillTimer/2,ModNoise/1,SetTimer/2,GetInvItemByName/2,RemoveItemByType/3,GetItemCount/2,GetItem/3,IsItemSelected/3,SignalDeath/1,Trace/1,Inventory/0,GetActiveScene/1,GetPosition/1,ShowMap/1,ShowMessage/0,ShowPlayerStats/1,ShowWindow/2,IsFlashlightOn/1,SwitchFlashlight/1,IsVisirOn/1,SwitchVisir/1,IsOverrideActive/1,rand/3
// @STRINGS: W:unholster|W:_unholster|W:_holster|W:scalpel|W:attack|W:_phase1|W:health|W:GetDirection|A:GetDirection|W:battack|W:_back|W:_hit|A:in|A:add|W:_phase2|W:use_begin|W:lp|A:GetProperty|W:locked|A:SetProperty|W:uses|W:use_success|W:use_fail|W:player_reputation_decrease.bin|W:player_klara_dream.bin|W:player_init|W:empty|W:lockpick|W:gun|W:effects|W:player_disease.bin|W:player_stat.bin|W:player_hit.bin|W:player_head.bin|W:player_flashlight.bin|W:player_visir.bin|W:player_vis.bin|W:player_eyes_height.bin|W:player_gifts.bin|A:size|A:get|W:walk|W:idle|W:healable|W:heal_phase1|W:heal|W:heal_phase2|W:punch_back|W:punch|W:punch_hit|W:ammo|W:revolver_ammo|W:_noammo|W:_reload|W:attack1|W:shot|W:_shot|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:armor|W:armor_|A:IsDead|A:GetScene|W:wood|W:metal|W:ground|W:water|W:carpet|W:stone|W:reputation|W:god_mode|W:kerosene|W:branch|W:step_|W:ACHIEVEMENT_MIGHT|W:player_death|W:play_death_klara.bin|W:durability|W:birdMaskAchievement|W:bird_mask|W:bird_balahon|A:GetItemID|W:ACHIEVEMENT_THEY|W:die|W:prc|W:Reputation is not changed for enemy: |W:Can't find main outdoor oscene|A:GetMap|W:Can't find map|A:GetName|W:pt_gmap_|A:GetLocator|W:FIXME: No map locator for scene : |A:SetMapParams|W:people.xml|W:flashlight_off|W:flashlight_on|W:flashlight_nofuel|W:visir|W:vcharge|W:player_shot
// @GLOBALS: 0:string:,1:object:,2:object:,3:object:
// @RUN_OP: 0x1ba
// @RUN_TASK: 3
// @TASK_0: vars= params=0
// @TASK_1: vars=bool params=0
// @EVENT_18: op=0x136 vars=int
// @TASK_2: vars=bool,bool params=0
// @EVENT_32: op=0x1ae vars=
// @TASK_3: vars= params=0
// @EVENT_13: op=0x273 vars=
// @EVENT_36: op=0x28c vars=
// @EVENT_15: op=0x2a5 vars=
// @EVENT_7: op=0x2b1 vars=int
// @EVENT_18: op=0x2dc vars=int
// @TASK_4: vars=bool params=0
// @EVENT_18: op=0x3b2 vars=int
// @TASK_5: vars=bool params=0
// @EVENT_18: op=0x420 vars=int
// @TASK_6: vars= params=0
// @STANDALONE_EVENT_44: op=0x75e vars=
// @STANDALONE_EVENT_20: op=0x765 vars=
// @STANDALONE_EVENT_21: op=0x76c vars=
// @STANDALONE_EVENT_45: op=0x773 vars=
// @STANDALONE_EVENT_7: op=0x80c vars=int
// @STANDALONE_EVENT_26: op=0x812 vars=string
// @STANDALONE_EVENT_16: op=0x81a vars=object,string
// @STANDALONE_EVENT_41: op=0x83c vars=object
// @STANDALONE_EVENT_31: op=0x846 vars=object,float,bool
// @STANDALONE_EVENT_19: op=0x868 vars=
// @STANDALONE_EVENT_17: op=0x86f vars=object
// @STANDALONE_EVENT_39: op=0x871 vars=float
// @STANDALONE_EVENT_18: op=0x88e vars=int
// @PE: 0x34,0x3f,0x136,0x1d4,0x1f9,0x203,0x2a5,0x2ec,0x3b2,0x3bd,0x420,0x51e,0x537,0x5cf,0x5f5,0x5fc,0x607,0x61e,0x627,0x631,0x642,0x6a3,0x71a,0x739,0x744,0x74f,0x753,0x757,0x75e,0x765,0x76c,0x773,0x7b8,0x80c,0x812,0x83c,0x868,0x86f

task_1_event_18(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_bool)
{
	var_7_bool = var_5_bool == (int)10;
	if(var_7_bool != 0) {
		var_0_bool = true;
	} else {
		var_5_bool = (int)0;
		func_2190();
	}
	return 0;
	
}


task_2_event_32(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	var_5_bool = 0;
	var_5_bool = 0;
	var_6_bool = var_0_bool == 0; //@nz
	if(var_6_bool != 0) {
		var_7_bool = var_1_bool;
		if(var_7_bool != 0) {
			var_5_bool = 1;
		}
	}
	if(var_5_bool != 0) {
		SetHandsItem((int)-1);
	}
	return 0;
}


task_3_event_13(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_string, var_7_bool, var_8_bool, var_9_string, var_10_bool)
{
	var_20_bool = 0; var_21_string = ""; var_22_bool = 0; var_23_bool = 0; var_24_string = ""; var_25_bool = 0;
	IsWeaponHolstered(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		func_752();
		GetCurrentWeapon(var_24_string);
		var_27_string = "";
		var_24_string = var_27_string;
		func_468(var_27_string);
		func_748();
		IsAltShooting(var_25_bool);
		var_642_bool = var_25_bool;
		if(var_642_bool != 0) {
			func_652();
		}
	}
	return 6;
}


task_3_event_36(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	var_5_bool = 0; var_6_string = ""; var_7_bool = 0; var_8_bool = 0; var_9_string = ""; var_10_bool = 0;
	IsWeaponHolstered(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		func_752();
		GetCurrentWeapon(var_9_string);
		var_9_string = "";
		func_515();
		func_748();
		IsShooting(var_10_bool);
		var_19_bool = var_10_bool;
		if(var_19_bool != 0) {
			func_627();
		}
	}
	return 6;
}


task_3_event_15(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_752();
	TaskCall(0);
	func_0();
	TaskReturn();
	func_748();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_bool)
{
	var_6_bool = 0; var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_int = 0;
	var_14_bool = 0; var_15_int = 0;
	var_5_bool = var_15_int;
	func_1985(var_14_bool, var_15_int);
	if(var_14_bool != 0) {
		return 8;
	}
	func_752();
	IsWeaponHolstered(var_10_bool);
	var_130_bool = var_10_bool == 0; //@nz
	if(var_130_bool != 0) {
		var_11_int = 0;

	Label_704:
		var_133_int = var_11_int + (int)1;
		var_134_int = "idle" + var_133_int;
		HasAnimation(var_12_bool, var_134_int);
		var_135_bool = var_12_bool == 0; //@nz
		if(var_135_bool != 0) {
		} else {
			var_11_int = var_11_int + (int)1;
			goto Label_704;
		}
		var_136_int = var_11_int;
		if(var_136_int != 0) {
			irand(var_13_int, var_11_int);
			var_139_int = var_13_int + (int)1;
			var_140_int = "idle" + var_139_int;
			PlayAnimation(var_140_int);
			WaitForAnimEnd();
		}
	}
	func_748();
	return 8;
	
}


task_3_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_bool)
{
	var_6_string = ""; var_7_string = "";
	var_9_bool = var_5_bool == (int)11;
	if(var_9_bool != 0) {
		GetCurrentWeapon(var_7_string);
		var_10_string = "";
		var_7_string = var_10_string;
		func_505(var_10_string);
	} else {
		var_5_bool = (int)0;
		func_2190();
	}
	return 2;
	
}


task_4_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_bool)
{
	var_7_bool = var_5_bool == (int)10;
	if(var_7_bool != 0) {
		var_0_bool = true;
	} else {
		var_5_bool = (int)0;
		func_2190();
	}
	return 0;
	
}


task_5_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int)
{
	var_7_bool = var_5_int == (int)11;
	if(var_7_bool != 0) {
		func_1037();
	}
	var_5_int = (int)0;
	func_2190();
	return 0;
}


event_44(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1860();
	func_1808();
	return 0;
}


event_20(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1849();
	func_1808();
	return 0;
}


event_21(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1829();
	func_1818();
	return 0;
}


event_45(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1839();
	return 0;
}


event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int)
{
	var_6_bool = 0; var_7_int = 0;
	var_5_int = var_7_int;
	func_1985(var_6_bool, var_7_int);
	return 0;
}


event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_string)
{
	var_7_bool = var_5_string == "die";
	if(var_7_bool != 0) {
		func_1787();
	}
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_string)
{
	var_7_float = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_float = 0; var_11_object = Obj(); var_12_object = Obj();
	var_14_bool = var_6_string == "health";
	if(var_14_bool != 0) {
		GetProperty("health", var_10_float);
		var_17_bool = var_10_float < (float)0.0010000000474974513;
		if(var_17_bool != 0) {
			SignalDeath(var_5_object);
		}
	} else {
		var_20_bool = var_6_string == "reputation";
		if(var_20_bool == 0) goto Label_2099;
		GetScene(var_11_object);
		var_22_object = Obj();
		func_1519(var_22_object);
		BroadcastMessage("prc", var_22_object, var_11_object);
		var_11_object = 0;
	}
Label_2099:
	CreateStringVector(var_12_object);
	@@var_12_object:add(var_6_string);
	SendWorldWndMessage((int)10, var_12_object);
	return 6;
	
}
EMIT "Stack[-1] = 0";


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	var_6_bool = 0;
	func_1681(var_6_bool);
	var_10_bool = var_6_bool == 0; //@nz
	if(var_10_bool != 0) {
		func_1787();
	}
	return 0;
}


event_31(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_float, var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	var_10_bool = var_5_object == 0; //@nz
	if(var_10_bool != 0) {
		return 2;
	}
	var_11_object = GlobalVars[2];
	@@var_11_object:in(var_9_bool, var_5_object);
	var_12_bool = var_9_bool;
	if(var_12_bool != 0) {
		var_14_int = "Reputation is not changed for enemy: " + var_5_object;
		Trace(var_14_int);
		return 2;
	}
	var_15_bool = var_7_bool == 0; //@nz
	if(var_15_bool != 0) {
		var_16_object = GlobalVars[1];
		@@var_16_object:in(var_9_bool, var_5_object);
		var_17_bool = var_9_bool;
		if(var_17_bool != 0) {
			return 2;
		}
	}
	var_18_object = GlobalVars[1];
	@@var_18_object:add(var_5_object);
	var_19_bool = 0; var_20_object = Obj(); var_21_float = 0;
	func_1519(Obj());
	var_22_object = var_20_object;
	var_6_float = var_21_float;
	func_1602(var_19_bool, var_20_object, var_21_float);
	return 2;
}


event_19(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_2368();
	func_1818();
	return 0;
}


event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	return 0;
}


event_39(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_float)
{
	var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0;
	var_11_bool = var_5_float > (float)770.0;
	if(var_11_bool != 0) {
		Trace(var_5_float);
		var_13_int = var_5_float - (float)770.0;
		var_8_float = var_13_int * (float)0.003499999875202775;
		var_15_float = 0; var_16_object = Obj(); var_17_float = 0; var_18_int = 0;
		func_1519(Obj());
		var_19_object = var_16_object;
		var_8_float = var_17_float;
		func_1388(var_15_float, var_16_object, var_17_float, (int)0);
		var_15_float = var_9_float;
		var_88_object = Obj();
		func_1519(var_88_object);
		ReportHit(var_88_object, (int)0, var_9_float, var_8_float, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 0.0));
	}
	return 4;
}


event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int)
{
	var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_string = ""; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_int = 0; var_14_bool = 0; var_15_bool = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_bool = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0;
	var_35_bool = var_5_int == (int)0;
	if(var_35_bool != 0) {
		Inventory();
	} else {
		var_37_bool = var_5_int == (int)1;
		if(var_37_bool != 0) {
			GetMainOutdoorScene(var_20_object);
			GetActiveScene(var_21_object);
			var_38_bool = var_20_object == 0; //@ne
			if(var_38_bool != 0) {
				Trace("Can't find main outdoor oscene");
				return 28;
			}
			@@var_20_object:GetMap(var_22_object);
			var_40_bool = var_22_object == 0; //@ne
			if(var_40_bool != 0) {
				Trace("Can't find map");
				return 28;
			}
			var_42_bool = var_20_object == var_21_object;
			if(var_42_bool != 0) {
				GetPosition(var_23_cvector);
			} else {
				@@var_21_object:GetName(var_24_string);
				var_46_int = "pt_gmap_" + var_24_string;
				@@var_20_object:GetLocator(var_46_int, var_25_bool, var_23_cvector, var_26_cvector);
				var_47_bool = var_25_bool == 0; //@nz
				if(var_47_bool == 0) goto Label_2236;
				var_49_int = "FIXME: No map locator for scene : " + var_24_string;
				Trace(var_49_int);
				var_23_cvector = CVector(0.0, 0.0, 0.0);
		}
			var_51_bool = var_5_int == (int)2;
			if(var_51_bool != 0) {
				Diary();
				goto Label_2367;
			}
			var_53_bool = var_5_int == (int)3;
			if(var_53_bool != 0) {
				ShowMessage();
				goto Label_2367;
			}
			var_55_bool = var_5_int == (int)4;
			if(var_55_bool != 0) {
				ShowPlayerStats(var_27_int);
				var_57_bool = var_27_int == (int)1;
				if(var_57_bool != 0) {
					ShowWindow("people.xml", (bool)1);
				}
				goto Label_2367;
			}
			var_61_bool = var_5_int == (int)5;
			if(var_61_bool != 0) {
				IsFlashlightOn(var_28_bool);
				var_62_bool = var_28_bool;
				if(var_62_bool != 0) {
					SwitchFlashlight((bool)0);
					PlaySound("flashlight_off");
				} else {
					var_65_bool = 0;
					func_1687(var_65_bool);
					if(var_65_bool != 0) {
						SwitchFlashlight((bool)1);
						PlaySound("flashlight_on");
						goto Label_2299;
					}
					PlaySound("flashlight_nofuel");
			}
				var_73_bool = var_5_int == (int)6;
				if(var_73_bool != 0) {
					var_74_int = 0;
					func_1693(var_74_int);
					var_79_bool = var_74_int != (int)0;
					if(var_79_bool != 0) {
						return 28;
					}
					IsVisirOn(var_29_bool);
					var_80_bool = var_29_bool;
					if(var_80_bool != 0) {
						SwitchVisir((bool)0);
						SendWorldWndMessage((int)2);
					} else {
						GetProperty("visir", var_30_int);
						var_84_int = var_30_int;
						if(var_84_int == 0) goto Label_2339;
						GetProperty("vcharge", var_31_int);
						var_87_bool = var_31_int >= (int)10;
						if(var_87_bool == 0) goto Label_2339;
						SwitchVisir((bool)1);
						SendWorldWndMessage((int)1);
						goto Label_2339;
				}
					var_91_bool = var_5_int == (int)7;
					if(var_91_bool != 0) {
						IsOverrideActive(var_32_bool);
						var_92_bool = var_32_bool == 0; //@nz
						if(var_92_bool != 0) {
							ShowWindow("people.xml", (bool)1);
						}
						goto Label_2367;
					}
					var_96_bool = var_5_int == (int)21;
					if(var_96_bool == 0) goto Label_2367;
					GetWeaponItem(var_33_int);
					var_98_bool = var_33_int != (int)-1;
					if(var_98_bool == 0) goto Label_2367;
					SelectItem(var_33_int, (bool)0, (int)0);
					SetHandsItem((int)-1);
				}
			Label_2339:
				goto Label_2367;
			}
		Label_2299:
			goto Label_2367;
		}
	Label_2236:
		var_43_float = GetByIndex(var_23_cvector, 0);
		var_44_float = GetByIndex(var_23_cvector, 2);
		@@var_22_object:SetMapParams(var_43_float, var_44_float);
		ShowMap(var_22_object);
		var_22_object = 0;
		var_21_object = 0;
		var_20_object = 0;
		goto Label_2367;
	}
Label_2367:
	return 28;
	
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	var_5_object = Obj(); var_6_int = 0; var_7_object = Obj(); var_8_int = 0;
	CreateStringVector(var_7_object);
	@@var_7_object:add("player_reputation_decrease.bin");
	@@var_7_object:add("player_klara_dream.bin");
	GetVariable("player_init", var_8_int);
	var_12_bool = var_8_int == 0; //@nz
	if(var_12_bool != 0) {
		Diary();
		SetVariable("player_init", (int)1);
	}
	var_15_object = Obj();
	var_7_object = var_15_object;
	func_517(var_15_object);
	return 4;
}
EMIT "Stack[-2] = 0";


func_0()
{
	var_6_string = ""; var_7_bool = 0; var_8_object = Obj(); var_9_string = ""; var_10_bool = 0; var_11_object = Obj();
	GetCurrentWeapon(var_9_string);
	IsWeaponHolstered(var_10_bool);
	GetScene(var_11_object);
	var_12_bool = var_10_bool;
	if(var_12_bool != 0) {
		var_14_object = Obj();
		func_1519(var_14_object);
		BroadcastMessage("unholster", var_14_object, var_11_object);
		var_17_string = "";
		var_17_string = var_9_string + "_unholster";
		func_1673(var_17_string);
		SetWeaponHolster((bool)0);
		PlayAnimation("unholster");
		WaitForAnimEnd();
	} else {
		var_25_object = Obj();
		func_1519(var_25_object);
		BroadcastMessage("holster", var_25_object, var_11_object);
		var_26_string = "";
		var_26_string = var_9_string + "_holster";
		func_1673(var_26_string);
		PlayAnimation("holster");
		WaitForAnimEnd();
		SetWeaponHolster((bool)1);
	}
	return 6;
	
}
EMIT "Stack[-1] = 0";


func_515()
{
	return 0;
}


func_517(var_15_object)
{
	var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_float = 0; var_21_bool = 0; var_22_bool = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_string = ""; var_27_float = 0; var_28_bool = 0; var_29_bool = 0;
	var_30_object = GlobalVars[1];
	func_1554(Obj());
	var_31_object = var_30_object;
	GlobalVars[1] = var_30_object;
	var_34_object = GlobalVars[2];
	func_1554(Obj());
	var_35_object = var_34_object;
	GlobalVars[2] = var_34_object;
	var_36_object = GlobalVars[3];
	func_1554(Obj());
	var_37_object = var_36_object;
	GlobalVars[3] = var_36_object;
	HasProperty("effects", var_23_bool);
	var_39_bool = var_23_bool == 0; //@nz
	if(var_39_bool != 0) {
		SetProperty("effects", (bool)1);
		ApplyEffect("player_disease.bin");
		ApplyEffect("player_stat.bin");
		ApplyEffect("player_hit.bin");
		ApplyEffect("player_head.bin");
		ApplyEffect("player_flashlight.bin");
		ApplyEffect("player_visir.bin");
		ApplyEffect("player_vis.bin");
		ApplyEffect("player_eyes_height.bin");
		ApplyEffect("player_gifts.bin");
		var_51_object = var_15_object;
		if(var_51_object != 0) {
			@@var_15_object:size(var_24_int);
			var_25_int = 0;

		Label_577:
			var_52_bool = var_25_int < var_24_int;
			if(var_52_bool != 0) {
				@@var_15_object:get(var_26_string, var_25_int);
				ApplyEffect(var_26_string);
				var_25_int = var_25_int + (int)1;
				goto Label_577;
			}
		}
	}
	func_748();
	GetProperty("health", var_27_float);
	var_60_bool = 0;
	var_60_bool = 0;
	var_62_bool = var_27_float <= (int)0;
	if(var_62_bool != 0) {
		var_63_bool = 0;
		func_1681(var_63_bool);
		var_67_bool = var_63_bool == 0; //@nz
		if(var_67_bool != 0) {
			var_60_bool = 1;
		}
	}
	if(var_60_bool != 0) {
		func_1787();
		return 14;
	}
Label_608:
	IsWeaponHolstered(var_28_bool);
	var_83_bool = var_28_bool == 0; //@nz
	if(var_83_bool == 0) goto Label_622;
	IsWalking(var_29_bool);
	var_84_bool = var_29_bool;
	if(var_84_bool != 0) {
		PlayAnimation("walk");
		WaitForAnimEnd();
	} else {
		Sleep((float)0.10000000149011612);
	}
	goto Label_608;
	
}
EMIT "Return(); Pop(14)";


func_1543(var_375_int, var_376_int, var_377_int, var_378_int)
{
	var_379_bool = var_376_int < var_377_int;
	if(var_379_bool != 0) {
		var_377_int = var_375_int;
		return 0;
	}
	var_380_bool = var_376_int > var_378_int;
	if(var_380_bool != 0) {
		var_378_int = var_375_int;
		return 0;
	}
	var_376_int = var_375_int;
	return 0;
}


func_1037()
{
	var_8_bool = 0; var_9_string = ""; var_10_int = 0;
	func_1911(var_8_bool, "revolver_ammo", (int)2);
	if(var_8_bool != 0) {
		var_29_string = "";
		func_1068(var_29_string);
		var_31_int = var_29_string + "_reload";
		PlaySound(var_31_int);
		PlayAnimation("reload");
		WaitForAnimEnd();
	}
	return 0;
}


func_1554(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateObjectSet(var_33_object);
	var_33_object = var_31_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1560(var_575_object)
{
	var_576_object = Obj(); var_577_object = Obj();
	CreateObjectVector(var_577_object);
	var_577_object = var_575_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1566(var_110_float, var_111_cvector, var_112_cvector)
{
	var_113_float = GetByIndex(var_111_cvector, 0);
	var_114_float = GetByIndex(var_112_cvector, 0);
	var_115_float = var_113_float * var_114_float;
	var_116_float = GetByIndex(var_111_cvector, 2);
	var_117_float = GetByIndex(var_112_cvector, 2);
	var_118_float = var_116_float * var_117_float;
	var_110_float = var_115_float + var_118_float;
	return 0;
}


func_1575(var_119_float, var_120_cvector)
{
	var_121_float = GetByIndex(var_120_cvector, 0);
	var_122_float = GetByIndex(var_120_cvector, 0);
	var_123_float = var_121_float * var_122_float;
	var_124_float = GetByIndex(var_120_cvector, 2);
	var_125_float = GetByIndex(var_120_cvector, 2);
	var_126_float = var_124_float * var_125_float;
	var_127_int = var_123_float + var_126_float;
	var_119_float = sqrt(var_127_int);
	return 0;
}


func_1068(var_29_string)
{
	var_29_string = "gun";
	return 0;
}


func_1070(var_564_float)
{
	var_564_float = 1.2999999523162842;
	return 0;
}


func_1072(var_588_int)
{
	var_588_int = 1;
	return 0;
}


func_1585(var_107_float, var_108_cvector, var_109_cvector)
{
	var_110_float = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0);
	var_108_cvector = var_111_cvector;
	var_109_cvector = var_112_cvector;
	func_1566(var_110_float, var_111_cvector, var_112_cvector);
	var_119_float = 0; var_120_cvector = CVector(0,0,0);
	var_108_cvector = var_120_cvector;
	func_1575(var_119_float, var_120_cvector);
	var_128_float = 0; var_129_cvector = CVector(0,0,0);
	var_109_cvector = var_129_cvector;
	func_1575(var_128_float, var_129_cvector);
	var_130_float = var_119_float * var_128_float;
	var_107_float = var_110_float / var_130_float;
	return 0;
}


func_50(var_312_string)
{
	var_312_string = "scalpel";
	return 0;
}


func_1074(var_590_int)
{
	var_590_int = 2;
	return 0;
}


func_52(var_330_float)
{
	var_330_float = 0.6000000238418579;
	return 0;
}


func_1076(var_561_int)
{
	var_561_int = 2;
	return 0;
}


func_1078(var_0_bool)
{
	var_454_string = ""; var_455_string = ""; var_456_int = 0; var_457_bool = 0; var_458_float = 0; var_459_float = 0; var_460_cvector = CVector(0,0,0); var_461_object = Obj(); var_462_int = 0; var_463_cvector = CVector(0,0,0); var_464_object = Obj(); var_465_int = 0; var_466_cvector = CVector(0,0,0); var_467_float = 0; var_468_float = 0; var_469_float = 0; var_470_object = Obj(); var_471_float = 0; var_472_object = Obj(); var_473_object = Obj(); var_474_int = 0; var_475_int = 0; var_476_object = Obj(); var_477_bool = 0; var_478_string = ""; var_479_string = ""; var_480_int = 0; var_481_bool = 0; var_482_float = 0; var_483_float = 0; var_484_cvector = CVector(0,0,0); var_485_object = Obj(); var_486_int = 0; var_487_cvector = CVector(0,0,0); var_488_object = Obj(); var_489_int = 0; var_490_cvector = CVector(0,0,0); var_491_float = 0; var_492_float = 0; var_493_float = 0; var_494_object = Obj(); var_495_float = 0; var_496_object = Obj(); var_497_object = Obj(); var_498_int = 0; var_499_int = 0; var_500_object = Obj(); var_501_bool = 0;
	var_0_bool = false;
	
Label_1080:
	var_502_bool = 0;
	func_969(var_502_bool);
	var_537_bool = var_502_bool == 0; //@nz
	if(var_537_bool != 0) {
	} else {
		GetCurrentWeapon(var_478_string);
		var_479_string = "attack1";
		SetAttackState((bool)1);
		func_1008();
		var_554_int = var_479_string + "_phase1";
		PlayAnimation(var_554_int);
		WaitForAnimEnd();
		var_555_bool = var_0_bool;
		if(var_555_bool != 0) {
			return 48;
		}
		TriggerWeapon("shot");
		var_557_string = "";
		func_1068(var_557_string);
		var_559_int = var_557_string + "_shot";
		PlaySound(var_559_int);
		var_560_int = 0;
		func_1076((int)0);
		var_561_int = var_560_int;
		func_1958(var_560_int);
		func_1302();
		SetAttackState((bool)0);
		func_1004((int)0);
		var_563_int = var_480_int;
		var_564_float = 0;
		func_1070(var_564_float);
		var_482_float = var_564_float / var_480_int;
		var_568_float = 0;
		func_1006(var_568_float);
		var_569_float = (float)1.0 / var_568_float;
		var_571_int = var_569_float - (float)1.5;
		var_572_float = 0;
		func_1947(var_572_float);
		var_573_float = var_571_int * var_572_float;
		var_574_int = (float)1.5 + var_573_float;
		var_483_float = (float)1.0 / var_574_int;
		GetDirection(var_484_cvector);
		func_1560(Obj());
		var_575_object = var_485_object;
		var_486_int = 0;

	Label_1158:
		var_578_bool = var_486_int < var_480_int;
		if(var_578_bool != 0) {
			RandVecCone3D(var_487_cvector, var_484_cvector, var_483_float);
			GetVictimMaterialExact(var_488_object, var_489_int, var_490_cvector, var_487_cvector, (int)10000);
			var_580_object = var_488_object;
			if(var_580_object != 0) {
				var_482_float = var_491_float;
				var_582_bool = var_489_int == (int)4;
				if(var_582_bool != 0) {
					var_491_float = var_491_float * (float)3.0;
				}
				var_584_float = 0; var_585_object = Obj(); var_586_float = 0; var_587_int = 0;
				var_488_object = var_585_object;
				var_491_float = var_586_float;
				func_1072((int)0);
				var_588_int = var_587_int;
				func_1388(var_584_float, var_585_object, var_586_float, var_587_int);
				var_584_float = var_492_float;
				var_589_float = var_492_float;
				if(var_589_float != 0) {
					@@var_485_object:add(var_488_object);
					var_590_int = 0;
					func_1074(var_590_int);
					ReportHit(var_488_object, var_590_int, var_492_float, var_491_float, var_490_cvector, var_487_cvector);
					var_591_bool = 0;
					func_1303(var_591_bool);
					if(var_591_bool != 0) {
						@@var_488_object:GetProperty("health", var_493_float);
						var_593_bool = var_493_float == 0; //@nz
						if(var_593_bool != 0) {
							GetVictimMaterialExact(var_494_object, var_489_int, var_490_cvector, var_487_cvector, (int)10000, var_488_object);
							var_595_bool = 0;
							var_595_bool = 0;
							var_596_object = var_494_object;
							if(var_596_object != 0) {
								var_597_bool = var_494_object != var_488_object;
								if(var_597_bool != 0) {
									var_595_bool = 1;
								}
							}
							if(var_595_bool != 0) {
								var_598_float = 0; var_599_object = Obj(); var_600_float = 0; var_601_int = 0;
								var_494_object = var_599_object;
								var_600_float = var_491_float * (float)0.75;
								func_1072((int)0);
								var_603_int = var_601_int;
								func_1388(var_598_float, var_599_object, var_600_float, var_601_int);
								var_598_float = var_495_float;
								var_604_float = var_495_float;
								if(var_604_float != 0) {
									@@var_485_object:add(var_494_object);
									var_605_int = 0;
									func_1074(var_605_int);
									ReportHit(var_494_object, var_605_int, var_495_float, var_491_float, var_490_cvector, var_487_cvector);
								}
							}
							var_494_object = 0;
						}
					}
				} else {
					var_608_bool = var_489_int != (int)-1;
					if(var_608_bool == 0) goto Label_1252;
					var_609_bool = (bool)0 == 0; //@nz
					if(var_609_bool == 0) goto Label_1252;
					GetScene(var_496_object);
					AddActorByType(var_497_object, "scripted", var_496_object, var_490_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
					@@var_497_object:SetScriptProperty("Material", var_489_int);
					var_481_bool = 1;
					var_497_object = 0;
					var_496_object = 0;
		}
				@@var_485_object:size(var_498_int);
				var_499_int = 0;

			Label_1259:
				var_614_bool = var_499_int < var_498_int;
				if(var_614_bool != 0) {
					@@var_485_object:get(var_500_object, var_499_int);
					ReportAttack(var_500_object);
					var_615_object = GlobalVars[2];
					@@var_615_object:in(var_501_bool, var_500_object);
					var_616_bool = var_501_bool == 0; //@nz
					if(var_616_bool != 0) {
						var_617_object = GlobalVars[3];
						@@var_617_object:add(var_500_object);
						BroadcastPlayerDamage(var_500_object, (bool)0);
					} else {
						BroadcastPlayerDamage(var_500_object, (bool)1);
				}
					var_622_int = var_479_string + "_phase2";
					PlayAnimation(var_622_int);
					WaitForAnimEnd();
					var_623_bool = var_0_bool;
					if(var_623_bool != 0) {
						return 48;
					}
					func_1021();
					var_485_object = 0;
					var_639_bool = 0;
					func_1305(var_639_bool);
					if(var_639_bool == 1) goto Label_1080;
				}
				var_500_object = 0;
				var_499_int = var_499_int + (int)1;
				goto Label_1259;
			}
		}
	Label_1252:
		var_488_object = 0;
		var_486_int = var_486_int + (int)1;
		goto Label_1158;
	}
	return 48;
	
}


func_55(var_334_float)
{
	var_334_float = 0.5;
	return 0;
}


func_57(var_368_int)
{
	var_368_int = 2;
	return 0;
}


func_59(var_353_int)
{
	var_353_int = 0;
	return 0;
}


func_61(var_362_int)
{
	var_362_int = 1;
	return 0;
}


func_63(var_328_float, var_329_bool)
{
	var_330_float = 0; var_331_bool = 0;
	var_329_bool = var_331_bool;
	func_52(var_331_bool);
	var_332_float = 0; var_333_float = 0;
	func_55((float)0);
	var_334_float = var_333_float;
	func_1976(var_332_float, var_333_float);
	var_328_float = var_330_float * var_332_float;
	return 0;
}


func_1602(var_19_bool, var_20_object, var_21_float)
{
	var_25_bool = var_20_object == 0; //@nz
	if(var_25_bool != 0) {
		var_19_bool = 0;
		return 0;
	}
	var_27_bool = var_21_float > (int)0;
	if(var_27_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_58_bool = var_21_float < (int)0;
		if(var_58_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1623;
		}
		var_19_bool = 0;
		return 0;
	}
Label_1623:
	var_29_float = 0;
	var_21_float = var_29_float;
	func_1654(var_29_float);
	var_33_bool = 0; var_34_object = Obj(); var_35_string = ""; var_36_float = 0; var_37_float = 0; var_38_float = 0;
	var_20_object = var_34_object;
	var_21_float = var_36_float;
	func_1366(var_33_bool, var_34_object, "reputation", var_36_float, (float)0, (float)1);
	var_19_bool = 1;
	return 0;
	
}


func_77()
{
	var_367_int = 0;
	func_57((int)0);
	var_368_int = var_367_int;
	func_1958(var_367_int);
	return 0;
}


func_85(var_0_bool)
{
	var_240_int = 0; var_241_string = ""; var_242_bool = 0; var_243_string = ""; var_244_float = 0; var_245_cvector = CVector(0,0,0); var_246_object = Obj(); var_247_int = 0; var_248_cvector = CVector(0,0,0); var_249_bool = 0; var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_string = ""; var_253_int = 0; var_254_cvector = CVector(0,0,0); var_255_cvector = CVector(0,0,0); var_256_float = 0; var_257_float = 0; var_258_int = 0; var_259_bool = 0; var_260_int = 0; var_261_string = ""; var_262_bool = 0; var_263_string = ""; var_264_float = 0; var_265_cvector = CVector(0,0,0); var_266_object = Obj(); var_267_int = 0; var_268_cvector = CVector(0,0,0); var_269_bool = 0; var_270_cvector = CVector(0,0,0); var_271_cvector = CVector(0,0,0); var_272_string = ""; var_273_int = 0; var_274_cvector = CVector(0,0,0); var_275_cvector = CVector(0,0,0); var_276_float = 0; var_277_float = 0; var_278_int = 0; var_279_bool = 0;
	var_0_bool = false;
	
Label_88:
	(int)0 = (int)0 + (int)1;
	var_281_string = "";
	func_323(var_281_string);
	var_283_int = var_281_string + "attack";
	var_284_int = var_283_int + var_260_int;
	var_261_string = var_284_int + "_phase1";
	HasAnimation(var_262_bool, var_261_string);
	var_286_bool = var_262_bool == 0; //@nz
	if(var_286_bool != 0) {
	} else {
							goto Label_88;
	}
	var_260_int = var_260_int + (int)-1;
	var_288_bool = var_260_int == 0; //@nz
	if(var_288_bool != 0) {
		return 40;
	}
Label_109:
	GetCurrentWeapon(var_263_string);
	GetAttackDistance(var_264_float);
	GetDirection(var_265_cvector);
	var_269_bool = 0;
	var_289_bool = 0;
	func_321(var_289_bool);
	if(var_289_bool != 0) {
		GetVictimMaterialExact(var_266_object, var_267_int, var_268_cvector, var_265_cvector, var_264_float);
		var_290_bool = 0;
		var_290_bool = 0;
		var_291_bool = 0;
		var_291_bool = 0;
		var_292_bool = 0;
		var_292_bool = 0;
		var_293_bool = var_266_object != 0; //@nn
		if(var_293_bool != 0) {
			var_294_bool = 0; var_295_object = Obj(); var_296_string = "";
			var_266_object = var_295_object;
			func_1354(var_294_bool, var_295_object, "health");
			if(var_294_bool != 0) {
				var_292_bool = 1;
			}
		}
		if(var_292_bool != 0) {
			var_297_bool = 0; var_298_object = Obj();
			var_266_object = var_298_object;
			func_1461(var_297_bool, var_298_object);
			var_301_bool = var_297_bool == 0; //@nz
			if(var_301_bool != 0) {
				var_291_bool = 1;
			}
		}
		if(var_291_bool != 0) {
			var_303_bool = var_267_int == (int)4;
			if(var_303_bool != 0) {
				var_290_bool = 1;
			}
		}
		if(var_290_bool != 0) {
			var_306_bool = IsFuncExist(var_266_object, "GetDirection", (int)1);
			if(var_306_bool != 0) {
				GetDirection(var_270_cvector);
				@@var_266_object:GetDirection(var_271_cvector);
				var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0);
				var_270_cvector = var_308_cvector;
				var_271_cvector = var_309_cvector;
				func_1585(var_307_float, var_308_cvector, var_309_cvector);
				var_269_bool = var_307_float >= (float)0.4999999701976776;
			}
		}
	}
	var_311_bool = var_269_bool;
	if(var_311_bool != 0) {
		var_272_string = "battack";
		var_312_string = "";
		func_50(var_312_string);
		var_314_int = var_312_string + "_back";
		PlaySound(var_314_int);
	} else {
						irand(var_273_int, var_260_int);
						var_389_string = "";
						func_323(var_389_string);
						var_391_int = var_389_string + "attack";
						var_393_int = var_273_int + (int)1;
						var_272_string = var_391_int + var_393_int;
						var_394_string = "";
						func_50(var_394_string);
						var_396_int = var_273_int + (int)1;
						var_397_int = var_394_string + var_396_int;
						PlaySound(var_397_int);

	}
	SetAttackState((bool)1);
	var_317_int = var_272_string + "_phase1";
	PlayAnimation(var_317_int);
	WaitForAnimEnd();
	var_318_bool = var_0_bool;
	if(var_318_bool != 0) {
		return 40;
	}
	SetAttackState((bool)0);
	GetAttackDistance(var_264_float);
	GetDirection(var_265_cvector);
	GetVictimMaterialExact(var_266_object, var_267_int, var_268_cvector, var_265_cvector, var_264_float);
	var_320_bool = var_266_object != 0; //@nn
	if(var_320_bool != 0) {
		var_323_bool = IsFuncExist(var_266_object, "GetDirection", (int)1);
		if(var_323_bool != 0) {
			GetDirection(var_274_cvector);
			@@var_266_object:GetDirection(var_275_cvector);
			var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0);
			var_274_cvector = var_325_cvector;
			var_275_cvector = var_326_cvector;
			func_1585(var_324_float, var_325_cvector, var_326_cvector);
			var_269_bool = var_324_float >= (float)0.4999999701976776;
		} else {
					var_269_bool = 0;

		}
		var_328_float = 0; var_329_bool = 0;
		var_269_bool = var_329_bool;
		func_63(var_328_float, var_329_bool);
		var_328_float = var_276_float;
		var_347_bool = var_267_int == (int)4;
		if(var_347_bool != 0) {
			var_276_float = var_276_float * (float)3.0;
		}
		var_349_float = 0; var_350_object = Obj(); var_351_float = 0; var_352_int = 0;
		var_266_object = var_350_object;
		var_276_float = var_351_float;
		func_59((int)0);
		var_353_int = var_352_int;
		func_1388(var_349_float, var_350_object, var_351_float, var_352_int);
		var_349_float = var_277_float;
		var_354_float = var_277_float;
		if(var_354_float != 0) {
			irand(var_278_int, (int)2);
			var_356_string = "";
			func_50(var_356_string);
			var_358_int = var_356_string + "_hit";
			var_360_int = var_278_int + (int)1;
			var_361_int = var_358_int + var_360_int;
			PlaySound(var_361_int);
			ReportAttack(var_266_object);
			var_362_int = 0;
			func_61(var_362_int);
			ReportHit(var_266_object, var_362_int, var_277_float, var_276_float, var_268_cvector, var_265_cvector);
			var_363_object = GlobalVars[2];
			@@var_363_object:in(var_279_bool, var_266_object);
			var_364_bool = var_279_bool == 0; //@nz
			if(var_364_bool != 0) {
				var_365_object = GlobalVars[3];
				@@var_365_object:add(var_266_object);
				BroadcastPlayerDamage(var_266_object, (bool)0);
			} else {
				BroadcastPlayerDamage(var_266_object, (bool)1);

			}
		}
		func_77();
	}
	var_383_int = var_272_string + "_phase2";
	PlayAnimation(var_383_int);
	WaitForAnimEnd();
	var_384_bool = var_0_bool;
	if(var_384_bool != 0) {
		return 40;
	}
	var_266_object = 0;
	var_385_bool = 0;
	func_325(var_385_bool);
	if(var_385_bool == 1) goto Label_109;
	return 40;
	
}


func_1637(var_79_float)
{
	var_80_object = Obj(); var_81_object = Obj();
	CreateFloatVector(var_81_object);
	@@var_81_object:add(var_79_float);
	var_83_bool = var_79_float < (int)0;
	if(var_83_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_81_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1654(var_29_float)
{
	var_30_object = Obj(); var_31_object = Obj();
	CreateFloatVector(var_31_object);
	@@var_31_object:add(var_29_float);
	SendWorldWndMessage((int)16, var_31_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1664(var_72_int)
{
	var_73_float = 0; var_74_float = 0;
	GetGameTime(var_74_float);
	var_76_int = 0;
	var_76_int = var_74_float / (int)24;
	var_72_int = (int)1 + var_76_int;
	return 2;
}


func_1673(var_17_string)
{
	var_19_bool = 0; var_20_bool = 0;
	IsExistingSound(var_20_bool, var_17_string);
	var_21_bool = var_20_bool;
	if(var_21_bool != 0) {
		PlaySound(var_17_string);
	}
	return 2;
}


func_1681(var_63_bool)
{
	var_64_bool = 0; var_65_bool = 0;
	GetVariable("god_mode", var_65_bool);
	var_65_bool = var_63_bool;
	return 2;
}


func_1687(var_65_bool)
{
	var_66_int = 0; var_67_int = 0;
	GetItemCountOfType(var_67_int, "kerosene");
	var_67_int = var_65_bool;
	return 2;
}


func_1693(var_74_int)
{
	var_75_int = 0; var_76_int = 0;
	GetVariable("branch", var_76_int);
	var_76_int = var_74_int;
	return 2;
}


func_1699(var_57_bool, var_58_int)
{
	var_60_bool = var_58_int == (int)10;
	if(var_60_bool != 0) {
		func_1871();
		var_57_bool = 1;
		return 0;
	EMIT "GOTO 0x6be";
	}
	var_113_bool = var_58_int == (int)11;
	if(var_113_bool != 0) {
		func_1879();
		var_57_bool = 1;
		return 0;
	EMIT "GOTO 0x6be";
	}
	var_120_bool = var_58_int == (int)12;
	if(var_120_bool != 0) {
		func_1875();
		var_57_bool = 1;
		return 0;
	}
	var_57_bool = 0;
	return 0;
}


func_1728()
{
	var_61_bool = 0; var_62_int = 0; var_63_string = ""; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_string = ""; var_68_string = ""; var_69_bool = 0; var_70_int = 0; var_71_string = ""; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_string = ""; var_76_string = "";
	GetGroundMaterial(var_69_bool, var_70_int);
	var_77_bool = var_69_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_70_int = -1;
	}
	var_78_string = ""; var_79_int = 0;
	var_70_int = var_79_int;
	func_1487(var_78_string, var_79_int);
	var_78_string = var_71_string;
	var_72_int = 0;
	
Label_1740:
	var_91_int = "step_" + var_71_string;
	var_93_int = var_72_int + (int)1;
	var_94_int = var_91_int + var_93_int;
	IsExistingSound(var_73_bool, var_94_int);
	var_95_bool = var_73_bool == 0; //@nz
	if(var_95_bool != 0) {
	} else {
			var_72_int = var_72_int + (int)1;
			goto Label_1740;
	}
	var_96_bool = var_72_int == 0; //@nz
	if(var_96_bool != 0) {
		var_97_string = GlobalVars[0];
		GlobalVars[0] = "";
		return 16;
	}
	var_99_bool = var_72_int == (int)1;
	if(var_99_bool != 0) {
		var_74_int = 0;
	} else {
		irand(var_74_int, var_72_int);
		var_106_int = "step_" + var_71_string;
		var_108_int = var_74_int + (int)1;
		var_75_string = var_106_int + var_108_int;
		var_109_string = GlobalVars[0];
		var_110_bool = var_75_string != var_109_string;
		if(var_110_bool != 0) {
			goto Label_1776;
		}
		goto Label_1764;

	}
Label_1776:
	var_101_int = "step_" + var_71_string;
	var_103_int = var_74_int + (int)1;
	var_76_string = var_101_int + var_103_int;
	PlaySound(var_76_string);
	var_104_string = GlobalVars[0];
	var_76_string = var_104_string;
	GlobalVars[0] = var_104_string;
	return 16;
	
}


func_748()
{
	func_2368();
	return 0;
}


func_752()
{
	KillTimer((int)0);
	return 0;
}


func_756(var_0_bool)
{
	var_31_int = 0; var_32_string = ""; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_float = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_string = ""; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_object = Obj(); var_56_int = 0; var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_string = ""; var_62_int = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_float = 0; var_66_float = 0; var_67_int = 0; var_68_bool = 0;
	var_0_bool = false;
	
Label_759:
	(int)0 = (int)0 + (int)1;
	var_71_int = "attack" + var_50_int;
	var_51_string = var_71_int + "_phase1";
	HasAnimation(var_52_bool, var_51_string);
	var_73_bool = var_52_bool == 0; //@nz
	if(var_73_bool != 0) {
	} else {
									goto Label_759;
	}
	var_50_int = var_50_int + (int)-1;
	var_75_bool = var_50_int == 0; //@nz
	if(var_75_bool != 0) {
		return 38;
	}
Label_776:
	GetAttackDistance(var_53_float);
	var_53_float = var_53_float * (float)2.1875;
	GetDirection(var_54_cvector);
	GetVictimMaterialExact(var_55_object, var_56_int, var_57_cvector, var_54_cvector, var_53_float);
	var_77_bool = var_55_object != 0; //@nn
	if(var_77_bool == 0) goto Label_817;
	var_78_bool = 0; var_79_object = Obj(); var_80_string = "";
	var_55_object = var_79_object;
	func_1354(var_78_bool, var_79_object, "healable");
	if(var_78_bool != 0) {
		PlayAnimation("heal_phase1");
		WaitForAnimEnd();
		var_88_bool = var_0_bool;
		if(var_88_bool != 0) {
			return 38;
		}
		var_89_bool = 0; var_90_object = Obj();
		var_55_object = var_90_object;
		func_1466(var_89_bool, var_90_object);
		if(var_89_bool != 0) {
			Trigger(var_55_object, "heal");
		}
		PlayAnimation("heal_phase2");
		WaitForAnimEnd();
		var_100_bool = var_0_bool;
		if(var_100_bool != 0) {
			return 38;
		}
	} else {
		var_106_bool = IsFuncExist(var_55_object, "GetDirection", (int)1);
		if(var_106_bool != 0) {
			GetDirection(var_59_cvector);
			@@var_55_object:GetDirection(var_60_cvector);
			var_107_float = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0);
			var_59_cvector = var_108_cvector;
			var_60_cvector = var_109_cvector;
			func_1585(var_107_float, var_108_cvector, var_109_cvector);
			var_58_bool = var_107_float >= (float)0.4999999701976776;
		} else {
								var_58_bool = 0;

		}
		var_132_bool = var_58_bool;
		if(var_132_bool != 0) {
			var_61_string = "battack";
			PlaySound("punch_back");
		} else {
							irand(var_62_int, var_50_int);
							var_232_int = var_62_int + (int)1;
							var_61_string = "attack" + var_232_int;
							var_235_int = var_62_int + (int)1;
							var_236_int = "punch" + var_235_int;
							PlaySound(var_236_int);

		}
		var_135_int = var_61_string + "_phase1";
		PlayAnimation(var_135_int);
		WaitForAnimEnd();
		var_136_bool = var_0_bool;
		if(var_136_bool != 0) {
			return 38;
		}
		GetVictimMaterialExact(var_55_object, var_56_int, var_57_cvector, var_54_cvector, var_53_float);
		var_137_bool = var_55_object != 0; //@nn
		if(var_137_bool != 0) {
			var_140_bool = IsFuncExist(var_55_object, "GetDirection", (int)1);
			if(var_140_bool != 0) {
				GetDirection(var_63_cvector);
				@@var_55_object:GetDirection(var_64_cvector);
				var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0);
				var_63_cvector = var_142_cvector;
				var_64_cvector = var_143_cvector;
				func_1585(var_141_float, var_142_cvector, var_143_cvector);
				var_58_bool = var_141_float >= (float)0.4999999701976776;
			} else {
						var_58_bool = 0;

			}
			var_145_float = 0; var_146_bool = 0;
			var_58_bool = var_146_bool;
			func_957(var_145_float, var_146_bool);
			var_145_float = var_65_float;
			var_149_bool = var_56_int == (int)4;
			if(var_149_bool != 0) {
				var_65_float = var_65_float * (float)3.0;
			}
			var_151_float = 0; var_152_object = Obj(); var_153_float = 0; var_154_int = 0;
			var_55_object = var_152_object;
			var_65_float = var_153_float;
			func_1388(var_151_float, var_152_object, var_153_float, (int)0);
			var_151_float = var_66_float;
			var_215_float = var_66_float;
			if(var_215_float != 0) {
				irand(var_67_int, (int)2);
				var_219_int = var_67_int + (int)1;
				var_220_int = "punch_hit" + var_219_int;
				PlaySound(var_220_int);
				ReportAttack(var_55_object);
				ReportHit(var_55_object, (int)0, var_66_float, var_65_float, var_57_cvector, var_54_cvector);
				var_222_object = GlobalVars[2];
				@@var_222_object:in(var_68_bool, var_55_object);
				var_223_bool = var_68_bool == 0; //@nz
				if(var_223_bool != 0) {
					var_224_object = GlobalVars[3];
					@@var_224_object:add(var_55_object);
					BroadcastPlayerDamage(var_55_object, (bool)0);
				} else {
					BroadcastPlayerDamage(var_55_object, (bool)1);

				}
			}
		}
		var_227_int = var_61_string + "_phase2";
		PlayAnimation(var_227_int);
		WaitForAnimEnd();
		var_228_bool = var_0_bool;
		if(var_228_bool != 0) {
			return 38;
		}
		var_55_object = 0;
	}
	var_101_bool = 0;
	func_964(var_101_bool);
	if(var_101_bool == 1) goto Label_776;
	return 38;
	
}


func_1787()
{
	var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj();
	var_72_int = 0;
	func_1664(var_72_int);
	var_79_bool = var_72_int == (int)12;
	if(var_79_bool != 0) {
		UnlockAchievement("ACHIEVEMENT_MIGHT");
	}
	GetMainOutdoorScene(var_70_object);
	AddBlankActor(var_71_object, var_70_object, "player_death", "play_death_klara.bin");
	SetDeathState();
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1808()
{
	var_10_bool = 0; var_11_bool = 0;
	KillTimer((int)11, var_11_bool);
	var_13_bool = var_11_bool;
	if(var_13_bool != 0) {
		ModNoise((int)-3);
	}
	return 2;
}


func_1302()
{
	return 0;
}


func_1303(var_591_bool)
{
	var_591_bool = 0;
	return 0;
}


func_1305(var_639_bool)
{
	var_640_bool = 0; var_641_bool = 0;
	IsShooting(var_641_bool);
	var_641_bool = var_639_bool;
	return 2;
}


func_1818()
{
	func_1808();
	SetTimer((int)11, (float)0.15000000596046448);
	ModNoise((int)3);
	return 0;
}


func_1310()
{
	func_1334();
	var_13_bool = 0; var_14_string = ""; var_15_int = 0;
	func_1911(var_13_bool, "revolver_ammo", (int)2);
	if(var_13_bool != 0) {
		var_34_string = "";
		func_1332(var_34_string);
		var_36_int = var_34_string + "_reload";
		PlaySound(var_36_int);
		PlayAnimation("reload");
		WaitForAnimEnd();
	}
	return 0;
}


func_1829()
{
	var_5_bool = 0; var_6_bool = 0;
	KillTimer((int)10, var_6_bool);
	var_8_bool = var_6_bool;
	if(var_8_bool != 0) {
		ModNoise((int)-2);
	}
	return 2;
}


func_1839()
{
	var_5_bool = 0; var_6_bool = 0;
	KillTimer((int)12, var_6_bool);
	var_8_bool = var_6_bool;
	if(var_8_bool != 0) {
		ModNoise((int)-1);
	}
	return 2;
}


func_1332(var_34_string)
{
	var_34_string = "gun";
	return 0;
}


func_1334()
{
	return 0;
}


func_1335(var_49_string, var_50_int)
{
	var_52_bool = var_50_int == (int)2;
	if(var_52_bool != 0) {
		var_49_string = "fire";
		return 0;
	EMIT "GOTO 0x543";
	}
	var_54_bool = var_50_int == (int)1;
	if(var_54_bool != 0) {
		var_49_string = "bullet";
		return 0;
	}
	var_49_string = "phys";
	return 0;
}


func_1849()
{
	func_1829();
	SetTimer((int)10, (float)0.3499999940395355);
	ModNoise((int)2);
	return 0;
}


func_2368()
{
	var_54_float = 0; var_55_float = 0;
	rand(var_55_float, (int)10, (int)30);
	SetTimer((int)0, var_55_float);
	return 2;
}


func_321(var_289_bool)
{
	var_289_bool = 0;
	return 0;
}


func_323(var_281_string)
{
	var_281_string = "";
	return 0;
}


func_1860()
{
	func_1839();
	SetTimer((int)12, (float)0.6000000238418579);
	ModNoise((int)1);
	return 0;
}


func_325(var_385_bool)
{
	var_386_bool = 0; var_387_bool = 0;
	IsShooting(var_387_bool);
	var_387_bool = var_385_bool;
	return 2;
}


func_1349(var_75_bool, var_76_object)
{
	var_77_bool = 0; var_78_bool = 0;
	IsPlayerActor(var_76_object, var_78_bool);
	var_78_bool = var_75_bool;
	return 2;
}


func_2377()
{
	var_547_object = Obj(); var_548_object = Obj();
	GetScene(var_548_object);
	var_550_object = Obj();
	func_1519(var_550_object);
	BroadcastMessage("player_shot", var_550_object, var_548_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1354(var_34_bool, var_35_object, var_36_string)
{
	var_37_bool = 0; var_38_bool = 0;
	var_41_bool = IsFuncExist(var_35_object, "HasProperty", (int)2);
	var_42_bool = var_41_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_34_bool = 0;
		return 2;
	}
	@@var_35_object:HasProperty(var_36_string, var_38_bool);
	var_38_bool = var_34_bool;
	return 2;
}


func_330(var_0_bool, var_1_bool)
{
	var_402_int = 0; var_403_int = 0; var_404_object = Obj(); var_405_bool = 0; var_406_bool = 0; var_407_bool = 0; var_408_bool = 0; var_409_int = 0; var_410_int = 0; var_411_int = 0; var_412_int = 0; var_413_object = Obj(); var_414_bool = 0; var_415_bool = 0; var_416_bool = 0; var_417_bool = 0; var_418_int = 0; var_419_int = 0;
	var_0_bool = false;
	var_1_bool = false;
	GetWeaponItem(var_411_int);
	PlayAnimation("use_begin");
	WaitForAnimEnd();
	var_421_bool = var_0_bool;
	if(var_421_bool != 0) {
		return 18;
	}
	GetWeaponItem(var_412_int);
	GetPlayerSelectedObject(var_413_object);
	var_414_bool = 0;
	var_422_bool = var_412_int == var_411_int;
	if(var_422_bool != 0) {
		var_423_bool = 0; var_424_object = Obj(); var_425_string = "";
		var_413_object = var_424_object;
		func_1354(var_423_bool, var_424_object, "lp");
		if(var_423_bool != 0) {
			@@var_413_object:GetProperty("lp", var_415_bool);
			var_427_bool = var_415_bool;
			if(var_427_bool != 0) {
				@@var_413_object:GetProperty("locked", var_416_bool);
				var_429_bool = var_416_bool;
				if(var_429_bool != 0) {
					var_414_bool = 1;
					@@var_413_object:SetProperty("locked", (bool)0);
					var_418_int = 0;
					GetWeaponProperty(var_417_bool, "uses", var_418_int);
					var_434_bool = var_418_int <= (int)1;
					if(var_434_bool != 0) {
						GetWeaponItem(var_419_int);
						SelectItem(var_419_int, (bool)0, (int)0);
						RemoveItem(var_419_int, (int)1, (int)0);
						var_1_bool = true;
					} else {
							var_450_int = var_418_int - (int)1;
							SetWeaponProperty(var_417_bool, "uses", var_450_int);
					}
				}
			}
		}
	}
	var_439_bool = var_414_bool;
	if(var_439_bool != 0) {
		PlayAnimation("use_success");
	} else {
		PlayAnimation("use_fail");

	}
	WaitForAnimEnd();
	var_441_bool = var_0_bool;
	if(var_441_bool != 0) {
		return 18;
	}
	var_442_bool = var_1_bool;
	if(var_442_bool != 0) {
		PlayAnimation("holster");
		WaitForAnimEnd();
		SetHandsItem((int)-1);
		var_445_bool = var_0_bool;
		if(var_445_bool != 0) {
			return 18;
		}
		var_1_bool = false;
		PlayAnimation("unholster");
		WaitForAnimEnd();
	}
	return 18;
	
}
EMIT "Stack[-7] = 0";


func_1871()
{
	func_1728();
	return 0;
}


func_1875()
{
	func_1728();
	return 0;
}


func_1366(var_33_bool, var_34_object, var_35_string, var_36_float, var_37_float, var_38_float)
{
	var_39_float = 0; var_40_float = 0;
	var_41_bool = 0; var_42_object = Obj(); var_43_string = "";
	var_34_object = var_42_object;
	var_35_string = var_43_string;
	func_1354(var_41_bool, var_42_object, var_43_string);
	var_50_bool = var_41_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_33_bool = 0;
		return 2;
	}
	@@var_34_object:GetProperty(var_35_string, var_40_float);
	var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0;
	var_52_float = var_40_float + var_36_float;
	var_37_float = var_53_float;
	var_38_float = var_54_float;
	func_1532(var_51_float, var_52_float, var_53_float, var_54_float);
	@@var_34_object:SetProperty(var_35_string, var_51_float);
	var_33_bool = 1;
	return 2;
}


func_1879()
{
	func_1728();
	func_1808();
	return 0;
}


func_1388(var_15_float, var_16_object, var_17_float, var_18_int)
{
	var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_int = 0; var_29_string = ""; var_30_int = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0;
	var_34_bool = 0; var_35_object = Obj(); var_36_string = "";
	var_16_object = var_35_object;
	func_1354(var_34_bool, var_35_object, "health");
	var_43_bool = var_34_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_15_float = 0.0;
		return 12;
	}
	var_44_bool = 0; var_45_object = Obj(); var_46_string = "";
	var_16_object = var_45_object;
	func_1354(var_44_bool, var_45_object, "armor");
	var_47_bool = var_44_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_28_int = 0;
	} else {
			@@var_16_object:GetProperty("armor", var_28_int);
	}
	var_49_string = ""; var_50_int = 0;
	var_18_int = var_50_int;
	func_1335(var_49_string, var_50_int);
	var_29_string = "armor_" + var_49_string;
	var_55_bool = 0; var_56_object = Obj(); var_57_string = "";
	var_16_object = var_56_object;
	var_29_string = var_57_string;
	func_1354(var_55_bool, var_56_object, var_57_string);
	var_58_bool = var_55_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_30_int = 0;
	} else {
		@@var_16_object:GetProperty(var_29_string, var_30_int);

	}
	var_59_float = 0; var_60_float = 0; var_61_float = 0;
	var_62_int = var_28_int + var_30_int;
	var_60_float = var_62_int / (float)100.0;
	func_1525(var_59_float, var_60_float, (float)1);
	var_59_float = var_31_float;
	@@var_16_object:GetProperty("health", var_32_float);
	var_67_int = (int)1 - var_31_float;
	var_33_float = var_17_float * var_67_int;
	var_69_float = 0; var_70_float = 0; var_71_float = 0; var_72_float = 0;
	var_70_float = var_32_float - var_33_float;
	func_1532(var_69_float, var_70_float, (float)0, (float)1);
	@@var_16_object:SetProperty("health", var_69_float);
	var_75_bool = 0; var_76_object = Obj();
	var_16_object = var_76_object;
	func_1349(var_75_bool, var_76_object);
	if(var_75_bool != 0) {
		var_79_float = 0;
		var_79_float = -var_33_float;
		func_1637(var_79_float);
	}
	var_33_float = var_15_float;
	return 12;
	
}


func_1911(var_8_bool, var_9_string, var_10_int)
{
	var_11_bool = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_bool = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0;
	GetWeaponProperty(var_15_bool, "ammo", var_16_int);
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = var_15_bool;
	if(var_21_bool != 0) {
		var_22_bool = var_16_int >= var_10_int;
		if(var_22_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_8_bool = 0;
		return 8;
	}
	GetInvItemByName(var_17_int, var_9_string);
	
Label_1927:
	var_23_bool = var_16_int < var_10_int;
	if(var_23_bool != 0) {
		RemoveItemByType(var_18_bool, var_17_int, (int)1);
		var_25_bool = var_18_bool == 0; //@nz
		if(var_25_bool != 0) {
		} else {
			var_16_int = var_16_int + (int)1;
			goto Label_1927;
		}
	}
	var_26_bool = var_16_int == 0; //@nz
	if(var_26_bool != 0) {
		var_8_bool = 0;
		return 8;
	}
	SetWeaponProperty(var_15_bool, "ammo", var_16_int);
	var_8_bool = 1;
	return 8;
	
}


func_1947(var_335_float)
{
	var_336_bool = 0; var_337_int = 0; var_338_bool = 0; var_339_int = 0;
	GetWeaponProperty(var_338_bool, "durability", var_339_int);
	var_341_bool = var_338_bool;
	if(var_341_bool != 0) {
		var_335_float = var_339_int / (float)100.0;
	} else {
		var_335_float = 1.0;
	}
	return 4;
	
}


func_1958(var_367_int)
{
	var_369_bool = 0; var_370_int = 0; var_371_bool = 0; var_372_int = 0;
	GetWeaponProperty(var_371_bool, "durability", var_372_int);
	var_374_bool = var_371_bool == 0; //@nz
	if(var_374_bool != 0) {
		var_372_int = 100;
	}
	var_375_int = 0; var_376_int = 0; var_377_int = 0; var_378_int = 0;
	var_376_int = var_372_int - var_367_int;
	func_1543(var_375_int, var_376_int, (int)0, (int)100);
	var_375_int = var_372_int;
	SetWeaponProperty(var_371_bool, "durability", var_372_int);
	return 4;
}


func_1461(var_297_bool, var_298_object)
{
	var_299_bool = 0; var_300_bool = 0;
	@@var_298_object:IsDead(var_300_bool);
	var_300_bool = var_297_bool;
	return 2;
}


func_1976(var_332_float, var_333_float)
{
	var_335_float = 0;
	func_1947(var_335_float);
	var_344_int = (int)1 - var_333_float;
	var_345_float = var_335_float * var_344_int;
	var_332_float = var_333_float + var_345_float;
	return 0;
}


func_1466(var_89_bool, var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj();
	var_95_bool = var_90_object == 0; //@ne
	if(var_95_bool != 0) {
		var_89_bool = 0;
		return 4;
	}
	GetScene(var_93_object);
	var_96_bool = var_93_object == 0; //@ne
	if(var_96_bool != 0) {
		var_89_bool = 0;
		return 4;
	}
	@@var_90_object:GetScene(var_94_object);
	var_97_bool = var_93_object != var_94_object;
	if(var_97_bool != 0) {
		var_89_bool = 0;
		return 4;
	}
	var_89_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_957(var_145_float, var_146_bool)
{
	var_147_bool = var_146_bool;
	if(var_147_bool != 0) {
		var_145_float = 0.4000000059604645;
	} else {
		var_145_float = 0.20000000298023224;
	}
	return 0;
	
}


func_1985(var_6_bool, var_7_int)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_bool = 0; var_13_bool = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_bool = 0; var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_bool = 0; var_25_int = 0; var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_bool = 0;
	var_30_int = 0;
	func_1693(var_30_int);
	var_35_bool = var_30_int == (int)0;
	if(var_35_bool != 0) {
		var_19_int = 0;
		GetVariable("birdMaskAchievement", var_19_int);
		var_38_bool = var_19_int == (int)0;
		if(var_38_bool != 0) {
			GetItemCount(var_20_int, (int)1);
			GetInvItemByName(var_21_int, "bird_mask");
			GetInvItemByName(var_22_int, "bird_balahon");
			var_23_bool = 0;
			var_24_bool = 0;
			var_25_int = 0;

		Label_2011:
			var_42_bool = var_25_int < var_20_int;
			if(var_42_bool != 0) {
				GetItem(var_26_object, var_25_int, (int)1);
				@@var_26_object:GetItemID(var_27_int);
				var_44_bool = var_27_int == var_21_int;
				if(var_44_bool != 0) {
					IsItemSelected(var_28_bool, var_25_int, (int)1);
					var_46_bool = var_28_bool;
					if(var_46_bool != 0) {
						var_23_bool = 1;
					}
				} else {
					var_48_bool = var_27_int == var_22_int;
					if(var_48_bool == 0) goto Label_2035;
					IsItemSelected(var_29_bool, var_25_int, (int)1);
					var_50_bool = var_29_bool;
					if(var_50_bool == 0) goto Label_2035;
			}
				var_51_bool = 0;
				var_51_bool = 0;
				var_52_bool = var_23_bool;
				if(var_52_bool != 0) {
					var_53_bool = (bool)1;
					if(var_53_bool != 0) {
						var_51_bool = 1;
					}
				}
				if(var_51_bool != 0) {
					SetVariable("birdMaskAchievement", (int)1);
					UnlockAchievement("ACHIEVEMENT_THEY");
				}
		}
	}
		var_57_bool = 0; var_58_int = 0;
		var_7_int = var_58_int;
		func_1699(var_57_bool, var_58_int);
		var_57_bool = var_6_bool;
		return 22;
	}
Label_2035:
	var_26_object = 0;
	var_25_int = var_25_int + (int)1;
	goto Label_2011;
	
}


func_964(var_101_bool)
{
	var_102_bool = 0; var_103_bool = 0;
	IsShooting(var_103_bool);
	var_103_bool = var_101_bool;
	return 2;
}


func_969(var_502_bool)
{
	var_503_bool = 0; var_504_bool = 0; var_505_bool = 0; var_506_bool = 0;
	GetWeaponProperty(var_505_bool, "ammo", var_506_bool);
	var_508_bool = 0;
	var_508_bool = 1;
	var_509_bool = var_505_bool == 0; //@nz
	if(var_509_bool != 1) {
		var_510_bool = var_506_bool == 0; //@nz
		if(var_510_bool != 1) {
			var_508_bool = 0;
		}
	}
	if(var_508_bool != 0) {
		var_511_bool = 0; var_512_string = ""; var_513_int = 0;
		func_1911(var_511_bool, "revolver_ammo", (int)2);
		var_532_bool = var_511_bool == 0; //@nz
		if(var_532_bool != 0) {
			var_533_string = "";
			func_1068(var_533_string);
			var_535_int = var_533_string + "_noammo";
			PlaySound(var_535_int);
			PlayAnimation("noammo");
			WaitForAnimEnd();
			var_502_bool = 0;
			return 4;
		}
	}
	var_502_bool = 1;
	return 4;
}


func_1487(var_78_string, var_79_int)
{
	var_81_bool = var_79_int == (int)1;
	if(var_81_bool != 0) {
		var_78_string = "wood";
		return 0;
	EMIT "GOTO 0x5ed";
	}
	var_83_bool = var_79_int == (int)2;
	if(var_83_bool != 0) {
		var_78_string = "metal";
		return 0;
	EMIT "GOTO 0x5ed";
	}
	var_85_bool = var_79_int == (int)3;
	if(var_85_bool != 0) {
		var_78_string = "ground";
		return 0;
	EMIT "GOTO 0x5ed";
	}
	var_87_bool = var_79_int == (int)4;
	if(var_87_bool != 0) {
		var_78_string = "water";
		return 0;
	EMIT "GOTO 0x5ed";
	}
	var_89_bool = var_79_int == (int)5;
	if(var_89_bool != 0) {
		var_78_string = "carpet";
		return 0;
	}
	var_78_string = "stone";
	return 0;
}


func_468(var_27_string)
{
	var_29_bool = var_27_string == "empty";
	if(var_29_bool != 0) {
		TaskCall(4);
		func_756(var_30_bool);
		TaskReturn();
	} else {
		var_238_bool = var_27_string == "scalpel";
		if(var_238_bool != 0) {
			TaskCall(1);
			func_85(var_239_bool);
			TaskReturn();
			goto Label_504;
		}
		var_399_bool = var_27_string == "lockpick";
		if(var_399_bool != 0) {
			TaskCall(2);
			func_330(var_400_bool, var_401_bool);
			TaskReturn();
			goto Label_504;
		}
		var_452_bool = var_27_string == "gun";
		if(var_452_bool == 0) goto Label_504;
		TaskCall(5);
		func_1078(var_453_bool);
		TaskReturn();
	}
Label_504:
	return 0;
	
}


func_1004(var_563_int)
{
	var_563_int = 3;
	return 0;
}


func_1006(var_568_float)
{
	var_568_float = 0.02617993950843811;
	return 0;
}


func_1519(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1008()
{
	var_539_bool = 0; var_540_int = 0; var_541_bool = 0; var_542_int = 0;
	GetWeaponProperty(var_541_bool, "ammo", var_542_int);
	var_546_int = var_542_int - (int)1;
	SetWeaponProperty(var_541_bool, "ammo", var_546_int);
	func_2377();
	return 4;
}


func_1525(var_59_float, var_60_float, var_61_float)
{
	var_64_bool = var_60_float < var_61_float;
	if(var_64_bool != 0) {
		var_60_float = var_59_float;
	} else {
		var_61_float = var_59_float;
	}
	return 0;
	
}


func_505(var_10_string)
{
	var_12_bool = var_10_string == "gun";
	if(var_12_bool != 0) {
		TaskCall(6);
		func_1310();
		TaskReturn();
	}
	return 0;
}


func_1532(var_69_float, var_70_float, var_71_float, var_72_float)
{
	var_73_bool = var_70_float < var_71_float;
	if(var_73_bool != 0) {
		var_71_float = var_69_float;
		return 0;
	}
	var_74_bool = var_70_float > var_72_float;
	if(var_74_bool != 0) {
		var_72_float = var_69_float;
		return 0;
	}
	var_70_float = var_69_float;
	return 0;
}


func_1021()
{
	var_624_bool = 0; var_625_bool = 0; var_626_bool = 0; var_627_bool = 0;
	GetWeaponProperty(var_626_bool, "ammo", var_627_bool);
	var_629_bool = 0;
	var_629_bool = 1;
	var_630_bool = var_626_bool == 0; //@nz
	if(var_630_bool != 1) {
		var_631_bool = var_627_bool == 0; //@nz
		if(var_631_bool != 1) {
			var_629_bool = 0;
		}
	}
	if(var_629_bool != 0) {
		func_1037();
	}
	return 4;
}


