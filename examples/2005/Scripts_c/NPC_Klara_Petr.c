// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2252();
			if(var_26_bool == 26878) {
				func_152(var_27_cvector, "Neutral");
				var_0_object->SetMessage(525522); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525523, 30733, 26879); //@t
				var_0_object->AddReply(529279, 30734, 30732); //@t
				return 0;
			}
			if(var_26_bool == 30734) {
				func_152(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529283, -1, 30736); //@t
				return 0;
			}
			if(var_26_bool == 30733) {
				func_152(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529280); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529282, -1, 30735); //@t
				return 0;
			}
			var_3_string = true;
			bool var_65_bool;
			func_2388(var_65_bool);
			if(var_65_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2252();
			if(var_27_cvector == 27195) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2390();
				object var_81_object = var_1_object;
				func_2461(var_0_object);
				object var_107_object = var_1_object;
				func_2450(var_0_object);
			}
			if(var_27_cvector == 42977) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_2390();
				object var_135_object = var_1_object;
				func_2450(var_0_object);
			}
			if(var_27_cvector == 27221) {
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_2418();
			}
			if(var_27_cvector == 42988) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_2418();
			}
			if(var_27_cvector == 42994) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_2418();
			}
			if(var_27_cvector == 27223) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_2418();
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_2444();
				object var_167_object = var_1_object;
				func_2427(var_0_object);
			}
			if(var_26_bool == 27192) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(525900); //@t
				var_0_object->ClearReplies(); //@t
				bool var_188_bool;
				func_2477(var_1_object);
				if(var_188_bool != 0)
					var_0_object->AddReply(525901, 42962, 27193); //@t
				bool var_199_bool;
				func_2489(var_1_object);
				if(var_199_bool != 0)
					var_0_object->AddReply(525924, 30559, 27216); //@t
				var_0_object->AddReply(525904, -1, 27196); //@t
				var_0_object->AddReply(529107, -1, 30552); //@t
				return 0;
			}
			if(var_26_bool == 30559) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529114); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529115, 27217, 30560); //@t
				return 0;
			}
			if(var_26_bool == 27217) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(525925); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525926, 27220, 27218); //@t
				var_0_object->AddReply(525927, 27222, 27219); //@t
				return 0;
			}
			if(var_26_bool == 27222) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(525930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540904, 42980, 42979); //@t
				var_0_object->AddReply(525931, -1, 27223); //@t
				return 0;
			}
			if(var_26_bool == 42980) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540905); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540906, 42982, 42981); //@t
				var_0_object->AddReply(540914, 42982, 42990); //@t
				return 0;
			}
			if(var_26_bool == 42982) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540907); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540908, 42984, 42983); //@t
				var_0_object->AddReply(540915, 42987, 42992); //@t
				return 0;
			}
			if(var_26_bool == 42984) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540909); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540910, 42987, 42985); //@t
				var_0_object->AddReply(540911, 42987, 42986); //@t
				return 0;
			}
			if(var_26_bool == 42987) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540912); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540913, -1, 42988); //@t
				var_0_object->AddReply(540916, -1, 42994); //@t
				return 0;
			}
			if(var_26_bool == 27220) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(525928); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529116, 30562, 30561); //@t
				return 0;
			}
			if(var_26_bool == 30562) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529117); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525929, -1, 27221); //@t
				return 0;
			}
			if(var_26_bool == 42962) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540891); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540892, 30553, 42963); //@t
				return 0;
			}
			if(var_26_bool == 30553) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529108); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529109, 30555, 30554); //@t
				var_0_object->AddReply(540893, 42965, 42964); //@t
				return 0;
			}
			if(var_26_bool == 42965) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540894); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540895, 27194, 42966); //@t
				var_0_object->AddReply(540900, 27194, 42973); //@t
				return 0;
			}
			if(var_26_bool == 30555) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529110); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529111, 30557, 30556); //@t
				var_0_object->AddReply(540899, 42965, 42971); //@t
				return 0;
			}
			if(var_26_bool == 30557) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529112); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529113, 27194, 30558); //@t
				var_0_object->AddReply(540898, 42969, 42970); //@t
				return 0;
			}
			if(var_26_bool == 27194) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(525902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540896, 42969, 42968); //@t
				return 0;
			}
			if(var_26_bool == 42969) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540897); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525903, -1, 27195); //@t
				var_0_object->AddReply(540901, 42976, 42975); //@t
				return 0;
			}
			if(var_26_bool == 42976) {
				func_411(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540903, -1, 42977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_366_bool;
			func_2388(var_366_bool);
			if(var_366_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b2";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2252();
			if(var_27_cvector == 29405) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2438();
			}
			if(var_26_bool == 29404) {
				func_1078(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528042); //@t
				var_0_object->ClearReplies(); //@t
				bool var_51_bool;
				func_2501(var_1_object);
				if(var_51_bool != 0)
					var_0_object->AddReply(528043, 29406, 29405); //@t
				var_0_object->AddReply(528046, -1, 29408); //@t
				var_0_object->AddReply(541057, -1, 43161); //@t
				return 0;
			}
			if(var_26_bool == 29406) {
				func_1078(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528044); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528045, 43162, 29407); //@t
				var_0_object->AddReply(541060, 43165, 43164); //@t
				return 0;
			}
			if(var_26_bool == 43165) {
				func_1078(var_27_cvector, "Neutral");
				var_0_object->SetMessage(541061); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541062, 43167, 43166); //@t
				return 0;
			}
			if(var_26_bool == 43167) {
				func_1078(var_27_cvector, "Neutral");
				var_0_object->SetMessage(541063); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541064, -1, 43168); //@t
				var_0_object->AddReply(541065, -1, 43169); //@t
				return 0;
			}
			if(var_26_bool == 43162) {
				func_1078(var_27_cvector, "Neutral");
				var_0_object->SetMessage(541058); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541059, 43165, 43163); //@t
				return 0;
			}
			var_3_string = true;
			bool var_102_bool;
			func_2388(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x44d";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2252();
			if(var_26_bool == 36906) {
				func_1386(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_26_bool == 36953) {
				func_1386(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_26_bool == 36957) {
				func_1386(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_74_bool;
			func_2388(var_74_bool);
			if(var_74_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x581";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2252();
			if(var_26_int == 42554) {
				func_1640(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_2388(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x67f";
	
	}

}


maintask task_11
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		var_26_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1711(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_1782();
			bool var_30_bool = false;
			bool var_31_bool;
			func_1996(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_1751(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_1731(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2259(var_72_object);
					var_72_object = var_71_object;
					func_2144(var_70_bool, var_71_object);
				}
			} else {
				func_1746(var_26_int);
				func_1773();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1964();
		func_1782();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
		{
		@StopGroup0();
		func_1782();
		func_2224("Neutral");
		func_1773();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_1773();
		else
			func_2224("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_1964();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_1987(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_2647(var_44_object);
			func_2224("Neutral");
			func_1782();
			func_1773();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_31_bool;
	func_1996(var_31_bool);
	if(!var_31_bool) goto Label_0; //@nz
}


void func_2311(object var_110_object, string var_111_string, int var_112_int)
{
	object var_114_object;
	@CreateInvItem(var_114_object);
	var_114_object->SetItemName(var_111_string);
	object var_115_object; object var_116_object; int var_117_int;
	var_110_object = var_115_object;
	var_114_object = var_116_object;
	var_112_int = var_117_int;
	func_2292(var_115_object, var_116_object, var_117_int);
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_47_int, object var_48_object)
{
	var_0_object = var_48_object;
	bool var_58_bool; object var_59_object;
	object var_60_object;
	func_2259(var_60_object);
	var_60_object = var_59_object;
	func_2086(var_58_bool, var_59_object);
	bool var_153_bool; object var_154_object;
	var_48_object = var_154_object;
	func_2001(var_153_bool, var_154_object, 70.0);
	if(!var_153_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_200_int;
	func_2382(var_200_int);
	var_54_object->SetNPCName(var_200_int);
	int var_201_int;
	func_2380(var_201_int);
	var_54_object->SetNPCDescription(var_201_int);
	string var_202_string;
	func_2384(var_202_string);
	var_54_object->SetPhoto(var_202_string);
	string var_203_string;
	func_2386(var_203_string);
	var_54_object->SetPhoto2(var_203_string);
	int var_204_int;
	func_2630(var_204_int);
	var_54_object->SetPlayerName(var_204_int);
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	@DoDialog(var_54_object);
	object var_213_object; object var_214_object;
	var_48_object = var_213_object;
	var_54_object = var_214_object;
	TaskCall(2);
	func_94(var_215_object, var_216_object, var_217_string, var_218_bool, var_213_object, var_214_object);
	TaskReturn();
	bool var_57_bool;
	var_54_object->IsDialogEnd(var_57_bool);
	
	for(;;) {
		var_252_bool = !var_57_bool; //@nz
		if(var_252_bool == 0) goto Label_83;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_83:
	object var_253_object;
	var_48_object = var_253_object;
	func_2069();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


void func_2580(object var_38_object)
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


void func_2069(void)
{
	bool var_255_bool;
	@CameraSwitchToNormal();
	bool var_256_bool;
	func_2388(var_256_bool);
	if(var_256_bool != 0) {
	} else {
		@HasAnimationTrack(var_255_bool, "head");
		if(var_255_bool == 0) goto Label_2085;
		@UnlookAsync("head");
	}
Label_2085:
	
}


void func_2324(bool var_75_bool, string var_76_string, string var_77_string)
{
	object var_79_object;
	@FindActor(var_79_object, var_76_string);
	if(var_79_object == null)
		var_75_bool = false;
	@Trigger(var_79_object, var_77_string);
	var_75_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2336(float var_49_float)
{
	float var_51_float;
	@GetGameTime(var_51_float);
	var_51_float = var_49_float;
}


void func_2341(int var_113_int)
{
	float var_115_float;
	@GetGameTime(var_115_float);
	var_113_int = 1 + (var_115_float / 24);
}


void func_2086(bool var_58_bool, object var_59_object)
{
	int var_65_int; int var_66_int;
	@GetVariable("voice_common", var_65_int);
	if(var_65_int != 0) {
		bool var_69_bool; object var_70_object;
		var_59_object = var_70_object;
		func_2144(var_69_bool, var_70_object);
		if(!var_69_bool) { //@nz
			bool var_100_bool; object var_101_object;
			var_59_object = var_101_object;
			func_2181(var_100_bool, var_101_object);
			if(!var_100_bool) { //@nz
				var_58_bool = false;
				return 4;
			}
		}
		@irand(var_66_int, 2);
		if(var_66_int != 0)
			@SetVariable("voice_common", ((var_65_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_145_bool; object var_146_object;
		var_59_object = var_146_object;
		func_2181(var_145_bool, var_146_object);
		if(!var_145_bool) { //@nz
			bool var_148_bool; object var_149_object;
			var_59_object = var_149_object;
			func_2144(var_148_bool, var_149_object);
			if(!var_148_bool) { //@nz
				var_58_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2142;
	
Label_2142:
	var_58_bool = true;
	
}


void func_2597(object var_83_object, string var_84_string, float var_85_float)
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
void func_1323(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_433_object, object var_434_object)
{
	var_0_object = var_434_object;
	var_1_object = var_433_object;
	var_3_string = false;
	if(1 != 0) {
		func_1386(var_434_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_1356;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x52f";
	}
Label_1356:
	bool var_458_bool;
	func_2388(var_458_bool);
	if(var_458_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2224(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1385;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1385:
		return 0;

	}
	
}


// @pe
void func_1582(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_492_object, object var_493_object)
{
	var_0_object = var_493_object;
	var_1_object = var_492_object;
	var_3_string = false;
	if(1 != 0) {
		func_1640(var_493_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_1610;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x632";
	}
Label_1610:
	bool var_514_bool;
	func_2388(var_514_bool);
	if(var_514_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2224(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1639;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1639:
		return 0;

	}
	
}


// @pe
void func_2350(bool var_261_bool, int var_262_int)
{
	int var_263_int;
	func_2341(var_263_int);
	var_261_bool = var_263_int == var_262_int;
}


void func_2356(string var_65_string, int var_66_int)
{
	string var_68_string = "idle";
	if(var_66_int != 0)
		var_68_string += var_66_int;
	var_68_string = var_65_string;
}


// @pe
void func_1078(object var_2_object, string var_373_string)
{
	bool var_374_bool;
	func_2388(var_374_bool);
	if(!var_374_bool) //@nz
		return 0;
	if(var_373_string == var_2_object)
		return 0;
	string var_377_string; bool var_378_bool;
	var_373_string = var_377_string;
	if(var_373_string == "")
		var_378_bool = false;
	else
		var_378_bool = true;
	func_2231(var_377_string, var_378_bool);
	var_2_object = var_373_string;
	
}


void func_2363(int var_59_int)
{
	int var_62_int; bool var_63_bool;
	var_62_int = 0;
	
	for(;;) {
		string var_65_string; int var_66_int;
		var_62_int = var_66_int;
		func_2356(var_65_string, var_66_int);
		@HasAnimation(var_63_bool, "all", var_65_string);
		if(!var_63_bool) //@nz
			break;
		var_62_int += 1;
	}
	var_62_int = var_59_int;
}


void func_2630(int var_204_int)
{
	int var_206_int;
	@GetVariable("branch", var_206_int);
	if(var_206_int == 0) {
		var_204_int = 1;
		return 2;
	EMIT "GOTO 0xa55";
	}
	if(var_206_int == 1) {
		var_204_int = 2;
		return 2;
	}
	var_204_int = 3;
}


void func_2380(int var_201_int)
{
	var_201_int = 515550;
}


// @pe
void func_333(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_288_object, object var_289_object)
{
	var_0_object = var_289_object;
	var_1_object = var_288_object;
	var_3_string = false;
	if(1 != 0) {
		func_411(var_289_object, "Neutral");
		var_0_object->SetMessage(525900); //@t
		var_0_object->ClearReplies(); //@t
		bool var_304_bool;
		func_2477(var_1_object);
		if(var_304_bool != 0)
			var_0_object->AddReply(525901, 42962, 27193); //@t
		bool var_315_bool;
		func_2489(var_1_object);
		if(var_315_bool != 0)
			var_0_object->AddReply(525924, 30559, 27216); //@t
		var_0_object->AddReply(525904, -1, 27196); //@t
		var_0_object->AddReply(529107, -1, 30552); //@t
		goto Label_381;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x151";
	}
Label_381:
	bool var_330_bool;
	func_2388(var_330_bool);
	if(var_330_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2224(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_410;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_410:
		return 0;

	}
	
}


void func_2382(int var_200_int)
{
	var_200_int = 502875;
}


void func_2384(string var_202_string)
{
	var_202_string = "ui/NPC_Petr.png";
}


void func_2386(string var_203_string)
{
	var_203_string = "ui/NPC_Petr_b.png";
}


void func_2388(bool var_96_bool)
{
	var_96_bool = true;
}


void func_2390(void)
{
	@SetVariable("k5q02", 2);
	object var_38_object;
	func_2580(var_38_object);
	object var_35_object;
	var_38_object = var_35_object;
	float var_49_float;
	func_2336(var_49_float);
	var_35_object->AddMark("k5q02PetrGotoAndrei", "pt_map_andrei", 0, 515295, var_49_float);
	func_2513();
	bool var_75_bool;
	func_2324(var_75_bool, "quest_k5_02", "init_kabak");
}
EMIT "Stack[-1] = 0";


// @pe
void func_2647(object var_44_object)
{
	var_45_bool = GlobalVars[1];
	if(!var_45_bool) { //@nz
		int var_47_int; object var_48_object;
		var_44_object = var_48_object;
		TaskCall(1);
		func_13(var_49_object, var_47_int, var_48_object);
		TaskReturn();
		var_260_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_261_bool;
	func_2350(var_261_bool, 5);
	if(var_261_bool != 0) {
		int var_264_int; object var_265_object;
		var_44_object = var_265_object;
		TaskCall(3);
		func_252(var_266_object, var_264_int, var_265_object);
		TaskReturn();
		return 0;
	}
	bool var_340_bool;
	func_2350(var_340_bool, 11);
	if(var_340_bool != 0) {
		int var_342_int; object var_343_object;
		var_44_object = var_343_object;
		TaskCall(5);
		func_929(var_344_object, var_342_int, var_343_object);
		TaskReturn();
		return 0;
	}
	bool var_407_bool;
	func_2350(var_407_bool, 12);
	if(var_407_bool != 0) {
		int var_409_int; object var_410_object;
		var_44_object = var_410_object;
		TaskCall(7);
		func_1242(var_411_object, var_409_int, var_410_object);
		TaskReturn();
		return 0;
	}
	int var_468_int; object var_469_object;
	var_44_object = var_469_object;
	TaskCall(9);
	func_1501(var_470_object, var_468_int, var_469_object);
	TaskReturn();
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_213_object, object var_214_object)
{
	var_0_object = var_214_object;
	var_1_object = var_213_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_214_object, "Neutral");
		var_0_object->SetMessage(525522); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525523, 30733, 26879); //@t
		var_0_object->AddReply(529279, 30734, 30732); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_239_bool;
	func_2388(var_239_bool);
	if(var_239_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2224(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_151;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_151:
		return 0;

	}
	
}


void func_2144(bool var_69_bool, object var_70_object)
{
	string var_76_string; bool var_78_bool; int var_79_int; string var_80_string;
	var_76_string = "c";
	int var_77_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_70_object->HasProperty((var_76_string + (var_77_int + 1)), var_78_bool);
			if(!var_78_bool) { //@nz
			} else {
				var_77_int += 1;
			}
		}
		if(!var_77_int) { //@nz
			var_69_bool = false;
			return 10;
		}
		var_79_int = 0;
		if(var_77_int > 1)
			@irand(var_79_int, var_77_int);
		var_70_object->GetProperty((var_76_string + (var_79_int + 1)), var_80_string);
		bool var_92_bool; string var_93_string;
		var_80_string = var_93_string;
		func_2237(var_92_bool, var_93_string);
		var_92_bool = var_69_bool;
		return 10;

	}
}


void func_1893(void)
{
	bool var_53_bool; int var_54_int; int var_55_int; bool var_56_bool;
	@WaitForAnimEnd();
	bool var_57_bool;
	func_1996(var_57_bool);
	if(!var_57_bool) //@nz
		return 12;
	int var_59_int;
	func_2363(var_59_int);
	int var_51_int;
	var_59_int = var_51_int;
	int var_52_int = 0;
	
	for(;;) {
		bool var_72_bool = false;
		if(var_52_int < 5) {
			bool var_75_bool;
			func_1996(var_75_bool);
			if(var_75_bool != 0)
				var_72_bool = true;
		}
		if(var_72_bool != 0) {
			if(!var_51_int) { //@nz
				@Sleep(3, var_53_bool);
				if(!var_53_bool) { //@nz
				} else {
			} else {
			@irand(var_54_int, var_51_int);
			@irand(var_55_int, 5);
			if(var_55_int != 0)
				var_54_int = 0;
			string var_86_string; int var_87_int;
			var_54_int = var_87_int;
			func_2356(var_86_string, var_87_int);
			@PlayAnimation("all", var_86_string);
			@WaitForAnimEnd(var_56_bool);
			var_88_bool = !var_56_bool; //@nz
			if(var_88_bool == 0) goto Label_1948;
			goto Label_1959;
			}
				Label_1948:
					bool var_79_bool;
					func_1962(var_79_bool);
					var_80_bool = !var_79_bool; //@nz
					if(var_80_bool == 0) goto Label_1954;
			}
		}
	Label_1959:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1954:
		@ResetAAS();
		var_52_int += 1;
	}
	
}


// @pe
void func_1640(object var_2_object, string var_499_string)
{
	bool var_500_bool;
	func_2388(var_500_bool);
	if(!var_500_bool) //@nz
		return 0;
	if(var_499_string == var_2_object)
		return 0;
	string var_503_string; bool var_504_bool;
	var_499_string = var_503_string;
	if(var_499_string == "")
		var_504_bool = false;
	else
		var_504_bool = true;
	func_2231(var_503_string, var_504_bool);
	var_2_object = var_499_string;
	
}


// @pe
void func_1386(object var_2_object, string var_440_string)
{
	bool var_441_bool;
	func_2388(var_441_bool);
	if(!var_441_bool) //@nz
		return 0;
	if(var_440_string == var_2_object)
		return 0;
	string var_444_string; bool var_445_bool;
	var_440_string = var_444_string;
	if(var_440_string == "")
		var_445_bool = false;
	else
		var_445_bool = true;
	func_2231(var_444_string, var_445_bool);
	var_2_object = var_440_string;
	
}


// @pe
void func_2418(void)
{
	@SetVariable("k5q02", 6);
	func_2526();
}


// @pe
void func_2427(object var_167_object)
{
	@Trace("tvirin 5 is given");
	object var_170_object;
	var_167_object = var_170_object;
	func_2311(var_170_object, "tvirin", 5);
}


void func_2181(bool var_100_bool, object var_101_object)
{
	bool var_109_bool; int var_110_int; string var_111_string;
	int var_113_int;
	func_2341(var_113_int);
	string var_107_string = ("d" + var_113_int) + "m";
	int var_108_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_101_object->HasProperty((var_107_string + (var_108_int + 1)), var_109_bool);
			if(!var_109_bool) { //@nz
			} else {
				var_108_int += 1;
			}
		}
		if(!var_108_int) { //@nz
			var_100_bool = false;
			return 10;
		}
		var_110_int = 0;
		if(var_108_int > 1)
			@irand(var_110_int, var_108_int);
		var_101_object->GetProperty((var_107_string + (var_110_int + 1)), var_111_string);
		bool var_132_bool; string var_133_string;
		var_111_string = var_133_string;
		func_2237(var_132_bool, var_133_string);
		var_132_bool = var_100_bool;
		return 10;

	}
}


// @pe
void func_2438(void)
{
	@SetVariable("ook11Petr1", 1);
}


// @pe
void func_2444(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_2450(object var_107_object)
{
	@Trace("tvirin is given");
	object var_110_object;
	var_107_object = var_110_object;
	func_2311(var_110_object, "tvirin", 1);
}


// @pe
void func_152(object var_2_object, string var_220_string)
{
	bool var_221_bool;
	func_2388(var_221_bool);
	if(!var_221_bool) //@nz
		return 0;
	if(var_220_string == var_2_object)
		return 0;
	string var_224_string; bool var_225_bool;
	var_220_string = var_224_string;
	if(var_220_string == "")
		var_225_bool = false;
	else
		var_225_bool = true;
	func_2231(var_224_string, var_225_bool);
	var_2_object = var_220_string;
	
}


// @pe
void func_411(object var_2_object, string var_295_string)
{
	bool var_296_bool;
	func_2388(var_296_bool);
	if(!var_296_bool) //@nz
		return 0;
	if(var_295_string == var_2_object)
		return 0;
	string var_299_string; bool var_300_bool;
	var_295_string = var_299_string;
	if(var_295_string == "")
		var_300_bool = false;
	else
		var_300_bool = true;
	func_2231(var_299_string, var_300_bool);
	var_2_object = var_295_string;
	
}


// @pe
void func_2461(object var_82_object)
{
	object var_86_object;
	func_2580(var_86_object);
	object var_83_object;
	var_86_object = var_83_object;
	func_2597(var_83_object, "pt_map_andrei", (float)2);
	object var_106_object;
	func_2580(var_106_object);
	var_82_object->ShowMap(var_106_object);
}


void func_929(object var_0_object, int var_342_int, object var_343_object)
{
	var_0_object = var_343_object;
	bool var_353_bool; object var_354_object;
	object var_355_object;
	func_2259(var_355_object);
	var_355_object = var_354_object;
	func_2086(var_353_bool, var_354_object);
	bool var_356_bool; object var_357_object;
	var_343_object = var_357_object;
	func_2001(var_356_bool, var_357_object, 70.0);
	if(!var_356_bool) { //@nz
		var_342_int = -2;
		return 8;
	}
	object var_349_object;
	@CreateDialog(var_349_object);
	int var_360_int;
	func_2382(var_360_int);
	var_349_object->SetNPCName(var_360_int);
	int var_361_int;
	func_2380(var_361_int);
	var_349_object->SetNPCDescription(var_361_int);
	string var_362_string;
	func_2384(var_362_string);
	var_349_object->SetPhoto(var_362_string);
	string var_363_string;
	func_2386(var_363_string);
	var_349_object->SetPhoto2(var_363_string);
	int var_364_int;
	func_2630(var_364_int);
	var_349_object->SetPlayerName(var_364_int);
	bool var_350_bool;
	@IsOverrideActive(var_350_bool);
	if(var_350_bool != 0) {
		var_342_int = -2;
		return 8;
	}
	@DoDialog(var_349_object);
	object var_366_object; object var_367_object;
	var_343_object = var_366_object;
	var_349_object = var_367_object;
	TaskCall(6);
	func_1010(var_368_object, var_369_object, var_370_string, var_371_bool, var_366_object, var_367_object);
	TaskReturn();
	bool var_352_bool;
	var_349_object->IsDialogEnd(var_352_bool);
	
	for(;;) {
		var_405_bool = !var_352_bool; //@nz
		if(var_405_bool == 0) goto Label_999;
		@sync();
		var_349_object->IsDialogEnd(var_352_bool);
	}
	
Label_999:
	object var_406_object;
	var_343_object = var_406_object;
	func_2069();
	@StopDialog(var_349_object);
	var_349_object->GetReturnValue(-1);
	int var_351_int = var_342_int;
}
EMIT "Stack[-4] = 0";


void func_1962(bool var_79_bool)
{
	var_79_bool = true;
}


void func_1964(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2477(bool var_304_bool)
{
	int var_306_int;
	func_2275(var_306_int, "k5q02");
	if(var_306_int == 1)
		var_304_bool = true;
	var_304_bool = false;
}


void func_1711(object var_0_object)
{
	bool var_27_bool;
	func_1996(var_27_bool);
	if(!var_27_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1839();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1893();
	}
}
EMIT "Return(); Pop(0)";


void func_2224(string var_34_string)
{
	float var_37_float; float var_38_float;
	@lshGetAnimTimes(var_34_string, var_37_float, var_38_float);
	@lshPlayAnimation(var_37_float, var_38_float, false);
}


void func_1969(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_2231(string var_224_string, bool var_225_bool)
{
	float var_230_float; float var_231_float;
	@lshGetAnimTimes(var_224_string, var_230_float, var_231_float);
	@lshPlayAnimation(var_230_float, var_231_float, var_225_bool);
}


// @pe
void func_2489(bool var_315_bool)
{
	int var_317_int;
	func_2275(var_317_int, "k5q02");
	if(var_317_int == 5)
		var_315_bool = true;
	var_315_bool = false;
}


void func_1977(bool var_34_bool, cvector var_35_cvector)
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


void func_2237(bool var_92_bool, string var_93_string)
{
	bool var_95_bool;
	bool var_96_bool;
	func_2388(var_96_bool);
	if(var_96_bool != 0) {
		@lshHasSpeech(var_95_bool, var_93_string);
		if(var_95_bool != 0) {
			@lshPlaySpeech(var_93_string);
			var_92_bool = true;
		}
	}
	var_92_bool = false;
}


void func_1987(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_1977(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


void func_1731(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_1987(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2501(bool var_382_bool)
{
	int var_384_int;
	func_2275(var_384_int, "ook11Petr1");
	if(var_384_int == 0) {
		var_382_bool = true;
		return 0;
	}
	var_382_bool = false;
}


void func_1996(bool var_27_bool)
{
	bool var_29_bool;
	@IsLoaded(var_29_bool);
	var_29_bool = var_27_bool;
}


void func_2252(void)
{
	bool var_29_bool;
	func_2388(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_2001(bool var_153_bool, object var_154_object, float var_155_float)
{
	cvector var_166_cvector; bool var_173_bool;
	var_154_object->GetPosition(var_166_cvector);
	float var_165_float;
	var_154_object->GetEyesHeight(var_165_float);
	var_174_float = GetByIndex(var_166_cvector, 1);
	SetByIndex(var_166_cvector, 1) = (var_174_float + var_165_float);
	cvector var_167_cvector;
	@GetPosition(var_167_cvector);
	@GetEyesHeight(var_165_float);
	var_175_float = GetByIndex(var_167_cvector, 1);
	SetByIndex(var_167_cvector, 1) = (var_175_float + var_165_float);
	cvector var_168_cvector = var_166_cvector - var_167_cvector;
	var_176_float = GetByIndex(var_168_cvector, 1);
	SetByIndex(var_168_cvector, 1) = (float)0;
	var_178_float = sqrt(var_168_cvector | var_168_cvector);
	var_168_cvector /= var_178_float;
	cvector var_169_cvector = -var_168_cvector;
	cvector var_180_cvector;
	func_2265(var_180_cvector, (var_169_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_170_cvector = ((var_168_cvector * var_155_float) + (var_180_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_172_bool;
	@IsOverrideActive(var_172_bool);
	if(var_172_bool != 0)
		var_153_bool = false;
	@StopWorld();
	@CameraTransit((var_167_cvector + var_170_cvector), var_169_cvector);
	var_193_float = GetByIndex(var_170_cvector, 0);
	var_194_float = GetByIndex(var_170_cvector, 2);
	@Rotate(var_193_float, var_194_float);
	bool var_195_bool;
	func_2388(var_195_bool);
	if(var_195_bool != 0) {
	} else {
		@HasAnimationTrack(var_173_bool, "head");
		if(var_173_bool == 0) goto Label_2063;
		@LookAsyncCamera("head");
	}
Label_2063:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_153_bool = true;
	
}


void func_1746(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_2259(object var_60_object)
{
	object var_62_object;
	@self(var_62_object);
	var_62_object = var_60_object;
}
EMIT "Stack[-1] = 0";


void func_2513(void)
{
	object var_53_object;
	@CreateDiaryEntry(var_53_object, 399, 2, 525937);
	bool var_57_bool; object var_58_object;
	var_53_object = var_58_object;
	func_2552(var_57_bool, var_58_object, 397);
}
EMIT "Stack[-1] = 0";


void func_1751(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_1969(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_2265(cvector var_180_cvector, cvector var_181_cvector)
{
	float var_184_float = sqrt(var_181_cvector | var_181_cvector);
	if(var_184_float < 0.000001)
		var_180_cvector = [0.0, 0.0, 0.0];
	var_180_cvector = var_181_cvector / var_184_float;
}


void func_1242(object var_0_object, int var_409_int, object var_410_object)
{
	var_0_object = var_410_object;
	bool var_420_bool; object var_421_object;
	object var_422_object;
	func_2259(var_422_object);
	var_422_object = var_421_object;
	func_2086(var_420_bool, var_421_object);
	bool var_423_bool; object var_424_object;
	var_410_object = var_424_object;
	func_2001(var_423_bool, var_424_object, 70.0);
	if(!var_423_bool) { //@nz
		var_409_int = -2;
		return 8;
	}
	object var_416_object;
	@CreateDialog(var_416_object);
	int var_427_int;
	func_2382(var_427_int);
	var_416_object->SetNPCName(var_427_int);
	int var_428_int;
	func_2380(var_428_int);
	var_416_object->SetNPCDescription(var_428_int);
	string var_429_string;
	func_2384(var_429_string);
	var_416_object->SetPhoto(var_429_string);
	string var_430_string;
	func_2386(var_430_string);
	var_416_object->SetPhoto2(var_430_string);
	int var_431_int;
	func_2630(var_431_int);
	var_416_object->SetPlayerName(var_431_int);
	bool var_417_bool;
	@IsOverrideActive(var_417_bool);
	if(var_417_bool != 0) {
		var_409_int = -2;
		return 8;
	}
	@DoDialog(var_416_object);
	object var_433_object; object var_434_object;
	var_410_object = var_433_object;
	var_416_object = var_434_object;
	TaskCall(8);
	func_1323(var_435_object, var_436_object, var_437_string, var_438_bool, var_433_object, var_434_object);
	TaskReturn();
	bool var_419_bool;
	var_416_object->IsDialogEnd(var_419_bool);
	
	for(;;) {
		var_466_bool = !var_419_bool; //@nz
		if(var_466_bool == 0) goto Label_1312;
		@sync();
		var_416_object->IsDialogEnd(var_419_bool);
	}
	
Label_1312:
	object var_467_object;
	var_410_object = var_467_object;
	func_2069();
	@StopDialog(var_416_object);
	var_416_object->GetReturnValue(-1);
	int var_418_int = var_409_int;
}
EMIT "Stack[-4] = 0";


void func_1501(object var_0_object, int var_468_int, object var_469_object)
{
	var_0_object = var_469_object;
	bool var_479_bool; object var_480_object;
	object var_481_object;
	func_2259(var_481_object);
	var_481_object = var_480_object;
	func_2086(var_479_bool, var_480_object);
	bool var_482_bool; object var_483_object;
	var_469_object = var_483_object;
	func_2001(var_482_bool, var_483_object, 70.0);
	if(!var_482_bool) { //@nz
		var_468_int = -2;
		return 8;
	}
	object var_475_object;
	@CreateDialog(var_475_object);
	int var_486_int;
	func_2382(var_486_int);
	var_475_object->SetNPCName(var_486_int);
	int var_487_int;
	func_2380(var_487_int);
	var_475_object->SetNPCDescription(var_487_int);
	string var_488_string;
	func_2384(var_488_string);
	var_475_object->SetPhoto(var_488_string);
	string var_489_string;
	func_2386(var_489_string);
	var_475_object->SetPhoto2(var_489_string);
	int var_490_int;
	func_2630(var_490_int);
	var_475_object->SetPlayerName(var_490_int);
	bool var_476_bool;
	@IsOverrideActive(var_476_bool);
	if(var_476_bool != 0) {
		var_468_int = -2;
		return 8;
	}
	@DoDialog(var_475_object);
	object var_492_object; object var_493_object;
	var_469_object = var_492_object;
	var_475_object = var_493_object;
	TaskCall(10);
	func_1582(var_494_object, var_495_object, var_496_string, var_497_bool, var_492_object, var_493_object);
	TaskReturn();
	bool var_478_bool;
	var_475_object->IsDialogEnd(var_478_bool);
	
	for(;;) {
		var_522_bool = !var_478_bool; //@nz
		if(var_522_bool == 0) goto Label_1571;
		@sync();
		var_475_object->IsDialogEnd(var_478_bool);
	}
	
Label_1571:
	object var_523_object;
	var_469_object = var_523_object;
	func_2069();
	@StopDialog(var_475_object);
	var_475_object->GetReturnValue(-1);
	int var_477_int = var_468_int;
}
EMIT "Stack[-4] = 0";


void func_2526(void)
{
	object var_144_object;
	@CreateDiaryEntry(var_144_object, 403, 2, 525941);
	bool var_148_bool; object var_149_object;
	var_144_object = var_149_object;
	func_2552(var_148_bool, var_149_object, 397);
}
EMIT "Stack[-1] = 0";


void func_2275(int var_306_int, string var_307_string)
{
	int var_309_int;
	@GetVariable(var_307_string, var_309_int);
	var_309_int = var_306_int;
}


void func_2280(int var_126_int, int var_127_int)
{
	object var_129_object;
	@CreateIntVector(var_129_object);
	var_129_object->add(var_126_int);
	var_129_object->add(var_127_int);
	@SendWorldWndMessage(3, var_129_object);
}
EMIT "Stack[-1] = 0";


void func_2539(object var_66_object)
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


void func_1773(void)
{
	float var_41_float;
	@rand(var_41_float, 8, 16);
	@SetTimer(10, var_41_float);
}


// @pe
void func_1010(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_366_object, object var_367_object)
{
	var_0_object = var_367_object;
	var_3_string = false;
	if(1 != 0) {
		func_1078(var_367_object, "Neutral");
		var_0_object->SetMessage(528042); //@t
		var_0_object->ClearReplies(); //@t
		bool var_382_bool;
		func_2501(var_366_object);
		if(var_382_bool != 0)
			var_0_object->AddReply(528043, 29406, 29405); //@t
		var_0_object->AddReply(528046, -1, 29408); //@t
		var_0_object->AddReply(541057, -1, 43161); //@t
		goto Label_1048;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3f6";
	}
Label_1048:
	bool var_397_bool;
	func_2388(var_397_bool);
	if(var_397_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2224(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1077;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1077:
		return 0;

	}
	
}


void func_2292(object var_115_object, object var_116_object, int var_117_int)
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
		func_2280(var_126_int, var_127_int);
	}
	
}


void func_1782(void)
{
	@KillTimer(10);
}


void func_2552(bool var_57_bool, object var_58_object, int var_59_int)
{
	object var_66_object;
	func_2539(var_66_object);
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


void func_252(object var_0_object, int var_264_int, object var_265_object)
{
	var_0_object = var_265_object;
	bool var_275_bool; object var_276_object;
	object var_277_object;
	func_2259(var_277_object);
	var_277_object = var_276_object;
	func_2086(var_275_bool, var_276_object);
	bool var_278_bool; object var_279_object;
	var_265_object = var_279_object;
	func_2001(var_278_bool, var_279_object, 70.0);
	if(!var_278_bool) { //@nz
		var_264_int = -2;
		return 8;
	}
	object var_271_object;
	@CreateDialog(var_271_object);
	int var_282_int;
	func_2382(var_282_int);
	var_271_object->SetNPCName(var_282_int);
	int var_283_int;
	func_2380(var_283_int);
	var_271_object->SetNPCDescription(var_283_int);
	string var_284_string;
	func_2384(var_284_string);
	var_271_object->SetPhoto(var_284_string);
	string var_285_string;
	func_2386(var_285_string);
	var_271_object->SetPhoto2(var_285_string);
	int var_286_int;
	func_2630(var_286_int);
	var_271_object->SetPlayerName(var_286_int);
	bool var_272_bool;
	@IsOverrideActive(var_272_bool);
	if(var_272_bool != 0) {
		var_264_int = -2;
		return 8;
	}
	@DoDialog(var_271_object);
	object var_288_object; object var_289_object;
	var_265_object = var_288_object;
	var_271_object = var_289_object;
	TaskCall(4);
	func_333(var_290_object, var_291_object, var_292_string, var_293_bool, var_288_object, var_289_object);
	TaskReturn();
	bool var_274_bool;
	var_271_object->IsDialogEnd(var_274_bool);
	
	for(;;) {
		var_338_bool = !var_274_bool; //@nz
		if(var_338_bool == 0) goto Label_322;
		@sync();
		var_271_object->IsDialogEnd(var_274_bool);
	}
	
Label_322:
	object var_339_object;
	var_265_object = var_339_object;
	func_2069();
	@StopDialog(var_271_object);
	var_271_object->GetReturnValue(-1);
	int var_273_int = var_264_int;
}
EMIT "Stack[-4] = 0";


