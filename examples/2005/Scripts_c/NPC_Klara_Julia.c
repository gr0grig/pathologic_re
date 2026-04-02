// @GLOBALS: 0:object:,1:bool:

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
			func_2516();
			if(var_31_bool == 26842) {
				func_152(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525486); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525487, 30760, 26843); //@t
				var_0_object->AddReply(540677, -1, 42710); //@t
				return 0;
			}
			if(var_31_bool == 30760) {
				func_152(var_32_cvector, "Neutral");
				var_0_object->SetMessage(529306); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529307, 30762, 30761); //@t
				var_0_object->AddReply(540678, -1, 42711); //@t
				return 0;
			}
			if(var_31_bool == 30762) {
				func_152(var_32_cvector, "Neutral");
				var_0_object->SetMessage(529308); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529309, -1, 30763); //@t
				var_0_object->AddReply(529310, -1, 30764); //@t
				return 0;
			}
			var_3_string = true;
			bool var_76_bool;
			func_2664(var_76_bool);
			if(var_76_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2516();
			if(var_32_cvector == 26901) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2666();
			}
			if(var_32_cvector == 42726) {
				object var_82_object = var_1_object;
				func_2760(var_0_object);
			}
			if(var_31_bool == 26890) {
				func_406(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525534); //@t
				var_0_object->ClearReplies(); //@t
				bool var_137_bool;
				func_2767(var_1_object);
				if(var_137_bool != 0)
					var_0_object->AddReply(525541, 42712, 26897); //@t
				var_0_object->AddReply(525546, -1, 26902); //@t
				return 0;
			}
			if(var_31_bool == 42712) {
				func_406(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540679); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540680, 42715, 42713); //@t
				var_0_object->AddReply(540681, 42718, 42714); //@t
				return 0;
			}
			if(var_31_bool == 42715) {
				func_406(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540683, 42722, 42716); //@t
				var_0_object->AddReply(540684, 42718, 42717); //@t
				return 0;
			}
			if(var_31_bool == 42718) {
				func_406(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540685); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540686, 42722, 42720); //@t
				var_0_object->AddReply(540687, 42722, 42721); //@t
				return 0;
			}
			if(var_31_bool == 42722) {
				func_406(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540688); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540689, 42727, 42725); //@t
				var_0_object->AddReply(540690, -1, 42726); //@t
				return 0;
			}
			if(var_31_bool == 42727) {
				func_406(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540691); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540692, 26898, 42728); //@t
				return 0;
			}
			if(var_31_bool == 26898) {
				func_406(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525542); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525543, 26900, 26899); //@t
				var_0_object->AddReply(540693, 42730, 42729); //@t
				return 0;
			}
			if(var_31_bool == 42730) {
				func_406(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540695, -1, 42731); //@t
				bool var_215_bool;
				func_2779(var_1_object);
				if(var_215_bool != 0)
					var_0_object->AddReply(540696, -1, 42732); //@t
				return 0;
			}
			if(var_31_bool == 26900) {
				func_406(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525544); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540697, 42734, 42733); //@t
				var_0_object->AddReply(540699, -1, 42735); //@t
				return 0;
			}
			if(var_31_bool == 42734) {
				func_406(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540698); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525545, -1, 26901); //@t
				return 0;
			}
			var_3_string = true;
			bool var_241_bool;
			func_2664(var_241_bool);
			if(var_241_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1ad";
	
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
			func_2516();
			if(var_32_cvector == 27347) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2689();
			}
			if(var_31_bool == 27330) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526045); //@t
				var_0_object->ClearReplies(); //@t
				bool var_85_bool;
				func_2791(var_1_object);
				if(var_85_bool != 0)
					var_0_object->AddReply(526046, 27332, 27331); //@t
				var_0_object->AddReply(526063, -1, 27348); //@t
				var_0_object->AddReply(528877, -1, 30300); //@t
				return 0;
			}
			if(var_31_bool == 27332) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526048, 27334, 27333); //@t
				var_0_object->AddReply(528878, 27334, 30301); //@t
				return 0;
			}
			if(var_31_bool == 27334) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526049); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526050, 27336, 27335); //@t
				var_0_object->AddReply(528879, 27338, 30303); //@t
				return 0;
			}
			if(var_31_bool == 27336) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526051); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526052, 27338, 27337); //@t
				return 0;
			}
			if(var_31_bool == 27338) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526053); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528880, 30306, 30305); //@t
				var_0_object->AddReply(528882, 30306, 30307); //@t
				return 0;
			}
			if(var_31_bool == 30306) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526054, 27340, 27339); //@t
				var_0_object->AddReply(526056, 27342, 27341); //@t
				return 0;
			}
			if(var_31_bool == 27342) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526057); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526058, 27344, 27343); //@t
				return 0;
			}
			if(var_31_bool == 27340) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526055); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528883, 27344, 30309); //@t
				return 0;
			}
			if(var_31_bool == 27344) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526059); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528886, 30314, 30313); //@t
				var_0_object->AddReply(540972, 43062, 43061); //@t
				return 0;
			}
			if(var_31_bool == 43062) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540974, 30314, 43063); //@t
				return 0;
			}
			if(var_31_bool == 30314) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528887); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526060, 27346, 27345); //@t
				return 0;
			}
			if(var_31_bool == 27346) {
				func_842(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526061); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526062, -1, 27347); //@t
				return 0;
			}
			var_3_string = true;
			bool var_194_bool;
			func_2664(var_194_bool);
			if(var_194_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x361";
	
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
			func_2516();
			if(var_32_cvector == 28912) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2754();
			}
			if(var_32_cvector == 28924) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_2703();
			}
			if(var_32_cvector == 28929) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_2703();
			}
			if(var_31_bool == 28910) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527568); //@t
				var_0_object->ClearReplies(); //@t
				bool var_145_bool = false;
				bool var_146_bool;
				func_2815(var_1_object);
				if(var_146_bool != 0) {
					bool var_154_bool;
					func_2803(var_1_object);
					if(var_154_bool != 0)
						var_145_bool = true;
				}
				if(var_145_bool != 0)
					var_0_object->AddReply(527570, 28913, 28912); //@t
				var_0_object->AddReply(527569, -1, 28911); //@t
				return 0;
			}
			if(var_31_bool == 28913) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527571); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527572, 28915, 28914); //@t
				var_0_object->AddReply(527583, 28926, 28925); //@t
				return 0;
			}
			if(var_31_bool == 28926) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527584); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527585, 28917, 28927); //@t
				return 0;
			}
			if(var_31_bool == 28915) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527573); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527574, 28917, 28916); //@t
				return 0;
			}
			if(var_31_bool == 28917) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527576, 28919, 28918); //@t
				return 0;
			}
			if(var_31_bool == 28919) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527577); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527578, 28921, 28920); //@t
				return 0;
			}
			if(var_31_bool == 28921) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527579); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527580, 28923, 28922); //@t
				return 0;
			}
			if(var_31_bool == 28923) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527581); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527582, -1, 28924); //@t
				var_0_object->AddReply(527586, -1, 28929); //@t
				return 0;
			}
			var_3_string = true;
			bool var_221_bool;
			func_2664(var_221_bool);
			if(var_221_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x52b";
	
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
			func_2516();
			if(var_31_bool == 41243) {
				func_1672(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539301, -1, 41244); //@t
				return 0;
			}
			var_3_string = true;
			bool var_53_bool;
			func_2664(var_53_bool);
			if(var_53_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x69f";
	
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
			func_2516();
			if(var_31_int == 42548) {
				func_1870(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_2664(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x765";
	
	}

}


maintask task_13
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		var_31_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1941(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_2012();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2260(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_1981(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_1961(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2523(var_77_object);
					var_77_object = var_76_object;
					func_2408(var_75_bool, var_76_object);
				}
			} else {
				func_1976(var_31_int);
				func_2003();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2194();
		func_2012();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
		{
		@StopGroup0();
		func_2012();
		func_2488("Neutral");
		func_2003();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_2003();
		else
			func_2488("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2194();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2251(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_3006(var_49_object);
			func_2488("Neutral");
			func_2012();
			func_2003();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_36_bool;
	func_2260(var_36_bool);
	if(!var_36_bool) goto Label_0; //@nz
}


void func_1538(object var_0_object, int var_473_int, object var_474_object)
{
	var_0_object = var_474_object;
	bool var_484_bool; object var_485_object;
	object var_486_object;
	func_2523(var_486_object);
	var_486_object = var_485_object;
	func_2350(var_484_bool, var_485_object);
	bool var_487_bool; object var_488_object;
	var_474_object = var_488_object;
	func_2265(var_487_bool, var_488_object, 70.0);
	if(!var_487_bool) { //@nz
		var_473_int = -2;
		return 8;
	}
	object var_480_object;
	@CreateDialog(var_480_object);
	int var_491_int;
	func_2658(var_491_int);
	var_480_object->SetNPCName(var_491_int);
	int var_492_int;
	func_2656(var_492_int);
	var_480_object->SetNPCDescription(var_492_int);
	string var_493_string;
	func_2660(var_493_string);
	var_480_object->SetPhoto(var_493_string);
	string var_494_string;
	func_2662(var_494_string);
	var_480_object->SetPhoto2(var_494_string);
	int var_495_int;
	func_2989(var_495_int);
	var_480_object->SetPlayerName(var_495_int);
	bool var_481_bool;
	@IsOverrideActive(var_481_bool);
	if(var_481_bool != 0) {
		var_473_int = -2;
		return 8;
	}
	@DoDialog(var_480_object);
	object var_497_object; object var_498_object;
	var_474_object = var_497_object;
	var_480_object = var_498_object;
	TaskCall(10);
	func_1619(var_499_object, var_500_object, var_501_string, var_502_bool, var_497_object, var_498_object);
	TaskReturn();
	bool var_483_bool;
	var_480_object->IsDialogEnd(var_483_bool);
	
	for(;;) {
		var_524_bool = !var_483_bool; //@nz
		if(var_524_bool == 0) goto Label_1608;
		@sync();
		var_480_object->IsDialogEnd(var_483_bool);
	}
	
Label_1608:
	object var_525_object;
	var_474_object = var_525_object;
	func_2333();
	@StopDialog(var_480_object);
	var_480_object->GetReturnValue(-1);
	int var_482_int = var_473_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_774(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_359_object, object var_360_object)
{
	var_0_object = var_360_object;
	var_3_string = false;
	if(1 != 0) {
		func_842(var_360_object, "Neutral");
		var_0_object->SetMessage(526045); //@t
		var_0_object->ClearReplies(); //@t
		bool var_375_bool;
		func_2791(var_359_object);
		if(var_375_bool != 0)
			var_0_object->AddReply(526046, 27332, 27331); //@t
		var_0_object->AddReply(526063, -1, 27348); //@t
		var_0_object->AddReply(528877, -1, 30300); //@t
		goto Label_812;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x30a";
	}
Label_812:
	bool var_390_bool;
	func_2664(var_390_bool);
	if(var_390_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2488(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_841;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_841:
		return 0;

	}
	
}


void func_262(object var_0_object, int var_269_int, object var_270_object)
{
	var_0_object = var_270_object;
	bool var_280_bool; object var_281_object;
	object var_282_object;
	func_2523(var_282_object);
	var_282_object = var_281_object;
	func_2350(var_280_bool, var_281_object);
	bool var_283_bool; object var_284_object;
	var_270_object = var_284_object;
	func_2265(var_283_bool, var_284_object, 70.0);
	if(!var_283_bool) { //@nz
		var_269_int = -2;
		return 8;
	}
	object var_276_object;
	@CreateDialog(var_276_object);
	int var_287_int;
	func_2658(var_287_int);
	var_276_object->SetNPCName(var_287_int);
	int var_288_int;
	func_2656(var_288_int);
	var_276_object->SetNPCDescription(var_288_int);
	string var_289_string;
	func_2660(var_289_string);
	var_276_object->SetPhoto(var_289_string);
	string var_290_string;
	func_2662(var_290_string);
	var_276_object->SetPhoto2(var_290_string);
	int var_291_int;
	func_2989(var_291_int);
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
	TaskCall(4);
	func_343(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object);
	TaskReturn();
	bool var_279_bool;
	var_276_object->IsDialogEnd(var_279_bool);
	
	for(;;) {
		var_331_bool = !var_279_bool; //@nz
		if(var_331_bool == 0) goto Label_332;
		@sync();
		var_276_object->IsDialogEnd(var_279_bool);
	}
	
Label_332:
	object var_332_object;
	var_270_object = var_332_object;
	func_2333();
	@StopDialog(var_276_object);
	var_276_object->GetReturnValue(-1);
	int var_278_int = var_269_int;
}
EMIT "Stack[-4] = 0";


void func_2827(void)
{
	object var_119_object;
	@CreateDiaryEntry(var_119_object, 498, 1, 528065);
	bool var_123_bool; object var_124_object;
	var_119_object = var_124_object;
	func_2944(var_123_bool, var_124_object, 480);
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_52_int, object var_53_object)
{
	var_0_object = var_53_object;
	bool var_63_bool; object var_64_object;
	object var_65_object;
	func_2523(var_65_object);
	var_65_object = var_64_object;
	func_2350(var_63_bool, var_64_object);
	bool var_158_bool; object var_159_object;
	var_53_object = var_159_object;
	func_2265(var_158_bool, var_159_object, 70.0);
	if(!var_158_bool) { //@nz
		var_52_int = -2;
		return 8;
	}
	object var_59_object;
	@CreateDialog(var_59_object);
	int var_205_int;
	func_2658(var_205_int);
	var_59_object->SetNPCName(var_205_int);
	int var_206_int;
	func_2656(var_206_int);
	var_59_object->SetNPCDescription(var_206_int);
	string var_207_string;
	func_2660(var_207_string);
	var_59_object->SetPhoto(var_207_string);
	string var_208_string;
	func_2662(var_208_string);
	var_59_object->SetPhoto2(var_208_string);
	int var_209_int;
	func_2989(var_209_int);
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
	TaskCall(2);
	func_94(var_220_object, var_221_object, var_222_string, var_223_bool, var_218_object, var_219_object);
	TaskReturn();
	bool var_62_bool;
	var_59_object->IsDialogEnd(var_62_bool);
	
	for(;;) {
		var_257_bool = !var_62_bool; //@nz
		if(var_257_bool == 0) goto Label_83;
		@sync();
		var_59_object->IsDialogEnd(var_62_bool);
	}
	
Label_83:
	object var_258_object;
	var_53_object = var_258_object;
	func_2333();
	@StopDialog(var_59_object);
	var_59_object->GetReturnValue(-1);
	int var_61_int = var_52_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1300(object var_2_object, string var_433_string)
{
	bool var_434_bool;
	func_2664(var_434_bool);
	if(!var_434_bool) //@nz
		return 0;
	if(var_433_string == var_2_object)
		return 0;
	string var_437_string; bool var_438_bool;
	var_433_string = var_437_string;
	if(var_433_string == "")
		var_438_bool = false;
	else
		var_438_bool = true;
	func_2495(var_437_string, var_438_bool);
	var_2_object = var_433_string;
	
}


// @pe
void func_1812(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_550_object, object var_551_object)
{
	var_0_object = var_551_object;
	var_1_object = var_550_object;
	var_3_string = false;
	if(1 != 0) {
		func_1870(var_551_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_1840;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x718";
	}
Label_1840:
	bool var_572_bool;
	func_2664(var_572_bool);
	if(var_572_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2488(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1869;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1869:
		return 0;

	}
	
}


void func_2840(void)
{
	object var_109_object;
	@CreateDiaryEntry(var_109_object, 497, 1, 528064);
	bool var_113_bool; object var_114_object;
	var_109_object = var_114_object;
	func_2944(var_113_bool, var_114_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2333(void)
{
	bool var_260_bool;
	@CameraSwitchToNormal();
	bool var_261_bool;
	func_2664(var_261_bool);
	if(var_261_bool != 0) {
	} else {
		@HasAnimationTrack(var_260_bool, "head");
		if(var_260_bool == 0) goto Label_2349;
		@UnlookAsync("head");
	}
Label_2349:
	
}


void func_2590(float var_91_float)
{
	object var_93_object;
	@CreateFloatVector(var_93_object);
	var_93_object->add(var_91_float);
	@SendWorldWndMessage(16, var_93_object);
}
EMIT "Stack[-1] = 0";


void func_2853(void)
{
	object var_99_object;
	@CreateDiaryEntry(var_99_object, 496, 1, 528063);
	bool var_103_bool; object var_104_object;
	var_99_object = var_104_object;
	func_2944(var_103_bool, var_104_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2600(bool var_64_bool, string var_65_string, string var_66_string)
{
	object var_68_object;
	@FindActor(var_68_object, var_65_string);
	if(var_68_object == null)
		var_64_bool = false;
	@Trigger(var_68_object, var_66_string);
	var_64_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2350(bool var_63_bool, object var_64_object)
{
	int var_70_int; int var_71_int;
	@GetVariable("voice_common", var_70_int);
	if(var_70_int != 0) {
		bool var_74_bool; object var_75_object;
		var_64_object = var_75_object;
		func_2408(var_74_bool, var_75_object);
		if(!var_74_bool) { //@nz
			bool var_105_bool; object var_106_object;
			var_64_object = var_106_object;
			func_2445(var_105_bool, var_106_object);
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
		func_2445(var_150_bool, var_151_object);
		if(!var_150_bool) { //@nz
			bool var_153_bool; object var_154_object;
			var_64_object = var_154_object;
			func_2408(var_153_bool, var_154_object);
			if(!var_153_bool) { //@nz
				var_63_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2406;
	
Label_2406:
	var_63_bool = true;
	
}


void func_2866(void)
{
	object var_89_object;
	@CreateDiaryEntry(var_89_object, 495, 1, 528062);
	bool var_93_bool; object var_94_object;
	var_89_object = var_94_object;
	func_2944(var_93_bool, var_94_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2612(float var_54_float)
{
	float var_56_float;
	@GetGameTime(var_56_float);
	var_56_float = var_54_float;
}


void func_2617(int var_118_int)
{
	float var_120_float;
	@GetGameTime(var_120_float);
	var_118_int = 1 + (var_120_float / 24);
}


void func_2879(void)
{
	object var_79_object;
	@CreateDiaryEntry(var_79_object, 494, 1, 528061);
	bool var_83_bool; object var_84_object;
	var_79_object = var_84_object;
	func_2944(var_83_bool, var_84_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2626(bool var_266_bool, int var_267_int)
{
	int var_268_int;
	func_2617(var_268_int);
	var_266_bool = var_268_int == var_267_int;
}


void func_2632(string var_70_string, int var_71_int)
{
	string var_73_string = "idle";
	if(var_71_int != 0)
		var_73_string += var_71_int;
	var_73_string = var_70_string;
}


// @pe
void func_842(object var_2_object, string var_366_string)
{
	bool var_367_bool;
	func_2664(var_367_bool);
	if(!var_367_bool) //@nz
		return 0;
	if(var_366_string == var_2_object)
		return 0;
	string var_370_string; bool var_371_bool;
	var_366_string = var_370_string;
	if(var_366_string == "")
		var_371_bool = false;
	else
		var_371_bool = true;
	func_2495(var_370_string, var_371_bool);
	var_2_object = var_366_string;
	
}


void func_2123(void)
{
	bool var_58_bool; int var_59_int; int var_60_int; bool var_61_bool;
	@WaitForAnimEnd();
	bool var_62_bool;
	func_2260(var_62_bool);
	if(!var_62_bool) //@nz
		return 12;
	int var_64_int;
	func_2639(var_64_int);
	int var_56_int;
	var_64_int = var_56_int;
	int var_57_int = 0;
	
	for(;;) {
		bool var_77_bool = false;
		if(var_57_int < 5) {
			bool var_80_bool;
			func_2260(var_80_bool);
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
			func_2632(var_91_string, var_92_int);
			@PlayAnimation("all", var_91_string);
			@WaitForAnimEnd(var_61_bool);
			var_93_bool = !var_61_bool; //@nz
			if(var_93_bool == 0) goto Label_2178;
			goto Label_2189;
			}
				Label_2178:
					bool var_84_bool;
					func_2192(var_84_bool);
					var_85_bool = !var_84_bool; //@nz
					if(var_85_bool == 0) goto Label_2184;
			}
		}
	Label_2189:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2184:
		@ResetAAS();
		var_57_int += 1;
	}
	
}


void func_2892(void)
{
	object var_54_object;
	@CreateDiaryEntry(var_54_object, 493, 1, 528060);
	bool var_58_bool; object var_59_object;
	var_54_object = var_59_object;
	func_2944(var_58_bool, var_59_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1870(object var_2_object, string var_557_string)
{
	bool var_558_bool;
	func_2664(var_558_bool);
	if(!var_558_bool) //@nz
		return 0;
	if(var_557_string == var_2_object)
		return 0;
	string var_561_string; bool var_562_bool;
	var_557_string = var_561_string;
	if(var_557_string == "")
		var_562_bool = false;
	else
		var_562_bool = true;
	func_2495(var_561_string, var_562_bool);
	var_2_object = var_557_string;
	
}


void func_2639(int var_64_int)
{
	int var_67_int; bool var_68_bool;
	var_67_int = 0;
	
	for(;;) {
		string var_70_string; int var_71_int;
		var_67_int = var_71_int;
		func_2632(var_70_string, var_71_int);
		@HasAnimation(var_68_bool, "all", var_70_string);
		if(!var_68_bool) //@nz
			break;
		var_67_int += 1;
	}
	var_67_int = var_64_int;
}


// @pe
void func_1619(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_497_object, object var_498_object)
{
	var_0_object = var_498_object;
	var_1_object = var_497_object;
	var_3_string = false;
	if(1 != 0) {
		func_1672(var_498_object, "Neutral");
		var_0_object->SetMessage(539300); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539301, -1, 41244); //@t
		goto Label_1642;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x657";
	}
Label_1642:
	bool var_516_bool;
	func_2664(var_516_bool);
	if(var_516_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2488(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1671;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1671:
		return 0;

	}
	
}


// @pe
void func_343(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_293_object, object var_294_object)
{
	var_0_object = var_294_object;
	var_3_string = false;
	if(1 != 0) {
		func_406(var_294_object, "Neutral");
		var_0_object->SetMessage(525534); //@t
		var_0_object->ClearReplies(); //@t
		bool var_309_bool;
		func_2767(var_293_object);
		if(var_309_bool != 0)
			var_0_object->AddReply(525541, 42712, 26897); //@t
		var_0_object->AddReply(525546, -1, 26902); //@t
		goto Label_376;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x15b";
	}
Label_376:
	bool var_323_bool;
	func_2664(var_323_bool);
	if(var_323_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2488(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_405;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_405:
		return 0;

	}
	
}


void func_2905(void)
{
	object var_58_object;
	@CreateDiaryEntry(var_58_object, 346, 2, 525568);
	bool var_62_bool; object var_63_object;
	var_58_object = var_63_object;
	func_2944(var_62_bool, var_63_object, 344);
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_218_object, object var_219_object)
{
	var_0_object = var_219_object;
	var_1_object = var_218_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_219_object, "Neutral");
		var_0_object->SetMessage(525486); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525487, 30760, 26843); //@t
		var_0_object->AddReply(540677, -1, 42710); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_244_bool;
	func_2664(var_244_bool);
	if(var_244_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2488(var_2_object);
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


void func_2656(int var_206_int)
{
	var_206_int = 515537;
}


void func_2658(int var_205_int)
{
	var_205_int = 502862;
}


void func_2660(string var_207_string)
{
	var_207_string = "ui/NPC_Julia.png";
}


void func_2662(string var_208_string)
{
	var_208_string = "ui/NPC_Julia_b.png";
}


void func_2918(void)
{
	object var_42_object;
	@CreateDiaryEntry(var_42_object, 411, 1, 526112);
	bool var_46_bool; object var_47_object;
	var_42_object = var_47_object;
	func_2944(var_46_bool, var_47_object, 408);
}
EMIT "Stack[-1] = 0";


void func_2664(bool var_101_bool)
{
	var_101_bool = true;
}


void func_2408(bool var_74_bool, object var_75_object)
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
		func_2501(var_97_bool, var_98_string);
		var_97_bool = var_74_bool;
		return 10;

	}
}


void func_2666(void)
{
	@SetVariable("k3q02", 2);
	object var_43_object;
	func_2972(var_43_object);
	object var_40_object;
	var_43_object = var_40_object;
	float var_54_float;
	func_2612(var_54_float);
	var_40_object->AddMark("k3q02JuliaGotoEva", "pt_map_eva", 0, 525573, var_54_float);
	func_2905();
}
EMIT "Stack[-1] = 0";


void func_2931(object var_67_object)
{
	object var_69_object;
	@GetDiaryRoot(var_69_object);
	if(!var_69_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_67_object = false;
	}
	var_69_object = var_67_object;
}
EMIT "Stack[-1] = 0";


void func_1147(object var_0_object, int var_402_int, object var_403_object)
{
	var_0_object = var_403_object;
	bool var_413_bool; object var_414_object;
	object var_415_object;
	func_2523(var_415_object);
	var_415_object = var_414_object;
	func_2350(var_413_bool, var_414_object);
	bool var_416_bool; object var_417_object;
	var_403_object = var_417_object;
	func_2265(var_416_bool, var_417_object, 70.0);
	if(!var_416_bool) { //@nz
		var_402_int = -2;
		return 8;
	}
	object var_409_object;
	@CreateDialog(var_409_object);
	int var_420_int;
	func_2658(var_420_int);
	var_409_object->SetNPCName(var_420_int);
	int var_421_int;
	func_2656(var_421_int);
	var_409_object->SetNPCDescription(var_421_int);
	string var_422_string;
	func_2660(var_422_string);
	var_409_object->SetPhoto(var_422_string);
	string var_423_string;
	func_2662(var_423_string);
	var_409_object->SetPhoto2(var_423_string);
	int var_424_int;
	func_2989(var_424_int);
	var_409_object->SetPlayerName(var_424_int);
	bool var_410_bool;
	@IsOverrideActive(var_410_bool);
	if(var_410_bool != 0) {
		var_402_int = -2;
		return 8;
	}
	@DoDialog(var_409_object);
	object var_426_object; object var_427_object;
	var_403_object = var_426_object;
	var_409_object = var_427_object;
	TaskCall(8);
	func_1228(var_428_object, var_429_object, var_430_string, var_431_bool, var_426_object, var_427_object);
	TaskReturn();
	bool var_412_bool;
	var_409_object->IsDialogEnd(var_412_bool);
	
	for(;;) {
		var_469_bool = !var_412_bool; //@nz
		if(var_469_bool == 0) goto Label_1217;
		@sync();
		var_409_object->IsDialogEnd(var_412_bool);
	}
	
Label_1217:
	object var_470_object;
	var_403_object = var_470_object;
	func_2333();
	@StopDialog(var_409_object);
	var_409_object->GetReturnValue(-1);
	int var_411_int = var_402_int;
}
EMIT "Stack[-4] = 0";


void func_2944(bool var_58_bool, object var_59_object, int var_60_int)
{
	object var_67_object;
	func_2931(var_67_object);
	object var_64_object;
	var_67_object = var_64_object;
	object var_65_object;
	var_64_object->Find(var_60_int, var_65_object);
	if(!var_65_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_60_int);
		var_58_bool = false;
	}
	var_65_object->AddChild(var_59_object);
	@SendWorldWndMessage(7);
	int var_66_int;
	var_59_object->GetCategory(var_66_int);
	@SetDiarySection(var_66_int);
	var_58_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_2689(void)
{
	@SetVariable("k6q01", 2);
	func_2918();
	bool var_64_bool;
	func_2600(var_64_bool, "quest_k6_01", "place_danko");
}


// @pe
void func_1672(object var_2_object, string var_504_string)
{
	bool var_505_bool;
	func_2664(var_505_bool);
	if(!var_505_bool) //@nz
		return 0;
	if(var_504_string == var_2_object)
		return 0;
	string var_508_string; bool var_509_bool;
	var_504_string = var_508_string;
	if(var_504_string == "")
		var_509_bool = false;
	else
		var_509_bool = true;
	func_2495(var_508_string, var_509_bool);
	var_2_object = var_504_string;
	
}


void func_2445(bool var_105_bool, object var_106_object)
{
	bool var_114_bool; int var_115_int; string var_116_string;
	int var_118_int;
	func_2617(var_118_int);
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
		func_2501(var_137_bool, var_138_string);
		var_137_bool = var_105_bool;
		return 10;

	}
}


void func_2703(void)
{
	int var_46_int;
	@GetVariable("k11q01SoulCount", var_46_int);
	@SetVariable("k11q01SoulCount", (var_46_int + 1));
	if(var_46_int == 2) {
		func_2892();
	} else if(var_46_int == 3) {
			func_2879();
	}

	for(;;) {
		return 2;

	}
	
	if(var_46_int == 4) {
		func_2866();
	} else if(var_46_int == 5) {
		func_2853();
	} else if(var_46_int == 6) {
		func_2840();
	} else if(var_46_int == 7) {
		func_2827();
	}
}


void func_2192(bool var_84_bool)
{
	var_84_bool = true;
}


void func_2194(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1941(object var_0_object)
{
	bool var_32_bool;
	func_2260(var_32_bool);
	if(!var_32_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2069();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2123();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_406(object var_2_object, string var_300_string)
{
	bool var_301_bool;
	func_2664(var_301_bool);
	if(!var_301_bool) //@nz
		return 0;
	if(var_300_string == var_2_object)
		return 0;
	string var_304_string; bool var_305_bool;
	var_300_string = var_304_string;
	if(var_300_string == "")
		var_305_bool = false;
	else
		var_305_bool = true;
	func_2495(var_304_string, var_305_bool);
	var_2_object = var_300_string;
	
}


void func_2199(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


// @pe
void func_152(object var_2_object, string var_225_string)
{
	bool var_226_bool;
	func_2664(var_226_bool);
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
	func_2495(var_229_string, var_230_bool);
	var_2_object = var_225_string;
	
}


void func_2972(object var_43_object)
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


void func_2207(bool var_103_bool, object var_104_object, string var_105_string)
{
	var_110_bool = IsFuncExist(var_104_object, "HasProperty", 2);
	if(!var_110_bool) { //@nz
		var_103_bool = false;
		return 2;
	}
	bool var_107_bool;
	var_104_object->HasProperty(var_105_string, var_107_bool);
	var_107_bool = var_103_bool;
}


void func_1961(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2251(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


void func_2219(bool var_95_bool, object var_96_object, string var_97_string, float var_98_float, float var_99_float, float var_100_float)
{
	object var_104_object;
	var_96_object = var_104_object;
	string var_105_string;
	var_97_string = var_105_string;
	bool var_103_bool;
	func_2207(var_103_bool, var_104_object, var_105_string);
	if(!var_103_bool) //@nz
		var_95_bool = false;
	float var_102_float;
	var_96_object->GetProperty(var_97_string, var_102_float);
	float var_113_float; float var_115_float; float var_116_float;
	var_99_float = var_115_float;
	var_100_float = var_116_float;
	func_2539(var_113_float, (var_102_float + var_98_float), var_115_float, var_116_float);
	var_96_object->SetProperty(var_97_string, var_113_float);
	var_95_bool = true;
}


void func_2989(int var_209_int)
{
	int var_211_int;
	@GetVariable("branch", var_211_int);
	if(var_211_int == 0) {
		var_209_int = 1;
		return 2;
	EMIT "GOTO 0xbbc";
	}
	if(var_211_int == 1) {
		var_209_int = 2;
		return 2;
	}
	var_209_int = 3;
}


void func_693(object var_0_object, int var_335_int, object var_336_object)
{
	var_0_object = var_336_object;
	bool var_346_bool; object var_347_object;
	object var_348_object;
	func_2523(var_348_object);
	var_348_object = var_347_object;
	func_2350(var_346_bool, var_347_object);
	bool var_349_bool; object var_350_object;
	var_336_object = var_350_object;
	func_2265(var_349_bool, var_350_object, 70.0);
	if(!var_349_bool) { //@nz
		var_335_int = -2;
		return 8;
	}
	object var_342_object;
	@CreateDialog(var_342_object);
	int var_353_int;
	func_2658(var_353_int);
	var_342_object->SetNPCName(var_353_int);
	int var_354_int;
	func_2656(var_354_int);
	var_342_object->SetNPCDescription(var_354_int);
	string var_355_string;
	func_2660(var_355_string);
	var_342_object->SetPhoto(var_355_string);
	string var_356_string;
	func_2662(var_356_string);
	var_342_object->SetPhoto2(var_356_string);
	int var_357_int;
	func_2989(var_357_int);
	var_342_object->SetPlayerName(var_357_int);
	bool var_343_bool;
	@IsOverrideActive(var_343_bool);
	if(var_343_bool != 0) {
		var_335_int = -2;
		return 8;
	}
	@DoDialog(var_342_object);
	object var_359_object; object var_360_object;
	var_336_object = var_359_object;
	var_342_object = var_360_object;
	TaskCall(6);
	func_774(var_361_object, var_362_object, var_363_string, var_364_bool, var_359_object, var_360_object);
	TaskReturn();
	bool var_345_bool;
	var_342_object->IsDialogEnd(var_345_bool);
	
	for(;;) {
		var_398_bool = !var_345_bool; //@nz
		if(var_398_bool == 0) goto Label_763;
		@sync();
		var_342_object->IsDialogEnd(var_345_bool);
	}
	
Label_763:
	object var_399_object;
	var_336_object = var_399_object;
	func_2333();
	@StopDialog(var_342_object);
	var_342_object->GetReturnValue(-1);
	int var_344_int = var_335_int;
}
EMIT "Stack[-4] = 0";


void func_2488(string var_39_string)
{
	float var_42_float; float var_43_float;
	@lshGetAnimTimes(var_39_string, var_42_float, var_43_float);
	@lshPlayAnimation(var_42_float, var_43_float, false);
}


void func_1976(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_1981(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2199(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_3006(object var_49_object)
{
	var_50_bool = GlobalVars[1];
	if(!var_50_bool) { //@nz
		int var_52_int; object var_53_object;
		var_49_object = var_53_object;
		TaskCall(1);
		func_13(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_265_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_266_bool;
	func_2626(var_266_bool, 3);
	if(var_266_bool != 0) {
		int var_269_int; object var_270_object;
		var_49_object = var_270_object;
		TaskCall(3);
		func_262(var_271_object, var_269_int, var_270_object);
		TaskReturn();
		return 0;
	}
	bool var_333_bool;
	func_2626(var_333_bool, 6);
	if(var_333_bool != 0) {
		int var_335_int; object var_336_object;
		var_49_object = var_336_object;
		TaskCall(5);
		func_693(var_337_object, var_335_int, var_336_object);
		TaskReturn();
		return 0;
	}
	bool var_400_bool;
	func_2626(var_400_bool, 11);
	if(var_400_bool != 0) {
		int var_402_int; object var_403_object;
		var_49_object = var_403_object;
		TaskCall(7);
		func_1147(var_404_object, var_402_int, var_403_object);
		TaskReturn();
		return 0;
	}
	bool var_471_bool;
	func_2626(var_471_bool, 12);
	if(var_471_bool != 0) {
		int var_473_int; object var_474_object;
		var_49_object = var_474_object;
		TaskCall(9);
		func_1538(var_475_object, var_473_int, var_474_object);
		TaskReturn();
		return 0;
	}
	int var_526_int; object var_527_object;
	var_49_object = var_527_object;
	TaskCall(11);
	func_1731(var_528_object, var_526_int, var_527_object);
	TaskReturn();
}


void func_2495(string var_229_string, bool var_230_bool)
{
	float var_235_float; float var_236_float;
	@lshGetAnimTimes(var_229_string, var_235_float, var_236_float);
	@lshPlayAnimation(var_235_float, var_236_float, var_230_bool);
}


void func_2241(bool var_39_bool, cvector var_40_cvector)
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


// @pe
void func_2754(void)
{
	@SetVariable("ook11Julia1", 1);
}


void func_1731(object var_0_object, int var_526_int, object var_527_object)
{
	var_0_object = var_527_object;
	bool var_537_bool; object var_538_object;
	object var_539_object;
	func_2523(var_539_object);
	var_539_object = var_538_object;
	func_2350(var_537_bool, var_538_object);
	bool var_540_bool; object var_541_object;
	var_527_object = var_541_object;
	func_2265(var_540_bool, var_541_object, 70.0);
	if(!var_540_bool) { //@nz
		var_526_int = -2;
		return 8;
	}
	object var_533_object;
	@CreateDialog(var_533_object);
	int var_544_int;
	func_2658(var_544_int);
	var_533_object->SetNPCName(var_544_int);
	int var_545_int;
	func_2656(var_545_int);
	var_533_object->SetNPCDescription(var_545_int);
	string var_546_string;
	func_2660(var_546_string);
	var_533_object->SetPhoto(var_546_string);
	string var_547_string;
	func_2662(var_547_string);
	var_533_object->SetPhoto2(var_547_string);
	int var_548_int;
	func_2989(var_548_int);
	var_533_object->SetPlayerName(var_548_int);
	bool var_534_bool;
	@IsOverrideActive(var_534_bool);
	if(var_534_bool != 0) {
		var_526_int = -2;
		return 8;
	}
	@DoDialog(var_533_object);
	object var_550_object; object var_551_object;
	var_527_object = var_550_object;
	var_533_object = var_551_object;
	TaskCall(12);
	func_1812(var_552_object, var_553_object, var_554_string, var_555_bool, var_550_object, var_551_object);
	TaskReturn();
	bool var_536_bool;
	var_533_object->IsDialogEnd(var_536_bool);
	
	for(;;) {
		var_580_bool = !var_536_bool; //@nz
		if(var_580_bool == 0) goto Label_1801;
		@sync();
		var_533_object->IsDialogEnd(var_536_bool);
	}
	
Label_1801:
	object var_581_object;
	var_527_object = var_581_object;
	func_2333();
	@StopDialog(var_533_object);
	var_533_object->GetReturnValue(-1);
	int var_535_int = var_526_int;
}
EMIT "Stack[-4] = 0";


void func_2501(bool var_97_bool, string var_98_string)
{
	bool var_100_bool;
	bool var_101_bool;
	func_2664(var_101_bool);
	if(var_101_bool != 0) {
		@lshHasSpeech(var_100_bool, var_98_string);
		if(var_100_bool != 0) {
			@lshPlaySpeech(var_98_string);
			var_97_bool = true;
		}
	}
	var_97_bool = false;
}


// @pe
void func_2760(object var_82_object)
{
	object var_85_object;
	var_82_object = var_85_object;
	bool var_84_bool;
	func_2555(var_84_bool, var_85_object, 0.3);
}


void func_2251(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2241(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


// @pe
void func_1228(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_426_object, object var_427_object)
{
	var_0_object = var_427_object;
	var_1_object = var_426_object;
	var_3_string = false;
	if(1 != 0) {
		func_1300(var_427_object, "Neutral");
		var_0_object->SetMessage(527568); //@t
		var_0_object->ClearReplies(); //@t
		bool var_442_bool = false;
		bool var_443_bool;
		func_2815(var_1_object);
		if(var_443_bool != 0) {
			bool var_449_bool;
			func_2803(var_1_object);
			if(var_449_bool != 0)
				var_442_bool = true;
		}
		if(var_442_bool != 0)
			var_0_object->AddReply(527570, 28913, 28912); //@t
		var_0_object->AddReply(527569, -1, 28911); //@t
		goto Label_1270;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4d0";
	}
Label_1270:
	bool var_461_bool;
	func_2664(var_461_bool);
	if(var_461_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2488(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1299;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1299:
		return 0;

	}
	
}


// @pe
void func_2767(bool var_309_bool)
{
	int var_311_int;
	func_2550(var_311_int, "k3q02");
	if(var_311_int == 1)
		var_309_bool = true;
	var_309_bool = false;
}


void func_2003(void)
{
	float var_46_float;
	@rand(var_46_float, 8, 16);
	@SetTimer(10, var_46_float);
}


void func_2260(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


void func_2516(void)
{
	bool var_34_bool;
	func_2664(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


void func_2265(bool var_158_bool, object var_159_object, float var_160_float)
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
	func_2529(var_185_cvector, (var_174_cvector ^ [0.0, 1.0, 0.0]));
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
	func_2664(var_200_bool);
	if(var_200_bool != 0) {
	} else {
		@HasAnimationTrack(var_178_bool, "head");
		if(var_178_bool == 0) goto Label_2327;
		@LookAsyncCamera("head");
	}
Label_2327:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_158_bool = true;
	
}


// @pe
void func_2779(bool var_215_bool)
{
	int var_217_int;
	func_2550(var_217_int, "k3q02");
	if(var_217_int == 2)
		var_215_bool = true;
	var_215_bool = false;
}


void func_2523(object var_65_object)
{
	object var_67_object;
	@self(var_67_object);
	var_67_object = var_65_object;
}
EMIT "Stack[-1] = 0";


void func_2012(void)
{
	@KillTimer(10);
}


void func_2529(cvector var_185_cvector, cvector var_186_cvector)
{
	float var_189_float = sqrt(var_186_cvector | var_186_cvector);
	if(var_189_float < 0.000001)
		var_185_cvector = [0.0, 0.0, 0.0];
	var_185_cvector = var_186_cvector / var_189_float;
}


// @pe
void func_2791(bool var_375_bool)
{
	int var_377_int;
	func_2550(var_377_int, "k6q01");
	if(var_377_int == 1)
		var_375_bool = true;
	var_375_bool = false;
}


// @pe
void func_2539(float var_113_float, float var_114_float, float var_115_float, float var_116_float)
{
	if(var_114_float < var_115_float) {
		var_115_float = var_113_float;
		return 0;
	}
	if(var_114_float > var_116_float) {
		var_116_float = var_113_float;
		return 0;
	}
	var_114_float = var_113_float;
}


// @pe
void func_2803(bool var_449_bool)
{
	int var_451_int;
	func_2550(var_451_int, "k11q01");
	if(var_451_int == 9)
		var_449_bool = true;
	var_449_bool = false;
}


void func_2550(int var_311_int, string var_312_string)
{
	int var_314_int;
	@GetVariable(var_312_string, var_314_int);
	var_314_int = var_311_int;
}


// @pe
void func_2555(bool var_84_bool, object var_85_object, float var_86_float)
{
	if(!var_85_object) { //@nz
		var_84_bool = false;
		return 0;
	}
	if(var_86_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_86_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_91_float;
		var_86_float = var_91_float;
		func_2590(var_91_float);
		bool var_95_bool; object var_96_object; float var_98_float;
		var_85_object = var_96_object;
		var_86_float = var_98_float;
		func_2219(var_95_bool, var_96_object, "reputation", var_98_float, (float)0, (float)1);
		var_84_bool = true;
		return 0;

	}
	
	var_84_bool = false;
}


// @pe
void func_2815(bool var_443_bool)
{
	int var_445_int;
	func_2550(var_445_int, "ook11Julia1");
	if(var_445_int == 0) {
		var_443_bool = true;
		return 0;
	}
	var_443_bool = false;
}


