// @GLOBALS: 0:object:,1:bool:,2:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_31_bool == 36971) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_31_bool == 36973) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_31_bool == 36975) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_79_bool;
			func_2619(var_79_bool);
			if(var_79_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_31_bool == 19151) {
				func_411(var_32_cvector, "Neutral");
				var_0_object->SetMessage(518018); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518019, -1, 19152); //@t
				var_0_object->AddReply(527797, -1, 29130); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_2619(var_56_bool);
			if(var_56_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_32_cvector == 21461) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2627();
			}
			if(var_32_cvector == 21464) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_2633();
			}
			if(var_31_bool == 21440) {
				bool var_49_bool = false;
				bool var_50_bool;
				func_2704(var_1_object);
				if(!var_50_bool) { //@nz
					bool var_59_bool;
					func_2716(var_1_object);
					if(var_59_bool != 0)
						var_49_bool = true;
				}
				if(var_49_bool != 0) {
					object var_65_object; object var_66_object;
					var_65_object = var_1_object;
					var_66_object = var_0_object;
					func_2621();
					func_684(var_32_cvector, "Neutral");
					var_0_object->SetMessage(520248); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520249, 21442, 21441); //@t
					return 0;
				}
				func_684(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520268); //@t
				var_0_object->ClearReplies(); //@t
				bool var_87_bool = false;
				bool var_88_bool;
				func_2716(var_1_object);
				if(!var_88_bool) { //@nz
					bool var_91_bool;
					func_2728(var_1_object);
					if(var_91_bool != 0)
						var_87_bool = true;
				}
				if(var_87_bool != 0)
					var_0_object->AddReply(520269, 21462, 21461); //@t
				bool var_100_bool = false;
				bool var_101_bool;
				func_2716(var_1_object);
				if(!var_101_bool) { //@nz
					bool var_104_bool;
					func_2740(var_1_object);
					if(var_104_bool != 0)
						var_100_bool = true;
				}
				if(var_100_bool != 0)
					var_0_object->AddReply(520272, 21465, 21464); //@t
				var_0_object->AddReply(520277, -1, 21469); //@t
				return 0;
			}
			if(var_31_bool == 21465) {
				func_684(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520273); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520274, 21467, 21466); //@t
				return 0;
			}
			if(var_31_bool == 21467) {
				func_684(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520275); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520276, -1, 21468); //@t
				var_0_object->AddReply(527804, -1, 29140); //@t
				return 0;
			}
			if(var_31_bool == 21462) {
				func_684(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520271, -1, 21463); //@t
				return 0;
			}
			if(var_31_bool == 21442) {
				func_684(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520251, 21444, 21443); //@t
				var_0_object->AddReply(520259, 21452, 21451); //@t
				var_0_object->AddReply(520265, 21458, 21457); //@t
				return 0;
			}
			if(var_31_bool == 21458) {
				func_684(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527803, 21452, 29136); //@t
				var_0_object->AddReply(520267, -1, 21459); //@t
				return 0;
			}
			if(var_31_bool == 21452) {
				func_684(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520261, 21454, 21453); //@t
				var_0_object->AddReply(520264, 21454, 21456); //@t
				return 0;
			}
			if(var_31_bool == 21454) {
				func_684(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520262); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520263, -1, 21455); //@t
				return 0;
			}
			if(var_31_bool == 21444) {
				func_684(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520252); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520253, 21446, 21445); //@t
				var_0_object->AddReply(520256, 21449, 21448); //@t
				return 0;
			}
			if(var_31_bool == 21449) {
				func_684(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520257); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520258, -1, 21450); //@t
				return 0;
			}
			if(var_31_bool == 21446) {
				func_684(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520254); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520255, -1, 21447); //@t
				return 0;
			}
			var_3_string = true;
			bool var_204_bool;
			func_2619(var_204_bool);
			if(var_204_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2c3";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_32_cvector == 22678) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2639();
			}
			if(var_31_bool == 22675) {
				func_1193(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521514); //@t
				var_0_object->ClearReplies(); //@t
				bool var_95_bool;
				func_2668(var_1_object);
				if(var_95_bool != 0)
					var_0_object->AddReply(521515, 22677, 22676); //@t
				var_0_object->AddReply(521518, -1, 22679); //@t
				var_0_object->AddReply(523976, -1, 25264); //@t
				return 0;
			}
			if(var_31_bool == 22677) {
				func_1193(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523977, 25266, 25265); //@t
				var_0_object->AddReply(523981, 25270, 25269); //@t
				return 0;
			}
			if(var_31_bool == 25270) {
				func_1193(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523983, 25266, 25271); //@t
				return 0;
			}
			if(var_31_bool == 25266) {
				func_1193(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523979, 25268, 25267); //@t
				return 0;
			}
			if(var_31_bool == 25268) {
				func_1193(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523980); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523984, 25274, 25273); //@t
				return 0;
			}
			if(var_31_bool == 25274) {
				func_1193(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523986, 25276, 25275); //@t
				var_0_object->AddReply(523988, 25276, 25277); //@t
				return 0;
			}
			if(var_31_bool == 25276) {
				func_1193(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523987); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521517, -1, 22678); //@t
				return 0;
			}
			var_3_string = true;
			bool var_160_bool;
			func_2619(var_160_bool);
			if(var_160_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4c0";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_32_cvector == 23108) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2662();
			}
			if(var_32_cvector == 23687) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_2662();
			}
			if(var_31_bool == 23104) {
				func_1547(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521930); //@t
				var_0_object->ClearReplies(); //@t
				bool var_60_bool = false;
				bool var_61_bool;
				func_2680(var_1_object);
				if(var_61_bool != 0) {
					bool var_69_bool;
					func_2692(var_1_object);
					if(!var_69_bool) //@nz
						var_60_bool = true;
				}
				if(var_60_bool != 0)
					var_0_object->AddReply(521931, 23673, 23105); //@t
				var_0_object->AddReply(521932, -1, 23106); //@t
				return 0;
			}
			if(var_31_bool == 23673) {
				func_1547(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522501, 23677, 23676); //@t
				var_0_object->AddReply(522499, 23675, 23674); //@t
				return 0;
			}
			if(var_31_bool == 23675) {
				func_1547(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522500); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522506, 23679, 23681); //@t
				return 0;
			}
			if(var_31_bool == 23679) {
				func_1547(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522504); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522505, 23677, 23680); //@t
				return 0;
			}
			if(var_31_bool == 23677) {
				func_1547(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522503, 23683, 23678); //@t
				var_0_object->AddReply(531516, 32868, 32871); //@t
				return 0;
			}
			if(var_31_bool == 23683) {
				func_1547(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522508, 23685, 23684); //@t
				var_0_object->AddReply(531513, 32868, 32867); //@t
				return 0;
			}
			if(var_31_bool == 32868) {
				func_1547(var_32_cvector, "Neutral");
				var_0_object->SetMessage(531514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531515, 23685, 32869); //@t
				return 0;
			}
			if(var_31_bool == 23685) {
				func_1547(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522509); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521934, -1, 23108); //@t
				var_0_object->AddReply(522511, -1, 23687); //@t
				return 0;
			}
			var_3_string = true;
			bool var_143_bool;
			func_2619(var_143_bool);
			if(var_143_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x622";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_31_int == 42560) {
				func_1927(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_2619(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x79e";
	
	}

}


maintask task_13
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		var_31_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1998(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_2069();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2283(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_2038(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_2018(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2546(var_77_object);
					var_77_object = var_76_object;
					func_2431(var_75_bool, var_76_object);
				}
			} else {
				func_2033(var_31_int);
				func_2060();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2251();
		func_2069();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
		{
		@StopGroup0();
		func_2069();
		func_2511("Neutral");
		func_2060();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_2060();
		else
			func_2511("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2251();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2274(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_2840(var_49_object);
			func_2511("Neutral");
			func_2069();
			func_2060();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_36_bool;
	func_2283(var_36_bool);
	if(!var_36_bool) goto Label_0; //@nz
}


void func_2562(int var_303_int, string var_304_string)
{
	int var_306_int;
	@GetVariable(var_304_string, var_306_int);
	var_306_int = var_303_int;
}


void func_2823(int var_209_int)
{
	int var_211_int;
	@GetVariable("branch", var_211_int);
	if(var_211_int == 0) {
		var_209_int = 1;
		return 2;
	EMIT "GOTO 0xb16";
	}
	if(var_211_int == 1) {
		var_209_int = 2;
		return 2;
	}
	var_209_int = 3;
}


void func_2567(float var_54_float)
{
	float var_56_float;
	@GetGameTime(var_56_float);
	var_56_float = var_54_float;
}


// @pe
void func_1547(object var_2_object, string var_473_string)
{
	bool var_474_bool;
	func_2619(var_474_bool);
	if(!var_474_bool) //@nz
		return 0;
	if(var_473_string == var_2_object)
		return 0;
	string var_477_string; bool var_478_bool;
	var_473_string = var_477_string;
	if(var_473_string == "")
		var_478_bool = false;
	else
		var_478_bool = true;
	func_2518(var_477_string, var_478_bool);
	var_2_object = var_473_string;
	
}


void func_2060(void)
{
	float var_46_float;
	@rand(var_46_float, 8, 16);
	@SetTimer(10, var_46_float);
}


void func_2572(int var_118_int)
{
	float var_120_float;
	@GetGameTime(var_120_float);
	var_118_int = 1 + (var_120_float / 24);
}


void func_13(object var_0_object, int var_517_int, object var_518_object)
{
	var_0_object = var_518_object;
	bool var_528_bool; object var_529_object;
	object var_530_object;
	func_2546(var_530_object);
	var_530_object = var_529_object;
	func_2373(var_528_bool, var_529_object);
	bool var_531_bool; object var_532_object;
	var_518_object = var_532_object;
	func_2288(var_531_bool, var_532_object, 70.0);
	if(!var_531_bool) { //@nz
		var_517_int = -2;
		return 8;
	}
	object var_524_object;
	@CreateDialog(var_524_object);
	int var_535_int;
	func_2613(var_535_int);
	var_524_object->SetNPCName(var_535_int);
	int var_536_int;
	func_2611(var_536_int);
	var_524_object->SetNPCDescription(var_536_int);
	string var_537_string;
	func_2615(var_537_string);
	var_524_object->SetPhoto(var_537_string);
	string var_538_string;
	func_2617(var_538_string);
	var_524_object->SetPhoto2(var_538_string);
	int var_539_int;
	func_2823(var_539_int);
	var_524_object->SetPlayerName(var_539_int);
	bool var_525_bool;
	@IsOverrideActive(var_525_bool);
	if(var_525_bool != 0) {
		var_517_int = -2;
		return 8;
	}
	@DoDialog(var_524_object);
	object var_541_object; object var_542_object;
	var_518_object = var_541_object;
	var_524_object = var_542_object;
	TaskCall(2);
	func_94(var_543_object, var_544_object, var_545_string, var_546_bool, var_541_object, var_542_object);
	TaskReturn();
	bool var_527_bool;
	var_524_object->IsDialogEnd(var_527_bool);
	
	for(;;) {
		var_574_bool = !var_527_bool; //@nz
		if(var_574_bool == 0) goto Label_83;
		@sync();
		var_524_object->IsDialogEnd(var_527_bool);
	}
	
Label_83:
	object var_575_object;
	var_518_object = var_575_object;
	func_2356();
	@StopDialog(var_524_object);
	var_524_object->GetReturnValue(-1);
	int var_526_int = var_517_int;
}
EMIT "Stack[-4] = 0";


void func_272(object var_0_object, int var_52_int, object var_53_object)
{
	var_0_object = var_53_object;
	bool var_63_bool; object var_64_object;
	object var_65_object;
	func_2546(var_65_object);
	var_65_object = var_64_object;
	func_2373(var_63_bool, var_64_object);
	bool var_158_bool; object var_159_object;
	var_53_object = var_159_object;
	func_2288(var_158_bool, var_159_object, 70.0);
	if(!var_158_bool) { //@nz
		var_52_int = -2;
		return 8;
	}
	object var_59_object;
	@CreateDialog(var_59_object);
	int var_205_int;
	func_2613(var_205_int);
	var_59_object->SetNPCName(var_205_int);
	int var_206_int;
	func_2611(var_206_int);
	var_59_object->SetNPCDescription(var_206_int);
	string var_207_string;
	func_2615(var_207_string);
	var_59_object->SetPhoto(var_207_string);
	string var_208_string;
	func_2617(var_208_string);
	var_59_object->SetPhoto2(var_208_string);
	int var_209_int;
	func_2823(var_209_int);
	var_59_object->SetPlayerName(var_209_int);
	bool var_60_bool;
	@IsOverrideActive(var_60_bool);
	if(var_60_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	@DoDialog(var_59_object);
	object var_218_object; object var_219_object;
	var_53_object = var_218_object;
	var_59_object = var_219_object;
	TaskCall(4);
	func_353(var_220_object, var_221_object, var_222_string, var_223_bool, var_218_object, var_219_object);
	TaskReturn();
	bool var_62_bool;
	var_59_object->IsDialogEnd(var_62_bool);
	
	for(;;) {
		var_257_bool = !var_62_bool; //@nz
		if(var_257_bool == 0) goto Label_342;
		@sync();
		var_59_object->IsDialogEnd(var_62_bool);
	}
	
Label_342:
	object var_258_object;
	var_53_object = var_258_object;
	func_2356();
	@StopDialog(var_59_object);
	var_59_object->GetReturnValue(-1);
	int var_61_int = var_52_int;
}
EMIT "Stack[-4] = 0";


void func_1044(object var_0_object, int var_375_int, object var_376_object)
{
	var_0_object = var_376_object;
	bool var_386_bool; object var_387_object;
	object var_388_object;
	func_2546(var_388_object);
	var_388_object = var_387_object;
	func_2373(var_386_bool, var_387_object);
	bool var_389_bool; object var_390_object;
	var_376_object = var_390_object;
	func_2288(var_389_bool, var_390_object, 70.0);
	if(!var_389_bool) { //@nz
		var_375_int = -2;
		return 8;
	}
	object var_382_object;
	@CreateDialog(var_382_object);
	int var_393_int;
	func_2613(var_393_int);
	var_382_object->SetNPCName(var_393_int);
	int var_394_int;
	func_2611(var_394_int);
	var_382_object->SetNPCDescription(var_394_int);
	string var_395_string;
	func_2615(var_395_string);
	var_382_object->SetPhoto(var_395_string);
	string var_396_string;
	func_2617(var_396_string);
	var_382_object->SetPhoto2(var_396_string);
	int var_397_int;
	func_2823(var_397_int);
	var_382_object->SetPlayerName(var_397_int);
	bool var_383_bool;
	@IsOverrideActive(var_383_bool);
	if(var_383_bool != 0) {
		var_375_int = -2;
		return 8;
	}
	@DoDialog(var_382_object);
	object var_399_object; object var_400_object;
	var_376_object = var_399_object;
	var_382_object = var_400_object;
	TaskCall(8);
	func_1125(var_401_object, var_402_object, var_403_string, var_404_bool, var_399_object, var_400_object);
	TaskReturn();
	bool var_385_bool;
	var_382_object->IsDialogEnd(var_385_bool);
	
	for(;;) {
		var_438_bool = !var_385_bool; //@nz
		if(var_438_bool == 0) goto Label_1114;
		@sync();
		var_382_object->IsDialogEnd(var_385_bool);
	}
	
Label_1114:
	object var_439_object;
	var_376_object = var_439_object;
	func_2356();
	@StopDialog(var_382_object);
	var_382_object->GetReturnValue(-1);
	int var_384_int = var_375_int;
}
EMIT "Stack[-4] = 0";


void func_2069(void)
{
	@KillTimer(10);
}


// @pe
void func_2581(bool var_266_bool, int var_267_int)
{
	int var_268_int;
	func_2572(var_268_int);
	var_266_bool = var_268_int == var_267_int;
}


// @pe
void func_2840(object var_49_object)
{
	var_50_bool = GlobalVars[1];
	if(!var_50_bool) { //@nz
		int var_52_int; object var_53_object;
		var_49_object = var_53_object;
		TaskCall(3);
		func_272(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_265_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_266_bool;
	func_2581(var_266_bool, 2);
	if(var_266_bool != 0) {
		int var_269_int; object var_270_object;
		var_49_object = var_270_object;
		TaskCall(5);
		func_475(var_271_object, var_269_int, var_270_object);
		TaskReturn();
		return 0;
	}
	bool var_373_bool;
	func_2581(var_373_bool, 8);
	if(var_373_bool != 0) {
		int var_375_int; object var_376_object;
		var_49_object = var_376_object;
		TaskCall(7);
		func_1044(var_377_object, var_375_int, var_376_object);
		TaskReturn();
		return 0;
	}
	bool var_440_bool;
	func_2581(var_440_bool, 10);
	if(var_440_bool != 0) {
		int var_442_int; object var_443_object;
		var_49_object = var_443_object;
		TaskCall(9);
		func_1393(var_444_object, var_442_int, var_443_object);
		TaskReturn();
		return 0;
	}
	bool var_512_bool = false;
	bool var_513_bool;
	func_2581(var_513_bool, 12);
	if(var_513_bool != 0) {
		var_515_bool = GlobalVars[2];
		if(!var_515_bool) //@nz
			var_512_bool = true;
	}
	if(var_512_bool != 0) {
		int var_517_int; object var_518_object;
		var_49_object = var_518_object;
		TaskCall(1);
		func_13(var_519_object, var_517_int, var_518_object);
		TaskReturn();
		var_576_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_577_int; object var_578_object;
	var_49_object = var_578_object;
	TaskCall(11);
	func_1788(var_579_object, var_577_int, var_578_object);
	TaskReturn();
}


void func_2587(string var_70_string, int var_71_int)
{
	string var_73_string = "idle";
	if(var_71_int != 0)
		var_73_string += var_71_int;
	var_73_string = var_70_string;
}


void func_2594(int var_64_int)
{
	int var_67_int; bool var_68_bool;
	var_67_int = 0;
	
	for(;;) {
		string var_70_string; int var_71_int;
		var_67_int = var_71_int;
		func_2587(var_70_string, var_71_int);
		@HasAnimation(var_68_bool, "all", var_70_string);
		if(!var_68_bool) //@nz
			break;
		var_67_int += 1;
	}
	var_67_int = var_64_int;
}


// @pe
void func_556(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_293_object, object var_294_object)
{
	var_0_object = var_294_object;
	var_1_object = var_293_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_300_bool = false;
		bool var_301_bool;
		func_2704(var_1_object);
		if(!var_301_bool) { //@nz
			bool var_310_bool;
			func_2716(var_1_object);
			if(var_310_bool != 0)
				var_300_bool = true;
		}
		if(var_300_bool != 0) {
			object var_316_object; object var_317_object;
			var_316_object = var_1_object;
			var_317_object = var_0_object;
			func_2621();
			func_684(var_294_object, "Neutral");
			var_0_object->SetMessage(520248); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520249, 21442, 21441); //@t
		} else {
					func_684(var_294_object, "Neutral");
					var_0_object->SetMessage(520268); //@t
					var_0_object->ClearReplies(); //@t
					bool var_342_bool = false;
					bool var_343_bool;
					func_2716(var_1_object);
					if(!var_343_bool) { //@nz
						bool var_346_bool;
						func_2728(var_1_object);
						if(var_346_bool != 0)
							var_342_bool = true;
					}
					if(var_342_bool != 0)
						var_0_object->AddReply(520269, 21462, 21461); //@t
					bool var_355_bool = false;
					bool var_356_bool;
					func_2716(var_1_object);
					if(!var_356_bool) { //@nz
						bool var_359_bool;
						func_2740(var_1_object);
						if(var_359_bool != 0)
							var_355_bool = true;
					}
					if(var_355_bool != 0)
						var_0_object->AddReply(520272, 21465, 21464); //@t
					var_0_object->AddReply(520277, -1, 21469); //@t
		}
	}
	for(;;) {
		bool var_332_bool;
		func_2619(var_332_bool);
		if(var_332_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2511(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_683;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_683:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x230";


void func_2611(int var_206_int)
{
	var_206_int = 515539;
}


void func_2356(void)
{
	bool var_260_bool;
	@CameraSwitchToNormal();
	bool var_261_bool;
	func_2619(var_261_bool);
	if(var_261_bool != 0) {
	} else {
		@HasAnimationTrack(var_260_bool, "head");
		if(var_260_bool == 0) goto Label_2372;
		@UnlookAsync("head");
	}
Label_2372:
	
}


void func_2613(int var_205_int)
{
	var_205_int = 502864;
}


void func_2615(string var_207_string)
{
	var_207_string = "ui/NPC_Katerina.png";
}


void func_2617(string var_208_string)
{
	var_208_string = "ui/NPC_Katerina_b.png";
}


void func_2619(bool var_101_bool)
{
	var_101_bool = true;
}


// @pe
void func_2621(void)
{
	@SetVariable("oob2Katerina1", 1);
}


// @pe
void func_2627(void)
{
	@SetVariable("oob2Katerina2", 1);
}


void func_2373(bool var_63_bool, object var_64_object)
{
	int var_70_int; int var_71_int;
	@GetVariable("voice_common", var_70_int);
	if(var_70_int != 0) {
		bool var_74_bool; object var_75_object;
		var_64_object = var_75_object;
		func_2431(var_74_bool, var_75_object);
		if(!var_74_bool) { //@nz
			bool var_105_bool; object var_106_object;
			var_64_object = var_106_object;
			func_2468(var_105_bool, var_106_object);
			if(!var_105_bool) { //@nz
				var_63_bool = false;
				return 4;
			}
		}
		@irand(var_71_int, 2);
		if(var_71_int != 0)
			@SetVariable("voice_common", ((var_70_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_150_bool; object var_151_object;
		var_64_object = var_151_object;
		func_2468(var_150_bool, var_151_object);
		if(!var_150_bool) { //@nz
			bool var_153_bool; object var_154_object;
			var_64_object = var_154_object;
			func_2431(var_153_bool, var_154_object);
			if(!var_153_bool) { //@nz
				var_63_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2429;
	
Label_2429:
	var_63_bool = true;
	
}


// @pe
void func_2633(void)
{
	@SetVariable("oob2Katerina3", 1);
}


// @pe
void func_1869(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_601_object, object var_602_object)
{
	var_0_object = var_602_object;
	var_1_object = var_601_object;
	var_3_string = false;
	if(1 != 0) {
		func_1927(var_602_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_1897;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x751";
	}
Label_1897:
	bool var_623_bool;
	func_2619(var_623_bool);
	if(var_623_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2511(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1926;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1926:
		return 0;

	}
	
}


void func_2639(void)
{
	@SetVariable("b8q03", 2);
	object var_43_object;
	func_2806(var_43_object);
	object var_40_object;
	var_43_object = var_40_object;
	float var_54_float;
	func_2567(var_54_float);
	var_40_object->AddMark("b8q03KaterinaGotoMat", "pt_map_mat", 0, 530664, var_54_float);
	func_2752();
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_541_object, object var_542_object)
{
	var_0_object = var_542_object;
	var_1_object = var_541_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_542_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_566_bool;
	func_2619(var_566_bool);
	if(var_566_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2511(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_156;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_156:
		return 0;

	}
	
}


// @pe
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_218_object, object var_219_object)
{
	var_0_object = var_219_object;
	var_1_object = var_218_object;
	var_3_string = false;
	if(1 != 0) {
		func_411(var_219_object, "Neutral");
		var_0_object->SetMessage(518018); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518019, -1, 19152); //@t
		var_0_object->AddReply(527797, -1, 29130); //@t
		goto Label_381;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x165";
	}
Label_381:
	bool var_244_bool;
	func_2619(var_244_bool);
	if(var_244_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2511(var_2_object);
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


// @pe
void func_1125(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_399_object, object var_400_object)
{
	var_0_object = var_400_object;
	var_3_string = false;
	if(1 != 0) {
		func_1193(var_400_object, "Neutral");
		var_0_object->SetMessage(521514); //@t
		var_0_object->ClearReplies(); //@t
		bool var_415_bool;
		func_2668(var_399_object);
		if(var_415_bool != 0)
			var_0_object->AddReply(521515, 22677, 22676); //@t
		var_0_object->AddReply(521518, -1, 22679); //@t
		var_0_object->AddReply(523976, -1, 25264); //@t
		goto Label_1163;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x469";
	}
Label_1163:
	bool var_430_bool;
	func_2619(var_430_bool);
	if(var_430_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2511(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1192;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1192:
		return 0;

	}
	
}


// @pe
void func_2662(void)
{
	@SetVariable("b10q01TalkKaterina", 1);
}


// @pe
void func_2668(bool var_415_bool)
{
	int var_417_int;
	func_2562(var_417_int, "b8q03");
	if(var_417_int == 1)
		var_415_bool = true;
	var_415_bool = false;
}


void func_1393(object var_0_object, int var_442_int, object var_443_object)
{
	var_0_object = var_443_object;
	bool var_453_bool; object var_454_object;
	object var_455_object;
	func_2546(var_455_object);
	var_455_object = var_454_object;
	func_2373(var_453_bool, var_454_object);
	bool var_456_bool; object var_457_object;
	var_443_object = var_457_object;
	func_2288(var_456_bool, var_457_object, 70.0);
	if(!var_456_bool) { //@nz
		var_442_int = -2;
		return 8;
	}
	object var_449_object;
	@CreateDialog(var_449_object);
	int var_460_int;
	func_2613(var_460_int);
	var_449_object->SetNPCName(var_460_int);
	int var_461_int;
	func_2611(var_461_int);
	var_449_object->SetNPCDescription(var_461_int);
	string var_462_string;
	func_2615(var_462_string);
	var_449_object->SetPhoto(var_462_string);
	string var_463_string;
	func_2617(var_463_string);
	var_449_object->SetPhoto2(var_463_string);
	int var_464_int;
	func_2823(var_464_int);
	var_449_object->SetPlayerName(var_464_int);
	bool var_450_bool;
	@IsOverrideActive(var_450_bool);
	if(var_450_bool != 0) {
		var_442_int = -2;
		return 8;
	}
	@DoDialog(var_449_object);
	object var_466_object; object var_467_object;
	var_443_object = var_466_object;
	var_449_object = var_467_object;
	TaskCall(10);
	func_1474(var_468_object, var_469_object, var_470_string, var_471_bool, var_466_object, var_467_object);
	TaskReturn();
	bool var_452_bool;
	var_449_object->IsDialogEnd(var_452_bool);
	
	for(;;) {
		var_510_bool = !var_452_bool; //@nz
		if(var_510_bool == 0) goto Label_1463;
		@sync();
		var_449_object->IsDialogEnd(var_452_bool);
	}
	
Label_1463:
	object var_511_object;
	var_443_object = var_511_object;
	func_2356();
	@StopDialog(var_449_object);
	var_449_object->GetReturnValue(-1);
	int var_451_int = var_442_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2680(bool var_483_bool)
{
	int var_485_int;
	func_2562(var_485_int, "b10q01");
	if(var_485_int == 4)
		var_483_bool = true;
	var_483_bool = false;
}


void func_2431(bool var_74_bool, object var_75_object)
{
	string var_81_string; bool var_83_bool; int var_84_int; string var_85_string;
	var_81_string = "c";
	int var_82_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_75_object->HasProperty((var_81_string + (var_82_int + 1)), var_83_bool);
			if(!var_83_bool) { //@nz
			} else {
				var_82_int += 1;
			}
		}
		if(!var_82_int) { //@nz
			var_74_bool = false;
			return 10;
		}
		var_84_int = 0;
		if(var_82_int > 1)
			@irand(var_84_int, var_82_int);
		var_75_object->GetProperty((var_81_string + (var_84_int + 1)), var_85_string);
		bool var_97_bool; string var_98_string;
		var_85_string = var_98_string;
		func_2524(var_97_bool, var_98_string);
		var_97_bool = var_74_bool;
		return 10;

	}
}


void func_2180(void)
{
	bool var_58_bool; int var_59_int; int var_60_int; bool var_61_bool;
	@WaitForAnimEnd();
	bool var_62_bool;
	func_2283(var_62_bool);
	if(!var_62_bool) //@nz
		return 12;
	int var_64_int;
	func_2594(var_64_int);
	int var_56_int;
	var_64_int = var_56_int;
	int var_57_int = 0;
	
	for(;;) {
		bool var_77_bool = false;
		if(var_57_int < 5) {
			bool var_80_bool;
			func_2283(var_80_bool);
			if(var_80_bool != 0)
				var_77_bool = true;
		}
		if(var_77_bool != 0) {
			if(!var_56_int) { //@nz
				@Sleep(3, var_58_bool);
				if(!var_58_bool) { //@nz
				} else {
			} else {
			@irand(var_59_int, var_56_int);
			@irand(var_60_int, 5);
			if(var_60_int != 0)
				var_59_int = 0;
			string var_91_string; int var_92_int;
			var_59_int = var_92_int;
			func_2587(var_91_string, var_92_int);
			@PlayAnimation("all", var_91_string);
			@WaitForAnimEnd(var_61_bool);
			var_93_bool = !var_61_bool; //@nz
			if(var_93_bool == 0) goto Label_2235;
			goto Label_2246;
			}
				Label_2235:
					bool var_84_bool;
					func_2249(var_84_bool);
					var_85_bool = !var_84_bool; //@nz
					if(var_85_bool == 0) goto Label_2241;
			}
		}
	Label_2246:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2241:
		@ResetAAS();
		var_57_int += 1;
	}
	
}


// @pe
void func_2692(bool var_489_bool)
{
	int var_491_int;
	func_2562(var_491_int, "b10q01TalkKaterina");
	if(var_491_int == 1)
		var_489_bool = true;
	var_489_bool = false;
}


// @pe
void func_1927(object var_2_object, string var_608_string)
{
	bool var_609_bool;
	func_2619(var_609_bool);
	if(!var_609_bool) //@nz
		return 0;
	if(var_608_string == var_2_object)
		return 0;
	string var_612_string; bool var_613_bool;
	var_608_string = var_612_string;
	if(var_608_string == "")
		var_613_bool = false;
	else
		var_613_bool = true;
	func_2518(var_612_string, var_613_bool);
	var_2_object = var_608_string;
	
}


// @pe
void func_2704(bool var_301_bool)
{
	int var_303_int;
	func_2562(var_303_int, "b2q01");
	if(var_303_int == 0) {
		var_301_bool = true;
		return 0;
	}
	var_301_bool = false;
}


// @pe
void func_411(object var_2_object, string var_225_string)
{
	bool var_226_bool;
	func_2619(var_226_bool);
	if(!var_226_bool) //@nz
		return 0;
	if(var_225_string == var_2_object)
		return 0;
	string var_229_string; bool var_230_bool;
	var_225_string = var_229_string;
	if(var_225_string == "")
		var_230_bool = false;
	else
		var_230_bool = true;
	func_2518(var_229_string, var_230_bool);
	var_2_object = var_225_string;
	
}


// @pe
void func_2716(bool var_310_bool)
{
	int var_312_int;
	func_2562(var_312_int, "oob2Katerina1");
	if(var_312_int == 0) {
		var_310_bool = true;
		return 0;
	}
	var_310_bool = false;
}


// @pe
void func_157(object var_2_object, string var_548_string)
{
	bool var_549_bool;
	func_2619(var_549_bool);
	if(!var_549_bool) //@nz
		return 0;
	if(var_548_string == var_2_object)
		return 0;
	string var_552_string; bool var_553_bool;
	var_548_string = var_552_string;
	if(var_548_string == "")
		var_553_bool = false;
	else
		var_553_bool = true;
	func_2518(var_552_string, var_553_bool);
	var_2_object = var_548_string;
	
}


void func_2468(bool var_105_bool, object var_106_object)
{
	bool var_114_bool; int var_115_int; string var_116_string;
	int var_118_int;
	func_2572(var_118_int);
	string var_112_string = ("d" + var_118_int) + "m";
	int var_113_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_106_object->HasProperty((var_112_string + (var_113_int + 1)), var_114_bool);
			if(!var_114_bool) { //@nz
			} else {
				var_113_int += 1;
			}
		}
		if(!var_113_int) { //@nz
			var_105_bool = false;
			return 10;
		}
		var_115_int = 0;
		if(var_113_int > 1)
			@irand(var_115_int, var_113_int);
		var_106_object->GetProperty((var_112_string + (var_115_int + 1)), var_116_string);
		bool var_137_bool; string var_138_string;
		var_116_string = var_138_string;
		func_2524(var_137_bool, var_138_string);
		var_137_bool = var_105_bool;
		return 10;

	}
}


// @pe
void func_2728(bool var_346_bool)
{
	int var_348_int;
	func_2562(var_348_int, "oob2Katerina2");
	if(var_348_int == 0) {
		var_346_bool = true;
		return 0;
	}
	var_346_bool = false;
}


// @pe
void func_1193(object var_2_object, string var_406_string)
{
	bool var_407_bool;
	func_2619(var_407_bool);
	if(!var_407_bool) //@nz
		return 0;
	if(var_406_string == var_2_object)
		return 0;
	string var_410_string; bool var_411_bool;
	var_406_string = var_410_string;
	if(var_406_string == "")
		var_411_bool = false;
	else
		var_411_bool = true;
	func_2518(var_410_string, var_411_bool);
	var_2_object = var_406_string;
	
}


// @pe
void func_684(object var_2_object, string var_320_string)
{
	bool var_321_bool;
	func_2619(var_321_bool);
	if(!var_321_bool) //@nz
		return 0;
	if(var_320_string == var_2_object)
		return 0;
	string var_324_string; bool var_325_bool;
	var_320_string = var_324_string;
	if(var_320_string == "")
		var_325_bool = false;
	else
		var_325_bool = true;
	func_2518(var_324_string, var_325_bool);
	var_2_object = var_320_string;
	
}


// @pe
void func_2740(bool var_359_bool)
{
	int var_361_int;
	func_2562(var_361_int, "oob2Katerina3");
	if(var_361_int == 0) {
		var_359_bool = true;
		return 0;
	}
	var_359_bool = false;
}


void func_2752(void)
{
	object var_58_object;
	@CreateDiaryEntry(var_58_object, 577, 2, 530657);
	bool var_62_bool; object var_63_object;
	var_58_object = var_63_object;
	func_2778(var_62_bool, var_63_object, 575);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1474(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_466_object, object var_467_object)
{
	var_0_object = var_467_object;
	var_1_object = var_466_object;
	var_3_string = false;
	if(1 != 0) {
		func_1547(var_467_object, "Neutral");
		var_0_object->SetMessage(521930); //@t
		var_0_object->ClearReplies(); //@t
		bool var_482_bool = false;
		bool var_483_bool;
		func_2680(var_1_object);
		if(var_483_bool != 0) {
			bool var_489_bool;
			func_2692(var_1_object);
			if(!var_489_bool) //@nz
				var_482_bool = true;
		}
		if(var_482_bool != 0)
			var_0_object->AddReply(521931, 23673, 23105); //@t
		var_0_object->AddReply(521932, -1, 23106); //@t
		goto Label_1517;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5c6";
	}
Label_1517:
	bool var_502_bool;
	func_2619(var_502_bool);
	if(var_502_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2511(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1546;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1546:
		return 0;

	}
	
}


void func_2249(bool var_84_bool)
{
	var_84_bool = true;
}


void func_2251(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2765(object var_71_object)
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


void func_1998(object var_0_object)
{
	bool var_32_bool;
	func_2283(var_32_bool);
	if(!var_32_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2126();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2180();
	}
}
EMIT "Return(); Pop(0)";


void func_2511(string var_39_string)
{
	float var_42_float; float var_43_float;
	@lshGetAnimTimes(var_39_string, var_42_float, var_43_float);
	@lshPlayAnimation(var_42_float, var_43_float, false);
}


void func_2256(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


void func_2518(string var_229_string, bool var_230_bool)
{
	float var_235_float; float var_236_float;
	@lshGetAnimTimes(var_229_string, var_235_float, var_236_float);
	@lshPlayAnimation(var_235_float, var_236_float, var_230_bool);
}


void func_2264(bool var_39_bool, cvector var_40_cvector)
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


void func_2778(bool var_62_bool, object var_63_object, int var_64_int)
{
	object var_71_object;
	func_2765(var_71_object);
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


void func_475(object var_0_object, int var_269_int, object var_270_object)
{
	var_0_object = var_270_object;
	bool var_280_bool; object var_281_object;
	object var_282_object;
	func_2546(var_282_object);
	var_282_object = var_281_object;
	func_2373(var_280_bool, var_281_object);
	bool var_283_bool; object var_284_object;
	var_270_object = var_284_object;
	func_2288(var_283_bool, var_284_object, 70.0);
	if(!var_283_bool) { //@nz
		var_269_int = -2;
		return 8;
	}
	object var_276_object;
	@CreateDialog(var_276_object);
	int var_287_int;
	func_2613(var_287_int);
	var_276_object->SetNPCName(var_287_int);
	int var_288_int;
	func_2611(var_288_int);
	var_276_object->SetNPCDescription(var_288_int);
	string var_289_string;
	func_2615(var_289_string);
	var_276_object->SetPhoto(var_289_string);
	string var_290_string;
	func_2617(var_290_string);
	var_276_object->SetPhoto2(var_290_string);
	int var_291_int;
	func_2823(var_291_int);
	var_276_object->SetPlayerName(var_291_int);
	bool var_277_bool;
	@IsOverrideActive(var_277_bool);
	if(var_277_bool != 0) {
		var_269_int = -2;
		return 8;
	}
	@DoDialog(var_276_object);
	object var_293_object; object var_294_object;
	var_270_object = var_293_object;
	var_276_object = var_294_object;
	TaskCall(6);
	func_556(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object);
	TaskReturn();
	bool var_279_bool;
	var_276_object->IsDialogEnd(var_279_bool);
	
	for(;;) {
		var_371_bool = !var_279_bool; //@nz
		if(var_371_bool == 0) goto Label_545;
		@sync();
		var_276_object->IsDialogEnd(var_279_bool);
	}
	
Label_545:
	object var_372_object;
	var_270_object = var_372_object;
	func_2356();
	@StopDialog(var_276_object);
	var_276_object->GetReturnValue(-1);
	int var_278_int = var_269_int;
}
EMIT "Stack[-4] = 0";


void func_2524(bool var_97_bool, string var_98_string)
{
	bool var_100_bool;
	bool var_101_bool;
	func_2619(var_101_bool);
	if(var_101_bool != 0) {
		@lshHasSpeech(var_100_bool, var_98_string);
		if(var_100_bool != 0) {
			@lshPlaySpeech(var_98_string);
			var_97_bool = true;
		}
	}
	var_97_bool = false;
}


void func_2274(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2264(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


void func_2018(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2274(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


void func_2283(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


void func_2539(void)
{
	bool var_34_bool;
	func_2619(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


void func_2288(bool var_158_bool, object var_159_object, float var_160_float)
{
	cvector var_171_cvector; bool var_178_bool;
	var_159_object->GetPosition(var_171_cvector);
	float var_170_float;
	var_159_object->GetEyesHeight(var_170_float);
	var_179_float = GetByIndex(var_171_cvector, 1);
	SetByIndex(var_171_cvector, 1) = (var_179_float + var_170_float);
	cvector var_172_cvector;
	@GetPosition(var_172_cvector);
	@GetEyesHeight(var_170_float);
	var_180_float = GetByIndex(var_172_cvector, 1);
	SetByIndex(var_172_cvector, 1) = (var_180_float + var_170_float);
	cvector var_173_cvector = var_171_cvector - var_172_cvector;
	var_181_float = GetByIndex(var_173_cvector, 1);
	SetByIndex(var_173_cvector, 1) = (float)0;
	var_183_float = sqrt(var_173_cvector | var_173_cvector);
	var_173_cvector /= var_183_float;
	cvector var_174_cvector = -var_173_cvector;
	cvector var_185_cvector;
	func_2552(var_185_cvector, (var_174_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_175_cvector = ((var_173_cvector * var_160_float) + (var_185_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_177_bool;
	@IsOverrideActive(var_177_bool);
	if(var_177_bool != 0)
		var_158_bool = false;
	@StopWorld();
	@CameraTransit((var_172_cvector + var_175_cvector), var_174_cvector);
	var_198_float = GetByIndex(var_175_cvector, 0);
	var_199_float = GetByIndex(var_175_cvector, 2);
	@Rotate(var_198_float, var_199_float);
	bool var_200_bool;
	func_2619(var_200_bool);
	if(var_200_bool != 0) {
	} else {
		@HasAnimationTrack(var_178_bool, "head");
		if(var_178_bool == 0) goto Label_2350;
		@LookAsyncCamera("head");
	}
Label_2350:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_158_bool = true;
	
}


void func_2033(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_2546(object var_65_object)
{
	object var_67_object;
	@self(var_67_object);
	var_67_object = var_65_object;
}
EMIT "Stack[-1] = 0";


void func_2038(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2256(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


void func_2806(object var_43_object)
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


void func_2552(cvector var_185_cvector, cvector var_186_cvector)
{
	float var_189_float = sqrt(var_186_cvector | var_186_cvector);
	if(var_189_float < 0.000001)
		var_185_cvector = [0.0, 0.0, 0.0];
	var_185_cvector = var_186_cvector / var_189_float;
}


void func_1788(object var_0_object, int var_577_int, object var_578_object)
{
	var_0_object = var_578_object;
	bool var_588_bool; object var_589_object;
	object var_590_object;
	func_2546(var_590_object);
	var_590_object = var_589_object;
	func_2373(var_588_bool, var_589_object);
	bool var_591_bool; object var_592_object;
	var_578_object = var_592_object;
	func_2288(var_591_bool, var_592_object, 70.0);
	if(!var_591_bool) { //@nz
		var_577_int = -2;
		return 8;
	}
	object var_584_object;
	@CreateDialog(var_584_object);
	int var_595_int;
	func_2613(var_595_int);
	var_584_object->SetNPCName(var_595_int);
	int var_596_int;
	func_2611(var_596_int);
	var_584_object->SetNPCDescription(var_596_int);
	string var_597_string;
	func_2615(var_597_string);
	var_584_object->SetPhoto(var_597_string);
	string var_598_string;
	func_2617(var_598_string);
	var_584_object->SetPhoto2(var_598_string);
	int var_599_int;
	func_2823(var_599_int);
	var_584_object->SetPlayerName(var_599_int);
	bool var_585_bool;
	@IsOverrideActive(var_585_bool);
	if(var_585_bool != 0) {
		var_577_int = -2;
		return 8;
	}
	@DoDialog(var_584_object);
	object var_601_object; object var_602_object;
	var_578_object = var_601_object;
	var_584_object = var_602_object;
	TaskCall(12);
	func_1869(var_603_object, var_604_object, var_605_string, var_606_bool, var_601_object, var_602_object);
	TaskReturn();
	bool var_587_bool;
	var_584_object->IsDialogEnd(var_587_bool);
	
	for(;;) {
		var_631_bool = !var_587_bool; //@nz
		if(var_631_bool == 0) goto Label_1858;
		@sync();
		var_584_object->IsDialogEnd(var_587_bool);
	}
	
Label_1858:
	object var_632_object;
	var_578_object = var_632_object;
	func_2356();
	@StopDialog(var_584_object);
	var_584_object->GetReturnValue(-1);
	int var_586_int = var_577_int;
}
EMIT "Stack[-4] = 0";


