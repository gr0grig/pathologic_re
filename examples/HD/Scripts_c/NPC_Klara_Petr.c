// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2258();
			if(var_26_bool == 26878) {
				func_139(var_27_cvector, "Neutral");
				var_0_object->SetMessage(525522); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525523, 30733, 26879); //@t
				var_0_object->AddReply(529279, 30734, 30732); //@t
				return 0;
			}
			if(var_26_bool == 30734) {
				func_139(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529283, -1, 30736); //@t
				return 0;
			}
			if(var_26_bool == 30733) {
				func_139(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529280); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529282, -1, 30735); //@t
				return 0;
			}
			var_3_string = true;
			bool var_70_bool;
			func_2394(var_70_bool);
			if(var_70_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2258();
			if(var_27_cvector == 27195) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2396();
				object var_81_object = var_1_object;
				func_2467(var_0_object);
				object var_107_object = var_1_object;
				func_2456(var_0_object);
			}
			if(var_27_cvector == 42977) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_2396();
				object var_135_object = var_1_object;
				func_2456(var_0_object);
			}
			if(var_27_cvector == 27221) {
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_2424();
			}
			if(var_27_cvector == 42988) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_2424();
			}
			if(var_27_cvector == 42994) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_2424();
			}
			if(var_27_cvector == 27223) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_2424();
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_2450();
				object var_167_object = var_1_object;
				func_2433(var_0_object);
			}
			if(var_26_bool == 27192) {
				func_398(var_27_cvector, "Neutral");
				var_0_object->SetMessage(525900); //@t
				var_0_object->ClearReplies(); //@t
				bool var_193_bool;
				func_2483(var_1_object);
				if(var_193_bool != 0)
					var_0_object->AddReply(525901, 42962, 27193); //@t
				bool var_204_bool;
				func_2495(var_1_object);
				if(var_204_bool != 0)
					var_0_object->AddReply(525924, 30559, 27216); //@t
				var_0_object->AddReply(525904, -1, 27196); //@t
				var_0_object->AddReply(529107, -1, 30552); //@t
				return 0;
			}
			if(var_26_bool == 30559) {
				func_398(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529114); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529115, 27217, 30560); //@t
				return 0;
			}
			if(var_26_bool == 27217) {
				func_398(var_27_cvector, "Autizm");
				var_0_object->SetMessage(525925); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525926, 27220, 27218); //@t
				var_0_object->AddReply(525927, 27222, 27219); //@t
				return 0;
			}
			if(var_26_bool == 27222) {
				func_398(var_27_cvector, "Drunk");
				var_0_object->SetMessage(525930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540904, 42980, 42979); //@t
				var_0_object->AddReply(525931, -1, 27223); //@t
				return 0;
			}
			if(var_26_bool == 42980) {
				func_398(var_27_cvector, "Drunk");
				var_0_object->SetMessage(540905); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540906, 42982, 42981); //@t
				var_0_object->AddReply(540914, 42982, 42990); //@t
				return 0;
			}
			if(var_26_bool == 42982) {
				func_398(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540907); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540908, 42984, 42983); //@t
				var_0_object->AddReply(540915, 42987, 42992); //@t
				return 0;
			}
			if(var_26_bool == 42984) {
				func_398(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540909); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540910, 42987, 42985); //@t
				var_0_object->AddReply(540911, 42987, 42986); //@t
				return 0;
			}
			if(var_26_bool == 42987) {
				func_398(var_27_cvector, "Autizm");
				var_0_object->SetMessage(540912); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540913, -1, 42988); //@t
				var_0_object->AddReply(540916, -1, 42994); //@t
				return 0;
			}
			if(var_26_bool == 27220) {
				func_398(var_27_cvector, "Autizm");
				var_0_object->SetMessage(525928); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529116, 30562, 30561); //@t
				return 0;
			}
			if(var_26_bool == 30562) {
				func_398(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529117); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525929, -1, 27221); //@t
				return 0;
			}
			if(var_26_bool == 42962) {
				func_398(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540891); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540892, 30553, 42963); //@t
				return 0;
			}
			if(var_26_bool == 30553) {
				func_398(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529108); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529109, 30555, 30554); //@t
				var_0_object->AddReply(540893, 42965, 42964); //@t
				return 0;
			}
			if(var_26_bool == 42965) {
				func_398(var_27_cvector, "Untrust");
				var_0_object->SetMessage(540894); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540895, 27194, 42966); //@t
				var_0_object->AddReply(540900, 27194, 42973); //@t
				return 0;
			}
			if(var_26_bool == 30555) {
				func_398(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529110); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529111, 30557, 30556); //@t
				var_0_object->AddReply(540899, 42965, 42971); //@t
				return 0;
			}
			if(var_26_bool == 30557) {
				func_398(var_27_cvector, "Untrust");
				var_0_object->SetMessage(529112); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529113, 27194, 30558); //@t
				var_0_object->AddReply(540898, 42969, 42970); //@t
				return 0;
			}
			if(var_26_bool == 27194) {
				func_398(var_27_cvector, "Drunk");
				var_0_object->SetMessage(525902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540896, 42969, 42968); //@t
				var_0_object->AddReply(541554, 42969, 43721); //@t
				return 0;
			}
			if(var_26_bool == 42969) {
				func_398(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540897); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525903, -1, 27195); //@t
				var_0_object->AddReply(540901, 42976, 42975); //@t
				return 0;
			}
			if(var_26_bool == 42976) {
				func_398(var_27_cvector, "Untrust");
				var_0_object->SetMessage(540902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540903, -1, 42977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_374_bool;
			func_2394(var_374_bool);
			if(var_374_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a5";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2258();
			if(var_27_cvector == 29405) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2444();
			}
			if(var_26_bool == 29404) {
				func_1070(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528042); //@t
				var_0_object->ClearReplies(); //@t
				bool var_56_bool;
				func_2507(var_1_object);
				if(var_56_bool != 0)
					var_0_object->AddReply(528043, 29406, 29405); //@t
				var_0_object->AddReply(528046, -1, 29408); //@t
				var_0_object->AddReply(541057, -1, 43161); //@t
				return 0;
			}
			if(var_26_bool == 29406) {
				func_1070(var_27_cvector, "Untrust");
				var_0_object->SetMessage(528044); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528045, 43162, 29407); //@t
				var_0_object->AddReply(541060, 43165, 43164); //@t
				return 0;
			}
			if(var_26_bool == 43165) {
				func_1070(var_27_cvector, "Drunk");
				var_0_object->SetMessage(541061); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541062, 43167, 43166); //@t
				return 0;
			}
			if(var_26_bool == 43167) {
				func_1070(var_27_cvector, "Drunk");
				var_0_object->SetMessage(541063); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541064, -1, 43168); //@t
				var_0_object->AddReply(541065, -1, 43169); //@t
				return 0;
			}
			if(var_26_bool == 43162) {
				func_1070(var_27_cvector, "Neutral");
				var_0_object->SetMessage(541058); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541059, 43165, 43163); //@t
				return 0;
			}
			var_3_string = true;
			bool var_107_bool;
			func_2394(var_107_bool);
			if(var_107_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x445";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2258();
			if(var_26_bool == 36906) {
				func_1378(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_26_bool == 36953) {
				func_1378(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_26_bool == 36957) {
				func_1378(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_79_bool;
			func_2394(var_79_bool);
			if(var_79_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x579";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2258();
			if(var_26_int == 42554) {
				func_1632(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_2394(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x677";
	
	}

}


maintask task_10
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		var_26_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1703(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_1768();
			bool var_30_bool = false;
			bool var_31_bool;
			func_1982(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_1737(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_1717(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2265(var_72_object);
					var_72_object = var_71_object;
					func_2132(var_70_bool, var_71_object);
				}
			} else {
				func_1732(var_26_int);
				func_1759();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1950();
		func_1768();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		@StopGroup0();
		func_1768();
		func_2212("Neutral");
		func_1759();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_1759();
		else
			func_2212("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_1950();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_1973(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_2653(var_44_object);
			func_2212("Neutral");
			func_1768();
			func_1759();
		}
	}

}


void func_0(object var_0_object, int var_47_int, object var_48_object)
{
	var_0_object = var_48_object;
	bool var_58_bool; object var_59_object;
	var_48_object = var_59_object;
	func_1987(var_58_bool, var_59_object, 70.0);
	if(!var_58_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_106_int;
	func_2388(var_106_int);
	var_54_object->SetNPCName(var_106_int);
	int var_107_int;
	func_2386(var_107_int);
	var_54_object->SetNPCDescription(var_107_int);
	string var_108_string;
	func_2390(var_108_string);
	var_54_object->SetPhoto(var_108_string);
	string var_109_string;
	func_2392(var_109_string);
	var_54_object->SetPhoto2(var_109_string);
	int var_110_int;
	func_2636(var_110_int);
	var_54_object->SetPlayerName(var_110_int);
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	@DoDialog(var_54_object);
	bool var_119_bool; object var_120_object;
	object var_121_object;
	func_2265(var_121_object);
	var_121_object = var_120_object;
	func_2074(var_119_bool, var_120_object);
	object var_214_object; object var_215_object;
	var_48_object = var_214_object;
	var_54_object = var_215_object;
	TaskCall(1);
	func_81(var_216_object, var_217_object, var_218_string, var_219_bool, var_214_object, var_215_object);
	TaskReturn();
	bool var_57_bool;
	var_54_object->IsDialogEnd(var_57_bool);
	
	for(;;) {
		var_263_bool = !var_57_bool; //@nz
		if(var_263_bool == 0) goto Label_70;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_70:
	object var_264_object;
	var_48_object = var_264_object;
	func_2056();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


void func_2056(void)
{
	bool var_266_bool;
	@CameraSwitchToNormal(true);
	bool var_268_bool;
	func_2394(var_268_bool);
	if(var_268_bool != 0) {
	} else {
		@HasAnimationTrack(var_266_bool, "head");
		if(var_266_bool == 0) goto Label_2073;
		@UnlookAsync("head");
	}
Label_2073:
	
}


void func_2317(object var_110_object, string var_111_string, int var_112_int)
{
	object var_114_object;
	@CreateInvItem(var_114_object);
	var_114_object->SetItemName(var_111_string);
	object var_115_object; object var_116_object; int var_117_int;
	var_110_object = var_115_object;
	var_114_object = var_116_object;
	var_112_int = var_117_int;
	func_2298(var_115_object, var_116_object, var_117_int);
}
EMIT "Stack[-1] = 0";


void func_2330(bool var_75_bool, string var_76_string, string var_77_string)
{
	object var_79_object;
	@FindActor(var_79_object, var_76_string);
	if(var_79_object == null)
		var_75_bool = false;
	@Trigger(var_79_object, var_77_string);
	var_75_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2586(object var_38_object)
{
	object var_41_object; object var_42_object;
	@GetMainOutdoorScene(var_41_object);
	if(var_41_object == null) {
		@Trace("Can't find main outdoor scene");
		var_42_object = null;
		var_42_object = var_38_object;
	}
	var_41_object->GetMap(var_42_object);
	var_42_object = var_38_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2074(bool var_119_bool, object var_120_object)
{
	int var_126_int; int var_127_int;
	@GetVariable("voice_common", var_126_int);
	if(var_126_int != 0) {
		bool var_130_bool; object var_131_object;
		var_120_object = var_131_object;
		func_2132(var_130_bool, var_131_object);
		if(!var_130_bool) { //@nz
			bool var_161_bool; object var_162_object;
			var_120_object = var_162_object;
			func_2169(var_161_bool, var_162_object);
			if(!var_161_bool) { //@nz
				var_119_bool = false;
				return 4;
			}
		}
		@irand(var_127_int, 2);
		if(var_127_int != 0)
			@SetVariable("voice_common", ((var_126_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_206_bool; object var_207_object;
		var_120_object = var_207_object;
		func_2169(var_206_bool, var_207_object);
		if(!var_206_bool) { //@nz
			bool var_209_bool; object var_210_object;
			var_120_object = var_210_object;
			func_2132(var_209_bool, var_210_object);
			if(!var_209_bool) { //@nz
				var_119_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2130;
	
Label_2130:
	var_119_bool = true;
	
}


// @pe
void func_1315(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_445_object, object var_446_object)
{
	var_0_object = var_446_object;
	var_1_object = var_445_object;
	var_3_string = false;
	if(1 != 0) {
		func_1378(var_446_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_1348;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x527";
	}
Label_1348:
	bool var_470_bool;
	func_2394(var_470_bool);
	if(var_470_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2212(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1377;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1377:
		return 0;

	}
	
}


// @pe
void func_1574(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_504_object, object var_505_object)
{
	var_0_object = var_505_object;
	var_1_object = var_504_object;
	var_3_string = false;
	if(1 != 0) {
		func_1632(var_505_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_1602;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62a";
	}
Label_1602:
	bool var_526_bool;
	func_2394(var_526_bool);
	if(var_526_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2212(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1631;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1631:
		return 0;

	}
	
}


void func_2342(float var_49_float)
{
	float var_51_float;
	@GetGameTime(var_51_float);
	var_51_float = var_49_float;
}


void func_2347(int var_174_int)
{
	float var_176_float;
	@GetGameTime(var_176_float);
	var_174_int = 1 + (var_176_float / 24);
}


void func_2603(object var_83_object, string var_84_string, float var_85_float)
{
	object var_93_object;
	@GetMainOutdoorScene(var_93_object);
	if(var_93_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_91_cvector;
	cvector var_92_cvector;
	bool var_94_bool;
	var_93_object->GetLocator(var_84_string, var_94_bool, var_91_cvector, var_92_cvector);
	if(!var_94_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_84_string) + " doesnt exist");
	var_93_object->GetMap(var_83_object);
	if(var_83_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_104_float = GetByIndex(var_91_cvector, 0);
	var_105_float = GetByIndex(var_91_cvector, 2);
	var_83_object->SetMapParams(var_104_float, var_105_float, var_85_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_1070(object var_2_object, string var_385_string)
{
	bool var_386_bool;
	func_2394(var_386_bool);
	if(!var_386_bool) //@nz
		return 0;
	if(var_385_string == var_2_object)
		return 0;
	string var_389_string; bool var_390_bool;
	var_385_string = var_389_string;
	if(var_385_string == "")
		var_390_bool = false;
	else
		var_390_bool = true;
	func_2228(var_389_string, var_390_bool);
	var_2_object = var_385_string;
	
}


// @pe
void func_2356(bool var_273_bool, int var_274_int)
{
	int var_275_int;
	func_2347(var_275_int);
	var_273_bool = var_275_int == var_274_int;
}


void func_2362(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


// @pe
void func_320(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_300_object, object var_301_object)
{
	var_0_object = var_301_object;
	var_1_object = var_300_object;
	var_3_string = false;
	if(1 != 0) {
		func_398(var_301_object, "Neutral");
		var_0_object->SetMessage(525900); //@t
		var_0_object->ClearReplies(); //@t
		bool var_316_bool;
		func_2483(var_1_object);
		if(var_316_bool != 0)
			var_0_object->AddReply(525901, 42962, 27193); //@t
		bool var_327_bool;
		func_2495(var_1_object);
		if(var_327_bool != 0)
			var_0_object->AddReply(525924, 30559, 27216); //@t
		var_0_object->AddReply(525904, -1, 27196); //@t
		var_0_object->AddReply(529107, -1, 30552); //@t
		goto Label_368;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x144";
	}
Label_368:
	bool var_342_bool;
	func_2394(var_342_bool);
	if(var_342_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2212(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_397;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_397:
		return 0;

	}
	
}


void func_2369(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_2362(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_2636(int var_110_int)
{
	int var_112_int;
	@GetVariable("branch", var_112_int);
	if(var_112_int == 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0xa5b";
	}
	if(var_112_int == 1) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_214_object, object var_215_object)
{
	var_0_object = var_215_object;
	var_1_object = var_214_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_215_object, "Neutral");
		var_0_object->SetMessage(525522); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525523, 30733, 26879); //@t
		var_0_object->AddReply(529279, 30734, 30732); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_245_bool;
	func_2394(var_245_bool);
	if(var_245_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2212(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


void func_2386(int var_107_int)
{
	var_107_int = 515550;
}


void func_2388(int var_106_int)
{
	var_106_int = 502875;
}


void func_2132(bool var_130_bool, object var_131_object)
{
	string var_137_string; bool var_139_bool; int var_140_int; string var_141_string;
	var_137_string = "c";
	int var_138_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_131_object->HasProperty((var_137_string + (var_138_int + 1)), var_139_bool);
			if(!var_139_bool) { //@nz
			} else {
				var_138_int += 1;
			}
		}
		if(!var_138_int) { //@nz
			var_130_bool = false;
			return 10;
		}
		var_140_int = 0;
		if(var_138_int > 1)
			@irand(var_140_int, var_138_int);
		var_131_object->GetProperty((var_137_string + (var_140_int + 1)), var_141_string);
		bool var_153_bool; string var_154_string;
		var_141_string = var_154_string;
		func_2243(var_153_bool, var_154_string);
		var_153_bool = var_130_bool;
		return 10;

	}
}


void func_2390(string var_108_string)
{
	var_108_string = "ui/NPC_Petr.png";
}


void func_1879(void)
{
	bool var_39_bool; int var_40_int; int var_41_int; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_1982(var_43_bool);
	if(!var_43_bool) //@nz
		return 12;
	int var_45_int;
	func_2369(var_45_int);
	int var_37_int;
	var_45_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_38_int < 5) {
			bool var_61_bool;
			func_1982(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			if(!var_37_int) { //@nz
				@Sleep(3, var_39_bool);
				if(!var_39_bool) { //@nz
				} else {
			} else {
			@irand(var_40_int, var_37_int);
			@irand(var_41_int, 5);
			if(var_41_int != 0)
				var_40_int = 0;
			string var_72_string; int var_73_int;
			var_40_int = var_73_int;
			func_2362(var_72_string, var_73_int);
			@PlayAnimation("all", var_72_string);
			@WaitForAnimEnd(var_42_bool);
			var_74_bool = !var_42_bool; //@nz
			if(var_74_bool == 0) goto Label_1934;
			goto Label_1945;
			}
				Label_1934:
					bool var_65_bool;
					func_1948(var_65_bool);
					var_66_bool = !var_65_bool; //@nz
					if(var_66_bool == 0) goto Label_1940;
			}
		}
	Label_1945:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1940:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_2392(string var_109_string)
{
	var_109_string = "ui/NPC_Petr_b.png";
}


void func_2394(bool var_101_bool)
{
	var_101_bool = true;
}


void func_2396(void)
{
	@SetVariable("k5q02", 2);
	object var_38_object;
	func_2586(var_38_object);
	object var_35_object;
	var_38_object = var_35_object;
	float var_49_float;
	func_2342(var_49_float);
	var_35_object->AddMark("k5q02PetrGotoAndrei", "pt_map_andrei", 0, 515295, var_49_float);
	func_2519();
	bool var_75_bool;
	func_2330(var_75_bool, "quest_k5_02", "init_kabak");
}
EMIT "Stack[-1] = 0";


// @pe
void func_2653(object var_44_object)
{
	var_45_bool = GlobalVars[1];
	if(!var_45_bool) { //@nz
		int var_47_int; object var_48_object;
		var_44_object = var_48_object;
		TaskCall(0);
		func_0(var_49_object, var_47_int, var_48_object);
		TaskReturn();
		var_272_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_273_bool;
	func_2356(var_273_bool, 5);
	if(var_273_bool != 0) {
		int var_276_int; object var_277_object;
		var_44_object = var_277_object;
		TaskCall(2);
		func_239(var_278_object, var_276_int, var_277_object);
		TaskReturn();
		return 0;
	}
	bool var_352_bool;
	func_2356(var_352_bool, 11);
	if(var_352_bool != 0) {
		int var_354_int; object var_355_object;
		var_44_object = var_355_object;
		TaskCall(4);
		func_921(var_356_object, var_354_int, var_355_object);
		TaskReturn();
		return 0;
	}
	bool var_419_bool;
	func_2356(var_419_bool, 12);
	if(var_419_bool != 0) {
		int var_421_int; object var_422_object;
		var_44_object = var_422_object;
		TaskCall(6);
		func_1234(var_423_object, var_421_int, var_422_object);
		TaskReturn();
		return 0;
	}
	int var_480_int; object var_481_object;
	var_44_object = var_481_object;
	TaskCall(8);
	func_1493(var_482_object, var_480_int, var_481_object);
	TaskReturn();
}


// @pe
void func_1632(object var_2_object, string var_511_string)
{
	bool var_512_bool;
	func_2394(var_512_bool);
	if(!var_512_bool) //@nz
		return 0;
	if(var_511_string == var_2_object)
		return 0;
	string var_515_string; bool var_516_bool;
	var_511_string = var_515_string;
	if(var_511_string == "")
		var_516_bool = false;
	else
		var_516_bool = true;
	func_2228(var_515_string, var_516_bool);
	var_2_object = var_511_string;
	
}


// @pe
void func_1378(object var_2_object, string var_452_string)
{
	bool var_453_bool;
	func_2394(var_453_bool);
	if(!var_453_bool) //@nz
		return 0;
	if(var_452_string == var_2_object)
		return 0;
	string var_456_string; bool var_457_bool;
	var_452_string = var_456_string;
	if(var_452_string == "")
		var_457_bool = false;
	else
		var_457_bool = true;
	func_2228(var_456_string, var_457_bool);
	var_2_object = var_452_string;
	
}


// @pe
void func_2424(void)
{
	@SetVariable("k5q02", 6);
	func_2532();
}


void func_2169(bool var_161_bool, object var_162_object)
{
	bool var_170_bool; int var_171_int; string var_172_string;
	int var_174_int;
	func_2347(var_174_int);
	string var_168_string = ("d" + var_174_int) + "m";
	int var_169_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_162_object->HasProperty((var_168_string + (var_169_int + 1)), var_170_bool);
			if(!var_170_bool) { //@nz
			} else {
				var_169_int += 1;
			}
		}
		if(!var_169_int) { //@nz
			var_161_bool = false;
			return 10;
		}
		var_171_int = 0;
		if(var_169_int > 1)
			@irand(var_171_int, var_169_int);
		var_162_object->GetProperty((var_168_string + (var_171_int + 1)), var_172_string);
		bool var_193_bool; string var_194_string;
		var_172_string = var_194_string;
		func_2243(var_193_bool, var_194_string);
		var_193_bool = var_161_bool;
		return 10;

	}
}


// @pe
void func_2433(object var_167_object)
{
	@Trace("tvirin 5 is given");
	object var_170_object;
	var_167_object = var_170_object;
	func_2317(var_170_object, "tvirin", 5);
}


// @pe
void func_139(object var_2_object, string var_221_string)
{
	bool var_222_bool;
	func_2394(var_222_bool);
	if(!var_222_bool) //@nz
		return 0;
	if(var_221_string == var_2_object)
		return 0;
	string var_225_string; bool var_226_bool;
	var_221_string = var_225_string;
	if(var_221_string == "")
		var_226_bool = false;
	else
		var_226_bool = true;
	func_2228(var_225_string, var_226_bool);
	var_2_object = var_221_string;
	
}


// @pe
void func_2444(void)
{
	@SetVariable("ook11Petr1", 1);
}


// @pe
void func_398(object var_2_object, string var_307_string)
{
	bool var_308_bool;
	func_2394(var_308_bool);
	if(!var_308_bool) //@nz
		return 0;
	if(var_307_string == var_2_object)
		return 0;
	string var_311_string; bool var_312_bool;
	var_307_string = var_311_string;
	if(var_307_string == "")
		var_312_bool = false;
	else
		var_312_bool = true;
	func_2228(var_311_string, var_312_bool);
	var_2_object = var_307_string;
	
}


// @pe
void func_2450(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_2456(object var_107_object)
{
	@Trace("tvirin is given");
	object var_110_object;
	var_107_object = var_110_object;
	func_2317(var_110_object, "tvirin", 1);
}


void func_921(object var_0_object, int var_354_int, object var_355_object)
{
	var_0_object = var_355_object;
	bool var_365_bool; object var_366_object;
	var_355_object = var_366_object;
	func_1987(var_365_bool, var_366_object, 70.0);
	if(!var_365_bool) { //@nz
		var_354_int = -2;
		return 8;
	}
	object var_361_object;
	@CreateDialog(var_361_object);
	int var_369_int;
	func_2388(var_369_int);
	var_361_object->SetNPCName(var_369_int);
	int var_370_int;
	func_2386(var_370_int);
	var_361_object->SetNPCDescription(var_370_int);
	string var_371_string;
	func_2390(var_371_string);
	var_361_object->SetPhoto(var_371_string);
	string var_372_string;
	func_2392(var_372_string);
	var_361_object->SetPhoto2(var_372_string);
	int var_373_int;
	func_2636(var_373_int);
	var_361_object->SetPlayerName(var_373_int);
	bool var_362_bool;
	@IsOverrideActive(var_362_bool);
	if(var_362_bool != 0) {
		var_354_int = -2;
		return 8;
	}
	@DoDialog(var_361_object);
	bool var_375_bool; object var_376_object;
	object var_377_object;
	func_2265(var_377_object);
	var_377_object = var_376_object;
	func_2074(var_375_bool, var_376_object);
	object var_378_object; object var_379_object;
	var_355_object = var_378_object;
	var_361_object = var_379_object;
	TaskCall(5);
	func_1002(var_380_object, var_381_object, var_382_string, var_383_bool, var_378_object, var_379_object);
	TaskReturn();
	bool var_364_bool;
	var_361_object->IsDialogEnd(var_364_bool);
	
	for(;;) {
		var_417_bool = !var_364_bool; //@nz
		if(var_417_bool == 0) goto Label_991;
		@sync();
		var_361_object->IsDialogEnd(var_364_bool);
	}
	
Label_991:
	object var_418_object;
	var_355_object = var_418_object;
	func_2056();
	@StopDialog(var_361_object);
	var_361_object->GetReturnValue(-1);
	int var_363_int = var_354_int;
}
EMIT "Stack[-4] = 0";


void func_1948(bool var_65_bool)
{
	var_65_bool = true;
}


void func_1950(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2467(object var_82_object)
{
	object var_86_object;
	func_2586(var_86_object);
	object var_83_object;
	var_86_object = var_83_object;
	func_2603(var_83_object, "pt_map_andrei", (float)2);
	object var_106_object;
	func_2586(var_106_object);
	var_82_object->ShowMap(var_106_object);
}


void func_2212(string var_247_string)
{
	bool var_251_bool; float var_252_float; float var_253_float;
	@lshHasAnimation(var_251_bool, var_247_string);
	if(var_251_bool != 0) {
		@lshGetAnimTimes(var_247_string, var_252_float, var_253_float);
		@lshPlayAnimation(var_252_float, var_253_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_247_string);
	}
	
}


void func_1955(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_1703(object var_0_object)
{
	bool var_27_bool;
	func_1982(var_27_bool);
	if(!var_27_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1879();
	}
}
EMIT "Return(); Pop(0)";


void func_1963(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


// @pe
void func_2483(bool var_316_bool)
{
	int var_318_int;
	func_2281(var_318_int, "k5q02");
	if(var_318_int == 1)
		var_316_bool = true;
	var_316_bool = false;
}


void func_2228(string var_225_string, bool var_226_bool)
{
	bool var_232_bool; float var_233_float; float var_234_float;
	@lshHasAnimation(var_232_bool, var_225_string);
	if(var_232_bool != 0) {
		@lshGetAnimTimes(var_225_string, var_233_float, var_234_float);
		@lshPlayAnimation(var_233_float, var_234_float, var_226_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_225_string);
	}
	
}


void func_1973(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_1963(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


void func_1717(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_1973(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


void func_1982(bool var_27_bool)
{
	bool var_29_bool;
	@IsLoaded(var_29_bool);
	var_29_bool = var_27_bool;
}


// @pe
void func_2495(bool var_327_bool)
{
	int var_329_int;
	func_2281(var_329_int, "k5q02");
	if(var_329_int == 5)
		var_327_bool = true;
	var_327_bool = false;
}


void func_1987(bool var_58_bool, object var_59_object, float var_60_float)
{
	cvector var_71_cvector; bool var_78_bool;
	var_59_object->GetPosition(var_71_cvector);
	float var_70_float;
	var_59_object->GetEyesHeight(var_70_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	SetByIndex(var_71_cvector, 1) = (var_79_float + var_70_float);
	cvector var_72_cvector;
	@GetPosition(var_72_cvector);
	@GetEyesHeight(var_70_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	SetByIndex(var_72_cvector, 1) = (var_80_float + var_70_float);
	cvector var_73_cvector = var_71_cvector - var_72_cvector;
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (float)0;
	var_83_float = sqrt(var_73_cvector | var_73_cvector);
	var_73_cvector /= var_83_float;
	cvector var_74_cvector = -var_73_cvector;
	cvector var_85_cvector;
	func_2271(var_85_cvector, (var_74_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_75_cvector = ((var_73_cvector * var_60_float) + (var_85_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_77_bool;
	@IsOverrideActive(var_77_bool);
	if(var_77_bool != 0)
		var_58_bool = false;
	@StopWorld();
	@CameraTransit((var_72_cvector + var_75_cvector), var_74_cvector, true);
	var_99_float = GetByIndex(var_75_cvector, 0);
	var_100_float = GetByIndex(var_75_cvector, 2);
	@Rotate(var_99_float, var_100_float);
	bool var_101_bool;
	func_2394(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		@HasAnimationTrack(var_78_bool, "head");
		if(var_78_bool == 0) goto Label_2050;
		@LookAsyncCamera("head");
	}
Label_2050:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_58_bool = true;
	
}


void func_1732(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_2243(bool var_153_bool, string var_154_string)
{
	bool var_156_bool;
	bool var_157_bool;
	func_2394(var_157_bool);
	if(var_157_bool != 0) {
		@lshHasSpeech(var_156_bool, var_154_string);
		if(var_156_bool != 0) {
			@lshPlaySpeech(var_154_string);
			var_153_bool = true;
		}
	}
	var_153_bool = false;
}


void func_1737(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_1955(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_2507(bool var_394_bool)
{
	int var_396_int;
	func_2281(var_396_int, "ook11Petr1");
	if(var_396_int == 0) {
		var_394_bool = true;
		return 0;
	}
	var_394_bool = false;
}


void func_1234(object var_0_object, int var_421_int, object var_422_object)
{
	var_0_object = var_422_object;
	bool var_432_bool; object var_433_object;
	var_422_object = var_433_object;
	func_1987(var_432_bool, var_433_object, 70.0);
	if(!var_432_bool) { //@nz
		var_421_int = -2;
		return 8;
	}
	object var_428_object;
	@CreateDialog(var_428_object);
	int var_436_int;
	func_2388(var_436_int);
	var_428_object->SetNPCName(var_436_int);
	int var_437_int;
	func_2386(var_437_int);
	var_428_object->SetNPCDescription(var_437_int);
	string var_438_string;
	func_2390(var_438_string);
	var_428_object->SetPhoto(var_438_string);
	string var_439_string;
	func_2392(var_439_string);
	var_428_object->SetPhoto2(var_439_string);
	int var_440_int;
	func_2636(var_440_int);
	var_428_object->SetPlayerName(var_440_int);
	bool var_429_bool;
	@IsOverrideActive(var_429_bool);
	if(var_429_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	@DoDialog(var_428_object);
	bool var_442_bool; object var_443_object;
	object var_444_object;
	func_2265(var_444_object);
	var_444_object = var_443_object;
	func_2074(var_442_bool, var_443_object);
	object var_445_object; object var_446_object;
	var_422_object = var_445_object;
	var_428_object = var_446_object;
	TaskCall(7);
	func_1315(var_447_object, var_448_object, var_449_string, var_450_bool, var_445_object, var_446_object);
	TaskReturn();
	bool var_431_bool;
	var_428_object->IsDialogEnd(var_431_bool);
	
	for(;;) {
		var_478_bool = !var_431_bool; //@nz
		if(var_478_bool == 0) goto Label_1304;
		@sync();
		var_428_object->IsDialogEnd(var_431_bool);
	}
	
Label_1304:
	object var_479_object;
	var_422_object = var_479_object;
	func_2056();
	@StopDialog(var_428_object);
	var_428_object->GetReturnValue(-1);
	int var_430_int = var_421_int;
}
EMIT "Stack[-4] = 0";


void func_2258(void)
{
	bool var_29_bool;
	func_2394(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_1493(object var_0_object, int var_480_int, object var_481_object)
{
	var_0_object = var_481_object;
	bool var_491_bool; object var_492_object;
	var_481_object = var_492_object;
	func_1987(var_491_bool, var_492_object, 70.0);
	if(!var_491_bool) { //@nz
		var_480_int = -2;
		return 8;
	}
	object var_487_object;
	@CreateDialog(var_487_object);
	int var_495_int;
	func_2388(var_495_int);
	var_487_object->SetNPCName(var_495_int);
	int var_496_int;
	func_2386(var_496_int);
	var_487_object->SetNPCDescription(var_496_int);
	string var_497_string;
	func_2390(var_497_string);
	var_487_object->SetPhoto(var_497_string);
	string var_498_string;
	func_2392(var_498_string);
	var_487_object->SetPhoto2(var_498_string);
	int var_499_int;
	func_2636(var_499_int);
	var_487_object->SetPlayerName(var_499_int);
	bool var_488_bool;
	@IsOverrideActive(var_488_bool);
	if(var_488_bool != 0) {
		var_480_int = -2;
		return 8;
	}
	@DoDialog(var_487_object);
	bool var_501_bool; object var_502_object;
	object var_503_object;
	func_2265(var_503_object);
	var_503_object = var_502_object;
	func_2074(var_501_bool, var_502_object);
	object var_504_object; object var_505_object;
	var_481_object = var_504_object;
	var_487_object = var_505_object;
	TaskCall(9);
	func_1574(var_506_object, var_507_object, var_508_string, var_509_bool, var_504_object, var_505_object);
	TaskReturn();
	bool var_490_bool;
	var_487_object->IsDialogEnd(var_490_bool);
	
	for(;;) {
		var_534_bool = !var_490_bool; //@nz
		if(var_534_bool == 0) goto Label_1563;
		@sync();
		var_487_object->IsDialogEnd(var_490_bool);
	}
	
Label_1563:
	object var_535_object;
	var_481_object = var_535_object;
	func_2056();
	@StopDialog(var_487_object);
	var_487_object->GetReturnValue(-1);
	int var_489_int = var_480_int;
}
EMIT "Stack[-4] = 0";


void func_2519(void)
{
	object var_53_object;
	@CreateDiaryEntry(var_53_object, 399, 2, 525937);
	bool var_57_bool; object var_58_object;
	var_53_object = var_58_object;
	func_2558(var_57_bool, var_58_object, 397);
}
EMIT "Stack[-1] = 0";


void func_2265(object var_121_object)
{
	object var_123_object;
	@self(var_123_object);
	var_123_object = var_121_object;
}
EMIT "Stack[-1] = 0";


void func_1759(void)
{
	float var_539_float;
	@rand(var_539_float, 8, 16);
	@SetTimer(10, var_539_float);
}


void func_2271(cvector var_85_cvector, cvector var_86_cvector)
{
	float var_89_float = sqrt(var_86_cvector | var_86_cvector);
	if(var_89_float < 0.000001)
		var_85_cvector = [0.0, 0.0, 0.0];
	var_85_cvector = var_86_cvector / var_89_float;
}


void func_2532(void)
{
	object var_144_object;
	@CreateDiaryEntry(var_144_object, 403, 2, 525941);
	bool var_148_bool; object var_149_object;
	var_144_object = var_149_object;
	func_2558(var_148_bool, var_149_object, 397);
}
EMIT "Stack[-1] = 0";


void func_1768(void)
{
	@KillTimer(10);
}


void func_2281(int var_318_int, string var_319_string)
{
	int var_321_int;
	@GetVariable(var_319_string, var_321_int);
	var_321_int = var_318_int;
}


// @pe
void func_1002(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_378_object, object var_379_object)
{
	var_0_object = var_379_object;
	var_3_string = false;
	if(1 != 0) {
		func_1070(var_379_object, "Neutral");
		var_0_object->SetMessage(528042); //@t
		var_0_object->ClearReplies(); //@t
		bool var_394_bool;
		func_2507(var_378_object);
		if(var_394_bool != 0)
			var_0_object->AddReply(528043, 29406, 29405); //@t
		var_0_object->AddReply(528046, -1, 29408); //@t
		var_0_object->AddReply(541057, -1, 43161); //@t
		goto Label_1040;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3ee";
	}
Label_1040:
	bool var_409_bool;
	func_2394(var_409_bool);
	if(var_409_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2212(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1069;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1069:
		return 0;

	}
	
}


void func_2286(int var_126_int, int var_127_int)
{
	object var_129_object;
	@CreateIntVector(var_129_object);
	var_129_object->add(var_126_int);
	var_129_object->add(var_127_int);
	@SendWorldWndMessage(3, var_129_object);
}
EMIT "Stack[-1] = 0";


void func_239(object var_0_object, int var_276_int, object var_277_object)
{
	var_0_object = var_277_object;
	bool var_287_bool; object var_288_object;
	var_277_object = var_288_object;
	func_1987(var_287_bool, var_288_object, 70.0);
	if(!var_287_bool) { //@nz
		var_276_int = -2;
		return 8;
	}
	object var_283_object;
	@CreateDialog(var_283_object);
	int var_291_int;
	func_2388(var_291_int);
	var_283_object->SetNPCName(var_291_int);
	int var_292_int;
	func_2386(var_292_int);
	var_283_object->SetNPCDescription(var_292_int);
	string var_293_string;
	func_2390(var_293_string);
	var_283_object->SetPhoto(var_293_string);
	string var_294_string;
	func_2392(var_294_string);
	var_283_object->SetPhoto2(var_294_string);
	int var_295_int;
	func_2636(var_295_int);
	var_283_object->SetPlayerName(var_295_int);
	bool var_284_bool;
	@IsOverrideActive(var_284_bool);
	if(var_284_bool != 0) {
		var_276_int = -2;
		return 8;
	}
	@DoDialog(var_283_object);
	bool var_297_bool; object var_298_object;
	object var_299_object;
	func_2265(var_299_object);
	var_299_object = var_298_object;
	func_2074(var_297_bool, var_298_object);
	object var_300_object; object var_301_object;
	var_277_object = var_300_object;
	var_283_object = var_301_object;
	TaskCall(3);
	func_320(var_302_object, var_303_object, var_304_string, var_305_bool, var_300_object, var_301_object);
	TaskReturn();
	bool var_286_bool;
	var_283_object->IsDialogEnd(var_286_bool);
	
	for(;;) {
		var_350_bool = !var_286_bool; //@nz
		if(var_350_bool == 0) goto Label_309;
		@sync();
		var_283_object->IsDialogEnd(var_286_bool);
	}
	
Label_309:
	object var_351_object;
	var_277_object = var_351_object;
	func_2056();
	@StopDialog(var_283_object);
	var_283_object->GetReturnValue(-1);
	int var_285_int = var_276_int;
}
EMIT "Stack[-4] = 0";


void func_2545(object var_66_object)
{
	object var_68_object;
	@GetDiaryRoot(var_68_object);
	if(!var_68_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_66_object = false;
	}
	var_68_object = var_66_object;
}
EMIT "Stack[-1] = 0";


void func_2298(object var_115_object, object var_116_object, int var_117_int)
{
	int var_121_int;
	var_116_object->GetItemID(var_121_int);
	int var_122_int;
	@GetInvItemProperty(var_122_int, var_121_int, "Category");
	bool var_123_bool;
	var_115_object->AddItem(var_123_bool, var_116_object, var_122_int, var_117_int);
	if(!var_123_bool) { //@nz
		var_115_object->DropItems(var_116_object, var_117_int);
	} else {
		int var_126_int; int var_127_int;
		var_121_int = var_126_int;
		var_117_int = var_127_int;
		func_2286(var_126_int, var_127_int);
	}
	
}


void func_2558(bool var_57_bool, object var_58_object, int var_59_int)
{
	object var_66_object;
	func_2545(var_66_object);
	object var_63_object;
	var_66_object = var_63_object;
	object var_64_object;
	var_63_object->Find(var_59_int, var_64_object);
	if(!var_64_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_59_int);
		var_57_bool = false;
	}
	var_64_object->AddChild(var_58_object);
	@SendWorldWndMessage(7);
	int var_65_int;
	var_58_object->GetCategory(var_65_int);
	@SetDiarySection(var_65_int);
	var_57_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


