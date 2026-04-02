// @GLOBALS: 0:object:,1:bool:,2:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2540();
			if(var_31_bool == 19151) {
				func_139(var_32_cvector, "Neutral");
				var_0_object->SetMessage(518018); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518019, -1, 19152); //@t
				var_0_object->AddReply(527797, -1, 29130); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2620(var_61_bool);
			if(var_61_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2540();
			if(var_32_cvector == 21461) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2628();
			}
			if(var_32_cvector == 21464) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_2634();
			}
			if(var_31_bool == 21440) {
				bool var_49_bool = false;
				bool var_50_bool;
				func_2705(var_1_object);
				if(!var_50_bool) { //@nz
					bool var_59_bool;
					func_2717(var_1_object);
					if(var_59_bool != 0)
						var_49_bool = true;
				}
				if(var_49_bool != 0) {
					object var_65_object; object var_66_object;
					var_65_object = var_1_object;
					var_66_object = var_0_object;
					func_2622();
					func_412(var_32_cvector, "Suffering");
					var_0_object->SetMessage(520248); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520249, 21442, 21441); //@t
					return 0;
				}
				func_412(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520268); //@t
				var_0_object->ClearReplies(); //@t
				bool var_92_bool = false;
				bool var_93_bool;
				func_2717(var_1_object);
				if(!var_93_bool) { //@nz
					bool var_96_bool;
					func_2729(var_1_object);
					if(var_96_bool != 0)
						var_92_bool = true;
				}
				if(var_92_bool != 0)
					var_0_object->AddReply(520269, 21462, 21461); //@t
				bool var_105_bool = false;
				bool var_106_bool;
				func_2717(var_1_object);
				if(!var_106_bool) { //@nz
					bool var_109_bool;
					func_2741(var_1_object);
					if(var_109_bool != 0)
						var_105_bool = true;
				}
				if(var_105_bool != 0)
					var_0_object->AddReply(520272, 21465, 21464); //@t
				var_0_object->AddReply(520277, -1, 21469); //@t
				return 0;
			}
			if(var_31_bool == 21465) {
				func_412(var_32_cvector, "Penetrating");
				var_0_object->SetMessage(520273); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520274, 21467, 21466); //@t
				return 0;
			}
			if(var_31_bool == 21467) {
				func_412(var_32_cvector, "Penetrating");
				var_0_object->SetMessage(520275); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520276, -1, 21468); //@t
				var_0_object->AddReply(527804, -1, 29140); //@t
				return 0;
			}
			if(var_31_bool == 21462) {
				func_412(var_32_cvector, "Grin");
				var_0_object->SetMessage(520270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520271, -1, 21463); //@t
				return 0;
			}
			if(var_31_bool == 21442) {
				func_412(var_32_cvector, "Suffering");
				var_0_object->SetMessage(520250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520251, 21444, 21443); //@t
				var_0_object->AddReply(520259, 21452, 21451); //@t
				var_0_object->AddReply(520265, 21458, 21457); //@t
				return 0;
			}
			if(var_31_bool == 21458) {
				func_412(var_32_cvector, "Suffering");
				var_0_object->SetMessage(520266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527803, 21452, 29136); //@t
				var_0_object->AddReply(520267, -1, 21459); //@t
				return 0;
			}
			if(var_31_bool == 21452) {
				func_412(var_32_cvector, "Penetrating");
				var_0_object->SetMessage(520260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520261, 21454, 21453); //@t
				var_0_object->AddReply(520264, 21454, 21456); //@t
				return 0;
			}
			if(var_31_bool == 21454) {
				func_412(var_32_cvector, "Suffering");
				var_0_object->SetMessage(520262); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520263, -1, 21455); //@t
				return 0;
			}
			if(var_31_bool == 21444) {
				func_412(var_32_cvector, "Suffering");
				var_0_object->SetMessage(520252); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520253, 21446, 21445); //@t
				var_0_object->AddReply(520256, 21449, 21448); //@t
				return 0;
			}
			if(var_31_bool == 21449) {
				func_412(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520257); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520258, -1, 21450); //@t
				return 0;
			}
			if(var_31_bool == 21446) {
				func_412(var_32_cvector, "Penetrating");
				var_0_object->SetMessage(520254); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520255, -1, 21447); //@t
				return 0;
			}
			var_3_string = true;
			bool var_209_bool;
			func_2620(var_209_bool);
			if(var_209_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b3";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2540();
			if(var_32_cvector == 22678) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2640();
			}
			if(var_31_bool == 22675) {
				func_921(var_32_cvector, "Fear");
				var_0_object->SetMessage(521514); //@t
				var_0_object->ClearReplies(); //@t
				bool var_100_bool;
				func_2669(var_1_object);
				if(var_100_bool != 0)
					var_0_object->AddReply(521515, 22677, 22676); //@t
				var_0_object->AddReply(521518, -1, 22679); //@t
				var_0_object->AddReply(523976, -1, 25264); //@t
				return 0;
			}
			if(var_31_bool == 22677) {
				func_921(var_32_cvector, "Fear");
				var_0_object->SetMessage(521516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523977, 25266, 25265); //@t
				var_0_object->AddReply(523981, 25270, 25269); //@t
				return 0;
			}
			if(var_31_bool == 25270) {
				func_921(var_32_cvector, "Suffering");
				var_0_object->SetMessage(523982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523983, 25266, 25271); //@t
				return 0;
			}
			if(var_31_bool == 25266) {
				func_921(var_32_cvector, "Penetrating");
				var_0_object->SetMessage(523978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523979, 25268, 25267); //@t
				return 0;
			}
			if(var_31_bool == 25268) {
				func_921(var_32_cvector, "Penetrating");
				var_0_object->SetMessage(523980); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523984, 25274, 25273); //@t
				return 0;
			}
			if(var_31_bool == 25274) {
				func_921(var_32_cvector, "Grin");
				var_0_object->SetMessage(523985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523986, 25276, 25275); //@t
				var_0_object->AddReply(523988, 25276, 25277); //@t
				return 0;
			}
			if(var_31_bool == 25276) {
				func_921(var_32_cvector, "Grin");
				var_0_object->SetMessage(523987); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521517, -1, 22678); //@t
				return 0;
			}
			var_3_string = true;
			bool var_165_bool;
			func_2620(var_165_bool);
			if(var_165_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3b0";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2540();
			if(var_32_cvector == 23108) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2663();
			}
			if(var_32_cvector == 23687) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_2663();
			}
			if(var_31_bool == 23104) {
				func_1275(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521930); //@t
				var_0_object->ClearReplies(); //@t
				bool var_65_bool = false;
				bool var_66_bool;
				func_2681(var_1_object);
				if(var_66_bool != 0) {
					bool var_74_bool;
					func_2693(var_1_object);
					if(!var_74_bool) //@nz
						var_65_bool = true;
				}
				if(var_65_bool != 0)
					var_0_object->AddReply(521931, 23673, 23105); //@t
				var_0_object->AddReply(521932, -1, 23106); //@t
				return 0;
			}
			if(var_31_bool == 23673) {
				func_1275(var_32_cvector, "Penetrating");
				var_0_object->SetMessage(522498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522501, 23677, 23676); //@t
				var_0_object->AddReply(522499, 23675, 23674); //@t
				return 0;
			}
			if(var_31_bool == 23675) {
				func_1275(var_32_cvector, "Penetrating");
				var_0_object->SetMessage(522500); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522506, 23679, 23681); //@t
				return 0;
			}
			if(var_31_bool == 23679) {
				func_1275(var_32_cvector, "Penetrating");
				var_0_object->SetMessage(522504); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522505, 23677, 23680); //@t
				return 0;
			}
			if(var_31_bool == 23677) {
				func_1275(var_32_cvector, "Penetrating");
				var_0_object->SetMessage(522502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522503, 23683, 23678); //@t
				var_0_object->AddReply(531516, 32868, 32871); //@t
				return 0;
			}
			if(var_31_bool == 23683) {
				func_1275(var_32_cvector, "Grin");
				var_0_object->SetMessage(522507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522508, 23685, 23684); //@t
				var_0_object->AddReply(531513, 32868, 32867); //@t
				return 0;
			}
			if(var_31_bool == 32868) {
				func_1275(var_32_cvector, "Grin");
				var_0_object->SetMessage(531514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531515, 23685, 32869); //@t
				return 0;
			}
			if(var_31_bool == 23685) {
				func_1275(var_32_cvector, "Grin");
				var_0_object->SetMessage(522509); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521934, -1, 23108); //@t
				var_0_object->AddReply(522511, -1, 23687); //@t
				return 0;
			}
			var_3_string = true;
			bool var_148_bool;
			func_2620(var_148_bool);
			if(var_148_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x512";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2540();
			if(var_31_bool == 36971) {
				func_1660(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_31_bool == 36973) {
				func_1660(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_31_bool == 36975) {
				func_1660(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_2620(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x693";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2540();
			if(var_31_int == 42560) {
				func_1914(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2620(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x791";
	
	}

}


maintask task_12
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		var_31_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1985(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_2050();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2264(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_2019(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_1999(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2547(var_77_object);
					var_77_object = var_76_object;
					func_2414(var_75_bool, var_76_object);
				}
			} else {
				func_2014(var_31_int);
				func_2041();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2232();
		func_2050();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		@StopGroup0();
		func_2050();
		func_2494("Neutral");
		func_2041();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_2041();
		else
			func_2494("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2232();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2255(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_2841(var_49_object);
			func_2494("Neutral");
			func_2050();
			func_2041();
		}
	}

}


void func_0(object var_0_object, int var_52_int, object var_53_object)
{
	var_0_object = var_53_object;
	bool var_63_bool; object var_64_object;
	var_53_object = var_64_object;
	func_2269(var_63_bool, var_64_object, 70.0);
	if(!var_63_bool) { //@nz
		var_52_int = -2;
		return 8;
	}
	object var_59_object;
	@CreateDialog(var_59_object);
	int var_111_int;
	func_2614(var_111_int);
	var_59_object->SetNPCName(var_111_int);
	int var_112_int;
	func_2612(var_112_int);
	var_59_object->SetNPCDescription(var_112_int);
	string var_113_string;
	func_2616(var_113_string);
	var_59_object->SetPhoto(var_113_string);
	string var_114_string;
	func_2618(var_114_string);
	var_59_object->SetPhoto2(var_114_string);
	int var_115_int;
	func_2824(var_115_int);
	var_59_object->SetPlayerName(var_115_int);
	bool var_60_bool;
	@IsOverrideActive(var_60_bool);
	if(var_60_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	@DoDialog(var_59_object);
	bool var_124_bool; object var_125_object;
	object var_126_object;
	func_2547(var_126_object);
	var_126_object = var_125_object;
	func_2356(var_124_bool, var_125_object);
	object var_219_object; object var_220_object;
	var_53_object = var_219_object;
	var_59_object = var_220_object;
	TaskCall(1);
	func_81(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object);
	TaskReturn();
	bool var_62_bool;
	var_59_object->IsDialogEnd(var_62_bool);
	
	for(;;) {
		var_268_bool = !var_62_bool; //@nz
		if(var_268_bool == 0) goto Label_70;
		@sync();
		var_59_object->IsDialogEnd(var_62_bool);
	}
	
Label_70:
	object var_269_object;
	var_53_object = var_269_object;
	func_2338();
	@StopDialog(var_59_object);
	var_59_object->GetReturnValue(-1);
	int var_61_int = var_52_int;
}
EMIT "Stack[-4] = 0";


void func_2050(void)
{
	@KillTimer(10);
}


void func_2563(int var_315_int, string var_316_string)
{
	int var_318_int;
	@GetVariable(var_316_string, var_318_int);
	var_318_int = var_315_int;
}


void func_772(object var_0_object, int var_387_int, object var_388_object)
{
	var_0_object = var_388_object;
	bool var_398_bool; object var_399_object;
	var_388_object = var_399_object;
	func_2269(var_398_bool, var_399_object, 70.0);
	if(!var_398_bool) { //@nz
		var_387_int = -2;
		return 8;
	}
	object var_394_object;
	@CreateDialog(var_394_object);
	int var_402_int;
	func_2614(var_402_int);
	var_394_object->SetNPCName(var_402_int);
	int var_403_int;
	func_2612(var_403_int);
	var_394_object->SetNPCDescription(var_403_int);
	string var_404_string;
	func_2616(var_404_string);
	var_394_object->SetPhoto(var_404_string);
	string var_405_string;
	func_2618(var_405_string);
	var_394_object->SetPhoto2(var_405_string);
	int var_406_int;
	func_2824(var_406_int);
	var_394_object->SetPlayerName(var_406_int);
	bool var_395_bool;
	@IsOverrideActive(var_395_bool);
	if(var_395_bool != 0) {
		var_387_int = -2;
		return 8;
	}
	@DoDialog(var_394_object);
	bool var_408_bool; object var_409_object;
	object var_410_object;
	func_2547(var_410_object);
	var_410_object = var_409_object;
	func_2356(var_408_bool, var_409_object);
	object var_411_object; object var_412_object;
	var_388_object = var_411_object;
	var_394_object = var_412_object;
	TaskCall(5);
	func_853(var_413_object, var_414_object, var_415_string, var_416_bool, var_411_object, var_412_object);
	TaskReturn();
	bool var_397_bool;
	var_394_object->IsDialogEnd(var_397_bool);
	
	for(;;) {
		var_450_bool = !var_397_bool; //@nz
		if(var_450_bool == 0) goto Label_842;
		@sync();
		var_394_object->IsDialogEnd(var_397_bool);
	}
	
Label_842:
	object var_451_object;
	var_388_object = var_451_object;
	func_2338();
	@StopDialog(var_394_object);
	var_394_object->GetReturnValue(-1);
	int var_396_int = var_387_int;
}
EMIT "Stack[-4] = 0";


void func_2824(int var_115_int)
{
	int var_117_int;
	@GetVariable("branch", var_117_int);
	if(var_117_int == 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xb17";
	}
	if(var_117_int == 1) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
}


void func_2568(float var_54_float)
{
	float var_56_float;
	@GetGameTime(var_56_float);
	var_56_float = var_54_float;
}


void func_2573(int var_179_int)
{
	float var_181_float;
	@GetGameTime(var_181_float);
	var_179_int = 1 + (var_181_float / 24);
}


// @pe
void func_2582(bool var_278_bool, int var_279_int)
{
	int var_280_int;
	func_2573(var_280_int);
	var_278_bool = var_280_int == var_279_int;
}


// @pe
void func_2841(object var_49_object)
{
	var_50_bool = GlobalVars[1];
	if(!var_50_bool) { //@nz
		int var_52_int; object var_53_object;
		var_49_object = var_53_object;
		TaskCall(0);
		func_0(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_277_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_278_bool;
	func_2582(var_278_bool, 2);
	if(var_278_bool != 0) {
		int var_281_int; object var_282_object;
		var_49_object = var_282_object;
		TaskCall(2);
		func_203(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 0;
	}
	bool var_385_bool;
	func_2582(var_385_bool, 8);
	if(var_385_bool != 0) {
		int var_387_int; object var_388_object;
		var_49_object = var_388_object;
		TaskCall(4);
		func_772(var_389_object, var_387_int, var_388_object);
		TaskReturn();
		return 0;
	}
	bool var_452_bool;
	func_2582(var_452_bool, 10);
	if(var_452_bool != 0) {
		int var_454_int; object var_455_object;
		var_49_object = var_455_object;
		TaskCall(6);
		func_1121(var_456_object, var_454_int, var_455_object);
		TaskReturn();
		return 0;
	}
	bool var_524_bool = false;
	bool var_525_bool;
	func_2582(var_525_bool, 12);
	if(var_525_bool != 0) {
		var_527_bool = GlobalVars[2];
		if(!var_527_bool) //@nz
			var_524_bool = true;
	}
	if(var_524_bool != 0) {
		int var_529_int; object var_530_object;
		var_49_object = var_530_object;
		TaskCall(8);
		func_1516(var_531_object, var_529_int, var_530_object);
		TaskReturn();
		var_588_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_589_int; object var_590_object;
	var_49_object = var_590_object;
	TaskCall(10);
	func_1775(var_591_object, var_589_int, var_590_object);
	TaskReturn();
}


void func_2588(string var_56_string, int var_57_int)
{
	string var_59_string = "idle";
	if(var_57_int != 0)
		var_59_string += var_57_int;
	var_59_string = var_56_string;
}


// @pe
void func_284(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_305_object, object var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_312_bool = false;
		bool var_313_bool;
		func_2705(var_1_object);
		if(!var_313_bool) { //@nz
			bool var_322_bool;
			func_2717(var_1_object);
			if(var_322_bool != 0)
				var_312_bool = true;
		}
		if(var_312_bool != 0) {
			object var_328_object; object var_329_object;
			var_328_object = var_1_object;
			var_329_object = var_0_object;
			func_2622();
			func_412(var_306_object, "Suffering");
			var_0_object->SetMessage(520248); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520249, 21442, 21441); //@t
		} else {
					func_412(var_306_object, "Neutral");
					var_0_object->SetMessage(520268); //@t
					var_0_object->ClearReplies(); //@t
					bool var_354_bool = false;
					bool var_355_bool;
					func_2717(var_1_object);
					if(!var_355_bool) { //@nz
						bool var_358_bool;
						func_2729(var_1_object);
						if(var_358_bool != 0)
							var_354_bool = true;
					}
					if(var_354_bool != 0)
						var_0_object->AddReply(520269, 21462, 21461); //@t
					bool var_367_bool = false;
					bool var_368_bool;
					func_2717(var_1_object);
					if(!var_368_bool) { //@nz
						bool var_371_bool;
						func_2741(var_1_object);
						if(var_371_bool != 0)
							var_367_bool = true;
					}
					if(var_367_bool != 0)
						var_0_object->AddReply(520272, 21465, 21464); //@t
					var_0_object->AddReply(520277, -1, 21469); //@t
		}
	}
	for(;;) {
		bool var_344_bool;
		func_2620(var_344_bool);
		if(var_344_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2494(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_411;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_411:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x120";


void func_2041(void)
{
	float var_648_float;
	@rand(var_648_float, 8, 16);
	@SetTimer(10, var_648_float);
}


void func_2338(void)
{
	bool var_271_bool;
	@CameraSwitchToNormal(true);
	bool var_273_bool;
	func_2620(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		@HasAnimationTrack(var_271_bool, "head");
		if(var_271_bool == 0) goto Label_2355;
		@UnlookAsync("head");
	}
Label_2355:
	
}


void func_2595(int var_50_int)
{
	int var_53_int; bool var_54_bool;
	var_53_int = 0;
	
	for(;;) {
		string var_56_string; int var_57_int;
		var_53_int = var_57_int;
		func_2588(var_56_string, var_57_int);
		@HasAnimation(var_54_bool, "all", var_56_string);
		if(!var_54_bool) //@nz
			break;
		var_53_int += 1;
	}
	var_53_int = var_50_int;
}


void func_2612(int var_112_int)
{
	var_112_int = 515539;
}


void func_2356(bool var_124_bool, object var_125_object)
{
	int var_131_int; int var_132_int;
	@GetVariable("voice_common", var_131_int);
	if(var_131_int != 0) {
		bool var_135_bool; object var_136_object;
		var_125_object = var_136_object;
		func_2414(var_135_bool, var_136_object);
		if(!var_135_bool) { //@nz
			bool var_166_bool; object var_167_object;
			var_125_object = var_167_object;
			func_2451(var_166_bool, var_167_object);
			if(!var_166_bool) { //@nz
				var_124_bool = false;
				return 4;
			}
		}
		@irand(var_132_int, 2);
		if(var_132_int != 0)
			@SetVariable("voice_common", ((var_131_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_211_bool; object var_212_object;
		var_125_object = var_212_object;
		func_2451(var_211_bool, var_212_object);
		if(!var_211_bool) { //@nz
			bool var_214_bool; object var_215_object;
			var_125_object = var_215_object;
			func_2414(var_214_bool, var_215_object);
			if(!var_214_bool) { //@nz
				var_124_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2412;
	
Label_2412:
	var_124_bool = true;
	
}


void func_2614(int var_111_int)
{
	var_111_int = 502864;
}


void func_2616(string var_113_string)
{
	var_113_string = "ui/NPC_Katerina.png";
}


void func_2618(string var_114_string)
{
	var_114_string = "ui/NPC_Katerina_b.png";
}


void func_2620(bool var_106_bool)
{
	var_106_bool = true;
}


// @pe
void func_1597(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_553_object, object var_554_object)
{
	var_0_object = var_554_object;
	var_1_object = var_553_object;
	var_3_string = false;
	if(1 != 0) {
		func_1660(var_554_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_1630;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x641";
	}
Label_1630:
	bool var_578_bool;
	func_2620(var_578_bool);
	if(var_578_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2494(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1659;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1659:
		return 0;

	}
	
}


// @pe
void func_2622(void)
{
	@SetVariable("oob2Katerina1", 1);
}


// @pe
void func_1856(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_613_object, object var_614_object)
{
	var_0_object = var_614_object;
	var_1_object = var_613_object;
	var_3_string = false;
	if(1 != 0) {
		func_1914(var_614_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_1884;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x744";
	}
Label_1884:
	bool var_635_bool;
	func_2620(var_635_bool);
	if(var_635_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2494(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1913;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1913:
		return 0;

	}
	
}


// @pe
void func_2628(void)
{
	@SetVariable("oob2Katerina2", 1);
}


// @pe
void func_2634(void)
{
	@SetVariable("oob2Katerina3", 1);
}


void func_2640(void)
{
	@SetVariable("b8q03", 2);
	object var_43_object;
	func_2807(var_43_object);
	object var_40_object;
	var_43_object = var_40_object;
	float var_54_float;
	func_2568(var_54_float);
	var_40_object->AddMark("b8q03KaterinaGotoMat", "pt_map_mat", 0, 530664, var_54_float);
	func_2753();
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_219_object, object var_220_object)
{
	var_0_object = var_220_object;
	var_1_object = var_219_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_220_object, "Neutral");
		var_0_object->SetMessage(518018); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518019, -1, 19152); //@t
		var_0_object->AddReply(527797, -1, 29130); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_250_bool;
	func_2620(var_250_bool);
	if(var_250_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2494(var_2_object);
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


// @pe
void func_853(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_411_object, object var_412_object)
{
	var_0_object = var_412_object;
	var_3_string = false;
	if(1 != 0) {
		func_921(var_412_object, "Fear");
		var_0_object->SetMessage(521514); //@t
		var_0_object->ClearReplies(); //@t
		bool var_427_bool;
		func_2669(var_411_object);
		if(var_427_bool != 0)
			var_0_object->AddReply(521515, 22677, 22676); //@t
		var_0_object->AddReply(521518, -1, 22679); //@t
		var_0_object->AddReply(523976, -1, 25264); //@t
		goto Label_891;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x359";
	}
Label_891:
	bool var_442_bool;
	func_2620(var_442_bool);
	if(var_442_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2494(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_920;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_920:
		return 0;

	}
	
}


void func_1121(object var_0_object, int var_454_int, object var_455_object)
{
	var_0_object = var_455_object;
	bool var_465_bool; object var_466_object;
	var_455_object = var_466_object;
	func_2269(var_465_bool, var_466_object, 70.0);
	if(!var_465_bool) { //@nz
		var_454_int = -2;
		return 8;
	}
	object var_461_object;
	@CreateDialog(var_461_object);
	int var_469_int;
	func_2614(var_469_int);
	var_461_object->SetNPCName(var_469_int);
	int var_470_int;
	func_2612(var_470_int);
	var_461_object->SetNPCDescription(var_470_int);
	string var_471_string;
	func_2616(var_471_string);
	var_461_object->SetPhoto(var_471_string);
	string var_472_string;
	func_2618(var_472_string);
	var_461_object->SetPhoto2(var_472_string);
	int var_473_int;
	func_2824(var_473_int);
	var_461_object->SetPlayerName(var_473_int);
	bool var_462_bool;
	@IsOverrideActive(var_462_bool);
	if(var_462_bool != 0) {
		var_454_int = -2;
		return 8;
	}
	@DoDialog(var_461_object);
	bool var_475_bool; object var_476_object;
	object var_477_object;
	func_2547(var_477_object);
	var_477_object = var_476_object;
	func_2356(var_475_bool, var_476_object);
	object var_478_object; object var_479_object;
	var_455_object = var_478_object;
	var_461_object = var_479_object;
	TaskCall(7);
	func_1202(var_480_object, var_481_object, var_482_string, var_483_bool, var_478_object, var_479_object);
	TaskReturn();
	bool var_464_bool;
	var_461_object->IsDialogEnd(var_464_bool);
	
	for(;;) {
		var_522_bool = !var_464_bool; //@nz
		if(var_522_bool == 0) goto Label_1191;
		@sync();
		var_461_object->IsDialogEnd(var_464_bool);
	}
	
Label_1191:
	object var_523_object;
	var_455_object = var_523_object;
	func_2338();
	@StopDialog(var_461_object);
	var_461_object->GetReturnValue(-1);
	int var_463_int = var_454_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2663(void)
{
	@SetVariable("b10q01TalkKaterina", 1);
}


// @pe
void func_2669(bool var_427_bool)
{
	int var_429_int;
	func_2563(var_429_int, "b8q03");
	if(var_429_int == 1)
		var_427_bool = true;
	var_427_bool = false;
}


void func_2414(bool var_135_bool, object var_136_object)
{
	string var_142_string; bool var_144_bool; int var_145_int; string var_146_string;
	var_142_string = "c";
	int var_143_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_136_object->HasProperty((var_142_string + (var_143_int + 1)), var_144_bool);
			if(!var_144_bool) { //@nz
			} else {
				var_143_int += 1;
			}
		}
		if(!var_143_int) { //@nz
			var_135_bool = false;
			return 10;
		}
		var_145_int = 0;
		if(var_143_int > 1)
			@irand(var_145_int, var_143_int);
		var_136_object->GetProperty((var_142_string + (var_145_int + 1)), var_146_string);
		bool var_158_bool; string var_159_string;
		var_146_string = var_159_string;
		func_2525(var_158_bool, var_159_string);
		var_158_bool = var_135_bool;
		return 10;

	}
}


void func_2161(void)
{
	bool var_44_bool; int var_45_int; int var_46_int; bool var_47_bool;
	@WaitForAnimEnd();
	bool var_48_bool;
	func_2264(var_48_bool);
	if(!var_48_bool) //@nz
		return 12;
	int var_50_int;
	func_2595(var_50_int);
	int var_42_int;
	var_50_int = var_42_int;
	int var_43_int = 0;
	
	for(;;) {
		bool var_63_bool = false;
		if(var_43_int < 5) {
			bool var_66_bool;
			func_2264(var_66_bool);
			if(var_66_bool != 0)
				var_63_bool = true;
		}
		if(var_63_bool != 0) {
			if(!var_42_int) { //@nz
				@Sleep(3, var_44_bool);
				if(!var_44_bool) { //@nz
				} else {
			} else {
			@irand(var_45_int, var_42_int);
			@irand(var_46_int, 5);
			if(var_46_int != 0)
				var_45_int = 0;
			string var_77_string; int var_78_int;
			var_45_int = var_78_int;
			func_2588(var_77_string, var_78_int);
			@PlayAnimation("all", var_77_string);
			@WaitForAnimEnd(var_47_bool);
			var_79_bool = !var_47_bool; //@nz
			if(var_79_bool == 0) goto Label_2216;
			goto Label_2227;
			}
				Label_2216:
					bool var_70_bool;
					func_2230(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_2222;
			}
		}
	Label_2227:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2222:
		@ResetAAS();
		var_43_int += 1;
	}
	
}


// @pe
void func_2681(bool var_495_bool)
{
	int var_497_int;
	func_2563(var_497_int, "b10q01");
	if(var_497_int == 4)
		var_495_bool = true;
	var_495_bool = false;
}


// @pe
void func_1914(object var_2_object, string var_620_string)
{
	bool var_621_bool;
	func_2620(var_621_bool);
	if(!var_621_bool) //@nz
		return 0;
	if(var_620_string == var_2_object)
		return 0;
	string var_624_string; bool var_625_bool;
	var_620_string = var_624_string;
	if(var_620_string == "")
		var_625_bool = false;
	else
		var_625_bool = true;
	func_2510(var_624_string, var_625_bool);
	var_2_object = var_620_string;
	
}


// @pe
void func_1660(object var_2_object, string var_560_string)
{
	bool var_561_bool;
	func_2620(var_561_bool);
	if(!var_561_bool) //@nz
		return 0;
	if(var_560_string == var_2_object)
		return 0;
	string var_564_string; bool var_565_bool;
	var_560_string = var_564_string;
	if(var_560_string == "")
		var_565_bool = false;
	else
		var_565_bool = true;
	func_2510(var_564_string, var_565_bool);
	var_2_object = var_560_string;
	
}


// @pe
void func_2693(bool var_501_bool)
{
	int var_503_int;
	func_2563(var_503_int, "b10q01TalkKaterina");
	if(var_503_int == 1)
		var_501_bool = true;
	var_501_bool = false;
}


// @pe
void func_139(object var_2_object, string var_226_string)
{
	bool var_227_bool;
	func_2620(var_227_bool);
	if(!var_227_bool) //@nz
		return 0;
	if(var_226_string == var_2_object)
		return 0;
	string var_230_string; bool var_231_bool;
	var_226_string = var_230_string;
	if(var_226_string == "")
		var_231_bool = false;
	else
		var_231_bool = true;
	func_2510(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	
}


// @pe
void func_2705(bool var_313_bool)
{
	int var_315_int;
	func_2563(var_315_int, "b2q01");
	if(var_315_int == 0) {
		var_313_bool = true;
		return 0;
	}
	var_313_bool = false;
}


void func_2451(bool var_166_bool, object var_167_object)
{
	bool var_175_bool; int var_176_int; string var_177_string;
	int var_179_int;
	func_2573(var_179_int);
	string var_173_string = ("d" + var_179_int) + "m";
	int var_174_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_167_object->HasProperty((var_173_string + (var_174_int + 1)), var_175_bool);
			if(!var_175_bool) { //@nz
			} else {
				var_174_int += 1;
			}
		}
		if(!var_174_int) { //@nz
			var_166_bool = false;
			return 10;
		}
		var_176_int = 0;
		if(var_174_int > 1)
			@irand(var_176_int, var_174_int);
		var_167_object->GetProperty((var_173_string + (var_176_int + 1)), var_177_string);
		bool var_198_bool; string var_199_string;
		var_177_string = var_199_string;
		func_2525(var_198_bool, var_199_string);
		var_198_bool = var_166_bool;
		return 10;

	}
}


// @pe
void func_921(object var_2_object, string var_418_string)
{
	bool var_419_bool;
	func_2620(var_419_bool);
	if(!var_419_bool) //@nz
		return 0;
	if(var_418_string == var_2_object)
		return 0;
	string var_422_string; bool var_423_bool;
	var_418_string = var_422_string;
	if(var_418_string == "")
		var_423_bool = false;
	else
		var_423_bool = true;
	func_2510(var_422_string, var_423_bool);
	var_2_object = var_418_string;
	
}


// @pe
void func_412(object var_2_object, string var_332_string)
{
	bool var_333_bool;
	func_2620(var_333_bool);
	if(!var_333_bool) //@nz
		return 0;
	if(var_332_string == var_2_object)
		return 0;
	string var_336_string; bool var_337_bool;
	var_332_string = var_336_string;
	if(var_332_string == "")
		var_337_bool = false;
	else
		var_337_bool = true;
	func_2510(var_336_string, var_337_bool);
	var_2_object = var_332_string;
	
}


// @pe
void func_2717(bool var_322_bool)
{
	int var_324_int;
	func_2563(var_324_int, "oob2Katerina1");
	if(var_324_int == 0) {
		var_322_bool = true;
		return 0;
	}
	var_322_bool = false;
}


// @pe
void func_2729(bool var_358_bool)
{
	int var_360_int;
	func_2563(var_360_int, "oob2Katerina2");
	if(var_360_int == 0) {
		var_358_bool = true;
		return 0;
	}
	var_358_bool = false;
}


// @pe
void func_1202(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_478_object, object var_479_object)
{
	var_0_object = var_479_object;
	var_1_object = var_478_object;
	var_3_string = false;
	if(1 != 0) {
		func_1275(var_479_object, "Neutral");
		var_0_object->SetMessage(521930); //@t
		var_0_object->ClearReplies(); //@t
		bool var_494_bool = false;
		bool var_495_bool;
		func_2681(var_1_object);
		if(var_495_bool != 0) {
			bool var_501_bool;
			func_2693(var_1_object);
			if(!var_501_bool) //@nz
				var_494_bool = true;
		}
		if(var_494_bool != 0)
			var_0_object->AddReply(521931, 23673, 23105); //@t
		var_0_object->AddReply(521932, -1, 23106); //@t
		goto Label_1245;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4b6";
	}
Label_1245:
	bool var_514_bool;
	func_2620(var_514_bool);
	if(var_514_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2494(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1274;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1274:
		return 0;

	}
	
}


// @pe
void func_2741(bool var_371_bool)
{
	int var_373_int;
	func_2563(var_373_int, "oob2Katerina3");
	if(var_373_int == 0) {
		var_371_bool = true;
		return 0;
	}
	var_371_bool = false;
}


void func_2230(bool var_70_bool)
{
	var_70_bool = true;
}


void func_2232(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2237(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


void func_2494(string var_252_string)
{
	bool var_256_bool; float var_257_float; float var_258_float;
	@lshHasAnimation(var_256_bool, var_252_string);
	if(var_256_bool != 0) {
		@lshGetAnimTimes(var_252_string, var_257_float, var_258_float);
		@lshPlayAnimation(var_257_float, var_258_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_252_string);
	}
	
}


void func_1985(object var_0_object)
{
	bool var_32_bool;
	func_2264(var_32_bool);
	if(!var_32_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2161();
	}
}
EMIT "Return(); Pop(0)";


void func_2753(void)
{
	object var_58_object;
	@CreateDiaryEntry(var_58_object, 577, 2, 530657);
	bool var_62_bool; object var_63_object;
	var_58_object = var_63_object;
	func_2779(var_62_bool, var_63_object, 575);
}
EMIT "Stack[-1] = 0";


void func_2245(bool var_39_bool, cvector var_40_cvector)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector = var_40_cvector - var_44_cvector;
	var_47_float = GetByIndex(var_45_cvector, 0);
	var_48_float = GetByIndex(var_45_cvector, 2);
	bool var_46_bool;
	@Rotate(var_47_float, var_48_float, var_46_bool);
	var_46_bool = var_39_bool;
}


void func_203(object var_0_object, int var_281_int, object var_282_object)
{
	var_0_object = var_282_object;
	bool var_292_bool; object var_293_object;
	var_282_object = var_293_object;
	func_2269(var_292_bool, var_293_object, 70.0);
	if(!var_292_bool) { //@nz
		var_281_int = -2;
		return 8;
	}
	object var_288_object;
	@CreateDialog(var_288_object);
	int var_296_int;
	func_2614(var_296_int);
	var_288_object->SetNPCName(var_296_int);
	int var_297_int;
	func_2612(var_297_int);
	var_288_object->SetNPCDescription(var_297_int);
	string var_298_string;
	func_2616(var_298_string);
	var_288_object->SetPhoto(var_298_string);
	string var_299_string;
	func_2618(var_299_string);
	var_288_object->SetPhoto2(var_299_string);
	int var_300_int;
	func_2824(var_300_int);
	var_288_object->SetPlayerName(var_300_int);
	bool var_289_bool;
	@IsOverrideActive(var_289_bool);
	if(var_289_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	@DoDialog(var_288_object);
	bool var_302_bool; object var_303_object;
	object var_304_object;
	func_2547(var_304_object);
	var_304_object = var_303_object;
	func_2356(var_302_bool, var_303_object);
	object var_305_object; object var_306_object;
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(3);
	func_284(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	bool var_291_bool;
	var_288_object->IsDialogEnd(var_291_bool);
	
	for(;;) {
		var_383_bool = !var_291_bool; //@nz
		if(var_383_bool == 0) goto Label_273;
		@sync();
		var_288_object->IsDialogEnd(var_291_bool);
	}
	
Label_273:
	object var_384_object;
	var_282_object = var_384_object;
	func_2338();
	@StopDialog(var_288_object);
	var_288_object->GetReturnValue(-1);
	int var_290_int = var_281_int;
}
EMIT "Stack[-4] = 0";


void func_2510(string var_230_string, bool var_231_bool)
{
	bool var_237_bool; float var_238_float; float var_239_float;
	@lshHasAnimation(var_237_bool, var_230_string);
	if(var_237_bool != 0) {
		@lshGetAnimTimes(var_230_string, var_238_float, var_239_float);
		@lshPlayAnimation(var_238_float, var_239_float, var_231_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_230_string);
	}
	
}


void func_2255(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2245(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


void func_1999(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2255(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


void func_2766(object var_71_object)
{
	object var_73_object;
	@GetDiaryRoot(var_73_object);
	if(!var_73_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_71_object = false;
	}
	var_73_object = var_71_object;
}
EMIT "Stack[-1] = 0";


void func_2264(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


void func_2779(bool var_62_bool, object var_63_object, int var_64_int)
{
	object var_71_object;
	func_2766(var_71_object);
	object var_68_object;
	var_71_object = var_68_object;
	object var_69_object;
	var_68_object->Find(var_64_int, var_69_object);
	if(!var_69_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_64_int);
		var_62_bool = false;
	}
	var_69_object->AddChild(var_63_object);
	@SendWorldWndMessage(7);
	int var_70_int;
	var_63_object->GetCategory(var_70_int);
	@SetDiarySection(var_70_int);
	var_62_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2269(bool var_63_bool, object var_64_object, float var_65_float)
{
	cvector var_76_cvector; bool var_83_bool;
	var_64_object->GetPosition(var_76_cvector);
	float var_75_float;
	var_64_object->GetEyesHeight(var_75_float);
	var_84_float = GetByIndex(var_76_cvector, 1);
	SetByIndex(var_76_cvector, 1) = (var_84_float + var_75_float);
	cvector var_77_cvector;
	@GetPosition(var_77_cvector);
	@GetEyesHeight(var_75_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	SetByIndex(var_77_cvector, 1) = (var_85_float + var_75_float);
	cvector var_78_cvector = var_76_cvector - var_77_cvector;
	var_86_float = GetByIndex(var_78_cvector, 1);
	SetByIndex(var_78_cvector, 1) = (float)0;
	var_88_float = sqrt(var_78_cvector | var_78_cvector);
	var_78_cvector /= var_88_float;
	cvector var_79_cvector = -var_78_cvector;
	cvector var_90_cvector;
	func_2553(var_90_cvector, (var_79_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_80_cvector = ((var_78_cvector * var_65_float) + (var_90_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_82_bool;
	@IsOverrideActive(var_82_bool);
	if(var_82_bool != 0)
		var_63_bool = false;
	@StopWorld();
	@CameraTransit((var_77_cvector + var_80_cvector), var_79_cvector, true);
	var_104_float = GetByIndex(var_80_cvector, 0);
	var_105_float = GetByIndex(var_80_cvector, 2);
	@Rotate(var_104_float, var_105_float);
	bool var_106_bool;
	func_2620(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		@HasAnimationTrack(var_83_bool, "head");
		if(var_83_bool == 0) goto Label_2332;
		@LookAsyncCamera("head");
	}
Label_2332:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_63_bool = true;
	
}


void func_2014(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_2525(bool var_158_bool, string var_159_string)
{
	bool var_161_bool;
	bool var_162_bool;
	func_2620(var_162_bool);
	if(var_162_bool != 0) {
		@lshHasSpeech(var_161_bool, var_159_string);
		if(var_161_bool != 0) {
			@lshPlaySpeech(var_159_string);
			var_158_bool = true;
		}
	}
	var_158_bool = false;
}


void func_2019(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2237(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


void func_2540(void)
{
	bool var_34_bool;
	func_2620(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


void func_1516(object var_0_object, int var_529_int, object var_530_object)
{
	var_0_object = var_530_object;
	bool var_540_bool; object var_541_object;
	var_530_object = var_541_object;
	func_2269(var_540_bool, var_541_object, 70.0);
	if(!var_540_bool) { //@nz
		var_529_int = -2;
		return 8;
	}
	object var_536_object;
	@CreateDialog(var_536_object);
	int var_544_int;
	func_2614(var_544_int);
	var_536_object->SetNPCName(var_544_int);
	int var_545_int;
	func_2612(var_545_int);
	var_536_object->SetNPCDescription(var_545_int);
	string var_546_string;
	func_2616(var_546_string);
	var_536_object->SetPhoto(var_546_string);
	string var_547_string;
	func_2618(var_547_string);
	var_536_object->SetPhoto2(var_547_string);
	int var_548_int;
	func_2824(var_548_int);
	var_536_object->SetPlayerName(var_548_int);
	bool var_537_bool;
	@IsOverrideActive(var_537_bool);
	if(var_537_bool != 0) {
		var_529_int = -2;
		return 8;
	}
	@DoDialog(var_536_object);
	bool var_550_bool; object var_551_object;
	object var_552_object;
	func_2547(var_552_object);
	var_552_object = var_551_object;
	func_2356(var_550_bool, var_551_object);
	object var_553_object; object var_554_object;
	var_530_object = var_553_object;
	var_536_object = var_554_object;
	TaskCall(9);
	func_1597(var_555_object, var_556_object, var_557_string, var_558_bool, var_553_object, var_554_object);
	TaskReturn();
	bool var_539_bool;
	var_536_object->IsDialogEnd(var_539_bool);
	
	for(;;) {
		var_586_bool = !var_539_bool; //@nz
		if(var_586_bool == 0) goto Label_1586;
		@sync();
		var_536_object->IsDialogEnd(var_539_bool);
	}
	
Label_1586:
	object var_587_object;
	var_530_object = var_587_object;
	func_2338();
	@StopDialog(var_536_object);
	var_536_object->GetReturnValue(-1);
	int var_538_int = var_529_int;
}
EMIT "Stack[-4] = 0";


void func_1775(object var_0_object, int var_589_int, object var_590_object)
{
	var_0_object = var_590_object;
	bool var_600_bool; object var_601_object;
	var_590_object = var_601_object;
	func_2269(var_600_bool, var_601_object, 70.0);
	if(!var_600_bool) { //@nz
		var_589_int = -2;
		return 8;
	}
	object var_596_object;
	@CreateDialog(var_596_object);
	int var_604_int;
	func_2614(var_604_int);
	var_596_object->SetNPCName(var_604_int);
	int var_605_int;
	func_2612(var_605_int);
	var_596_object->SetNPCDescription(var_605_int);
	string var_606_string;
	func_2616(var_606_string);
	var_596_object->SetPhoto(var_606_string);
	string var_607_string;
	func_2618(var_607_string);
	var_596_object->SetPhoto2(var_607_string);
	int var_608_int;
	func_2824(var_608_int);
	var_596_object->SetPlayerName(var_608_int);
	bool var_597_bool;
	@IsOverrideActive(var_597_bool);
	if(var_597_bool != 0) {
		var_589_int = -2;
		return 8;
	}
	@DoDialog(var_596_object);
	bool var_610_bool; object var_611_object;
	object var_612_object;
	func_2547(var_612_object);
	var_612_object = var_611_object;
	func_2356(var_610_bool, var_611_object);
	object var_613_object; object var_614_object;
	var_590_object = var_613_object;
	var_596_object = var_614_object;
	TaskCall(11);
	func_1856(var_615_object, var_616_object, var_617_string, var_618_bool, var_613_object, var_614_object);
	TaskReturn();
	bool var_599_bool;
	var_596_object->IsDialogEnd(var_599_bool);
	
	for(;;) {
		var_643_bool = !var_599_bool; //@nz
		if(var_643_bool == 0) goto Label_1845;
		@sync();
		var_596_object->IsDialogEnd(var_599_bool);
	}
	
Label_1845:
	object var_644_object;
	var_590_object = var_644_object;
	func_2338();
	@StopDialog(var_596_object);
	var_596_object->GetReturnValue(-1);
	int var_598_int = var_589_int;
}
EMIT "Stack[-4] = 0";


void func_2547(object var_126_object)
{
	object var_128_object;
	@self(var_128_object);
	var_128_object = var_126_object;
}
EMIT "Stack[-1] = 0";


void func_2807(object var_43_object)
{
	object var_46_object; object var_47_object;
	@GetMainOutdoorScene(var_46_object);
	if(var_46_object == null) {
		@Trace("Can't find main outdoor scene");
		var_47_object = null;
		var_47_object = var_43_object;
	}
	var_46_object->GetMap(var_47_object);
	var_47_object = var_43_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2553(cvector var_90_cvector, cvector var_91_cvector)
{
	float var_94_float = sqrt(var_91_cvector | var_91_cvector);
	if(var_94_float < 0.000001)
		var_90_cvector = [0.0, 0.0, 0.0];
	var_90_cvector = var_91_cvector / var_94_float;
}


// @pe
void func_1275(object var_2_object, string var_485_string)
{
	bool var_486_bool;
	func_2620(var_486_bool);
	if(!var_486_bool) //@nz
		return 0;
	if(var_485_string == var_2_object)
		return 0;
	string var_489_string; bool var_490_bool;
	var_485_string = var_489_string;
	if(var_485_string == "")
		var_490_bool = false;
	else
		var_490_bool = true;
	func_2510(var_489_string, var_490_bool);
	var_2_object = var_485_string;
	
}


