// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2733();
			if(var_31_bool == 26842) {
				func_139(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525486); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525487, 30760, 26843); //@t
				var_0_object->AddReply(540677, -1, 42710); //@t
				return 0;
			}
			if(var_31_bool == 30760) {
				func_139(var_32_cvector, "Neutral");
				var_0_object->SetMessage(529306); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529307, 30762, 30761); //@t
				var_0_object->AddReply(540678, -1, 42711); //@t
				return 0;
			}
			if(var_31_bool == 30762) {
				func_139(var_32_cvector, "Neutral");
				var_0_object->SetMessage(529308); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529309, -1, 30763); //@t
				var_0_object->AddReply(529310, -1, 30764); //@t
				return 0;
			}
			var_3_string = true;
			bool var_81_bool;
			func_2881(var_81_bool);
			if(var_81_bool != 0)
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
			func_2733();
			if(var_32_cvector == 26897) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3018();
			}
			if(var_32_cvector == 26901) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_2883();
			}
			if(var_32_cvector == 42735) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_2883();
			}
			if(var_32_cvector == 42731) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_2883();
			}
			if(var_32_cvector == 42732) {
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_2883();
			}
			if(var_32_cvector == 42726) {
				object var_100_object = var_1_object;
				func_3055(var_0_object);
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_3040();
			}
			if(var_31_bool == 26890) {
				func_402(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525534); //@t
				var_0_object->ClearReplies(); //@t
				bool var_172_bool = false;
				bool var_173_bool;
				func_3062(var_1_object);
				if(var_173_bool != 0) {
					bool var_181_bool;
					func_3110(var_1_object);
					if(var_181_bool != 0)
						var_172_bool = true;
				}
				if(var_172_bool != 0)
					var_0_object->AddReply(525541, 42712, 26897); //@t
				var_0_object->AddReply(525546, -1, 26902); //@t
				return 0;
			}
			if(var_31_bool == 42712) {
				func_402(var_32_cvector, "Hope");
				var_0_object->SetMessage(540679); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540680, 42715, 42713); //@t
				var_0_object->AddReply(540681, 42718, 42714); //@t
				return 0;
			}
			if(var_31_bool == 42715) {
				func_402(var_32_cvector, "Hope");
				var_0_object->SetMessage(540682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540683, 42722, 42716); //@t
				var_0_object->AddReply(540684, 42718, 42717); //@t
				return 0;
			}
			if(var_31_bool == 42718) {
				func_402(var_32_cvector, "Untrust");
				var_0_object->SetMessage(540685); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540686, 42722, 42720); //@t
				var_0_object->AddReply(540687, 42722, 42721); //@t
				return 0;
			}
			if(var_31_bool == 42722) {
				func_402(var_32_cvector, "Independence");
				var_0_object->SetMessage(540688); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540689, 42727, 42725); //@t
				var_0_object->AddReply(540690, -1, 42726); //@t
				return 0;
			}
			if(var_31_bool == 42727) {
				func_402(var_32_cvector, "Fear");
				var_0_object->SetMessage(540691); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540692, 26898, 42728); //@t
				return 0;
			}
			if(var_31_bool == 26898) {
				func_402(var_32_cvector, "Fear");
				var_0_object->SetMessage(525542); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525543, 26900, 26899); //@t
				var_0_object->AddReply(540693, 42730, 42729); //@t
				return 0;
			}
			if(var_31_bool == 42730) {
				func_402(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540695, -1, 42731); //@t
				var_0_object->AddReply(540696, -1, 42732); //@t
				return 0;
			}
			if(var_31_bool == 26900) {
				func_402(var_32_cvector, "Independence");
				var_0_object->SetMessage(525544); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540697, 42734, 42733); //@t
				var_0_object->AddReply(540699, -1, 42735); //@t
				return 0;
			}
			if(var_31_bool == 42734) {
				func_402(var_32_cvector, "Untrust");
				var_0_object->SetMessage(540698); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525545, -1, 26901); //@t
				return 0;
			}
			var_3_string = true;
			bool var_277_bool;
			func_2881(var_277_bool);
			if(var_277_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a9";
	
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
			func_2733();
			if(var_32_cvector == 27331) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3049();
			}
			if(var_32_cvector == 27347) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_2906();
				object var_107_object = var_1_object;
				func_3024(var_0_object);
			}
			if(var_31_bool == 27330) {
				func_879(var_32_cvector, "Hope");
				var_0_object->SetMessage(526045); //@t
				var_0_object->ClearReplies(); //@t
				bool var_153_bool;
				func_3074(var_1_object);
				if(var_153_bool != 0)
					var_0_object->AddReply(526046, 27332, 27331); //@t
				var_0_object->AddReply(526063, -1, 27348); //@t
				var_0_object->AddReply(528877, -1, 30300); //@t
				return 0;
			}
			if(var_31_bool == 27332) {
				func_879(var_32_cvector, "Hope");
				var_0_object->SetMessage(526047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526048, 27334, 27333); //@t
				var_0_object->AddReply(528878, 27334, 30301); //@t
				return 0;
			}
			if(var_31_bool == 27334) {
				func_879(var_32_cvector, "Hope");
				var_0_object->SetMessage(526049); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526050, 27336, 27335); //@t
				var_0_object->AddReply(528879, 27338, 30303); //@t
				return 0;
			}
			if(var_31_bool == 27336) {
				func_879(var_32_cvector, "Fear");
				var_0_object->SetMessage(526051); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526052, 27338, 27337); //@t
				return 0;
			}
			if(var_31_bool == 27338) {
				func_879(var_32_cvector, "Fear");
				var_0_object->SetMessage(526053); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528880, 30306, 30305); //@t
				var_0_object->AddReply(528882, 30306, 30307); //@t
				return 0;
			}
			if(var_31_bool == 30306) {
				func_879(var_32_cvector, "Fear");
				var_0_object->SetMessage(528881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526054, 27340, 27339); //@t
				var_0_object->AddReply(526056, 27342, 27341); //@t
				return 0;
			}
			if(var_31_bool == 27342) {
				func_879(var_32_cvector, "Independence");
				var_0_object->SetMessage(526057); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526058, 27344, 27343); //@t
				return 0;
			}
			if(var_31_bool == 27340) {
				func_879(var_32_cvector, "Independence");
				var_0_object->SetMessage(526055); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528883, 27344, 30309); //@t
				return 0;
			}
			if(var_31_bool == 27344) {
				func_879(var_32_cvector, "Untrust");
				var_0_object->SetMessage(526059); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528886, 30314, 30313); //@t
				var_0_object->AddReply(540972, 43062, 43061); //@t
				return 0;
			}
			if(var_31_bool == 43062) {
				func_879(var_32_cvector, "Fear");
				var_0_object->SetMessage(540973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540974, 30314, 43063); //@t
				return 0;
			}
			if(var_31_bool == 30314) {
				func_879(var_32_cvector, "Untrust");
				var_0_object->SetMessage(528887); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526060, 27346, 27345); //@t
				return 0;
			}
			if(var_31_bool == 27346) {
				func_879(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526061); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526062, -1, 27347); //@t
				return 0;
			}
			var_3_string = true;
			bool var_262_bool;
			func_2881(var_262_bool);
			if(var_262_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x386";
	
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
			func_2733();
			if(var_32_cvector == 28912) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3012();
			}
			if(var_32_cvector == 28924) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_2961();
			}
			if(var_32_cvector == 28929) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_2961();
			}
			if(var_31_bool == 28910) {
				func_1350(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527568); //@t
				var_0_object->ClearReplies(); //@t
				bool var_149_bool = false;
				bool var_150_bool;
				func_3098(var_1_object);
				if(var_150_bool != 0) {
					bool var_158_bool;
					func_3086(var_1_object);
					if(var_158_bool != 0)
						var_149_bool = true;
				}
				if(var_149_bool != 0)
					var_0_object->AddReply(527570, 28913, 28912); //@t
				var_0_object->AddReply(527569, -1, 28911); //@t
				return 0;
			}
			if(var_31_bool == 28913) {
				func_1350(var_32_cvector, "Fear");
				var_0_object->SetMessage(527571); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527572, 28915, 28914); //@t
				var_0_object->AddReply(527583, 28926, 28925); //@t
				return 0;
			}
			if(var_31_bool == 28926) {
				func_1350(var_32_cvector, "Independence");
				var_0_object->SetMessage(527584); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527585, 28917, 28927); //@t
				return 0;
			}
			if(var_31_bool == 28915) {
				func_1350(var_32_cvector, "Hope");
				var_0_object->SetMessage(527573); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527574, 28917, 28916); //@t
				return 0;
			}
			if(var_31_bool == 28917) {
				func_1350(var_32_cvector, "Untrust");
				var_0_object->SetMessage(527575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527576, 28919, 28918); //@t
				return 0;
			}
			if(var_31_bool == 28919) {
				func_1350(var_32_cvector, "Untrust");
				var_0_object->SetMessage(527577); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527578, 28921, 28920); //@t
				return 0;
			}
			if(var_31_bool == 28921) {
				func_1350(var_32_cvector, "Hope");
				var_0_object->SetMessage(527579); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527580, 28923, 28922); //@t
				return 0;
			}
			if(var_31_bool == 28923) {
				func_1350(var_32_cvector, "Hope");
				var_0_object->SetMessage(527581); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527582, -1, 28924); //@t
				var_0_object->AddReply(527586, -1, 28929); //@t
				return 0;
			}
			var_3_string = true;
			bool var_225_bool;
			func_2881(var_225_bool);
			if(var_225_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x55d";
	
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
			func_2733();
			if(var_31_bool == 41243) {
				func_1732(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542585, 44986, 44985); //@t
				var_0_object->AddReply(539301, -1, 41244); //@t
				var_0_object->AddReply(542584, -1, 44984); //@t
				return 0;
			}
			if(var_31_bool == 44986) {
				func_1732(var_32_cvector, "Hope");
				var_0_object->SetMessage(542586); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542587, 44989, 44987); //@t
				var_0_object->AddReply(542588, -1, 44988); //@t
				return 0;
			}
			if(var_31_bool == 44989) {
				func_1732(var_32_cvector, "Hope");
				var_0_object->SetMessage(542589); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542590, 44991, 44990); //@t
				var_0_object->AddReply(542594, 44993, 44994); //@t
				return 0;
			}
			if(var_31_bool == 44991) {
				func_1732(var_32_cvector, "Hope");
				var_0_object->SetMessage(542591); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542592, 44993, 44992); //@t
				return 0;
			}
			if(var_31_bool == 44993) {
				func_1732(var_32_cvector, "Neutral");
				var_0_object->SetMessage(542593); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542595, 44997, 44996); //@t
				return 0;
			}
			if(var_31_bool == 44997) {
				func_1732(var_32_cvector, "Neutral");
				var_0_object->SetMessage(542596); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542597, 45000, 44998); //@t
				var_0_object->AddReply(542598, -1, 44999); //@t
				return 0;
			}
			if(var_31_bool == 45000) {
				func_1732(var_32_cvector, "Neutral");
				var_0_object->SetMessage(542599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542600, -1, 45001); //@t
				var_0_object->AddReply(542601, -1, 45002); //@t
				var_0_object->AddReply(542602, -1, 45003); //@t
				return 0;
			}
			var_3_string = true;
			bool var_121_bool;
			func_2881(var_121_bool);
			if(var_121_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6db";
	
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
			func_2733();
			if(var_31_int == 42548) {
				func_2073(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2881(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x830";
	
	}

}


maintask task_12
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		var_31_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_2144(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_2209();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2457(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_2178(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_2158(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2740(var_77_object);
					var_77_object = var_76_object;
					func_2607(var_75_bool, var_76_object);
				}
			} else {
				func_2173(var_31_int);
				func_2200();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2391();
		func_2209();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		@StopGroup0();
		func_2209();
		func_2687("Neutral");
		func_2200();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_2200();
		else
			func_2687("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2391();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2448(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_3347(var_49_object);
			func_2687("Neutral");
			func_2209();
			func_2200();
		}
	}

}


void func_0(object var_0_object, int var_52_int, object var_53_object)
{
	var_0_object = var_53_object;
	bool var_63_bool; object var_64_object;
	var_53_object = var_64_object;
	func_2462(var_63_bool, var_64_object, 70.0);
	if(!var_63_bool) { //@nz
		var_52_int = -2;
		return 8;
	}
	object var_59_object;
	@CreateDialog(var_59_object);
	int var_111_int;
	func_2875(var_111_int);
	var_59_object->SetNPCName(var_111_int);
	int var_112_int;
	func_2873(var_112_int);
	var_59_object->SetNPCDescription(var_112_int);
	string var_113_string;
	func_2877(var_113_string);
	var_59_object->SetPhoto(var_113_string);
	string var_114_string;
	func_2879(var_114_string);
	var_59_object->SetPhoto2(var_114_string);
	int var_115_int;
	func_3330(var_115_int);
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
	func_2740(var_126_object);
	var_126_object = var_125_object;
	func_2549(var_124_bool, var_125_object);
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
	func_2531();
	@StopDialog(var_59_object);
	var_59_object->GetReturnValue(-1);
	int var_61_int = var_52_int;
}
EMIT "Stack[-4] = 0";


void func_2817(bool var_101_bool, string var_102_string, string var_103_string)
{
	object var_105_object;
	@FindActor(var_105_object, var_102_string);
	if(var_105_object == null)
		var_101_bool = false;
	@Trigger(var_105_object, var_103_string);
	var_101_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3074(bool var_394_bool)
{
	int var_396_int;
	func_2767(var_396_int, "k6q01");
	if(var_396_int == 1)
		var_394_bool = true;
	var_394_bool = false;
}


void func_3330(int var_115_int)
{
	int var_117_int;
	@GetVariable("branch", var_117_int);
	if(var_117_int == 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xd11";
	}
	if(var_117_int == 1) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
}


void func_2829(float var_60_float)
{
	float var_62_float;
	@GetGameTime(var_62_float);
	var_62_float = var_60_float;
}


// @pe
void func_3086(bool var_468_bool)
{
	int var_470_int;
	func_2767(var_470_int, "k11q01");
	if(var_470_int == 9)
		var_468_bool = true;
	var_468_bool = false;
}


void func_2320(void)
{
	bool var_44_bool; int var_45_int; int var_46_int; bool var_47_bool;
	@WaitForAnimEnd();
	bool var_48_bool;
	func_2457(var_48_bool);
	if(!var_48_bool) //@nz
		return 12;
	int var_50_int;
	func_2856(var_50_int);
	int var_42_int;
	var_50_int = var_42_int;
	int var_43_int = 0;
	
	for(;;) {
		bool var_63_bool = false;
		if(var_43_int < 5) {
			bool var_66_bool;
			func_2457(var_66_bool);
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
			func_2849(var_77_string, var_78_int);
			@PlayAnimation("all", var_77_string);
			@WaitForAnimEnd(var_47_bool);
			var_79_bool = !var_47_bool; //@nz
			if(var_79_bool == 0) goto Label_2375;
			goto Label_2386;
			}
				Label_2375:
					bool var_70_bool;
					func_2389(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_2381;
			}
		}
	Label_2386:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2381:
		@ResetAAS();
		var_43_int += 1;
	}
	
}


void func_2834(int var_179_int)
{
	float var_181_float;
	@GetGameTime(var_181_float);
	var_179_int = 1 + (var_181_float / 24);
}


// @pe
void func_3347(object var_49_object)
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
	func_2843(var_278_bool, 3);
	if(var_278_bool != 0) {
		int var_281_int; object var_282_object;
		var_49_object = var_282_object;
		TaskCall(2);
		func_249(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 0;
	}
	bool var_352_bool;
	func_2843(var_352_bool, 6);
	if(var_352_bool != 0) {
		int var_354_int; object var_355_object;
		var_49_object = var_355_object;
		TaskCall(4);
		func_730(var_356_object, var_354_int, var_355_object);
		TaskReturn();
		return 0;
	}
	bool var_419_bool;
	func_2843(var_419_bool, 11);
	if(var_419_bool != 0) {
		int var_421_int; object var_422_object;
		var_49_object = var_422_object;
		TaskCall(6);
		func_1197(var_423_object, var_421_int, var_422_object);
		TaskReturn();
		return 0;
	}
	bool var_490_bool;
	func_2843(var_490_bool, 12);
	if(var_490_bool != 0) {
		int var_492_int; object var_493_object;
		var_49_object = var_493_object;
		TaskCall(8);
		func_1588(var_494_object, var_492_int, var_493_object);
		TaskReturn();
		return 0;
	}
	int var_551_int; object var_552_object;
	var_49_object = var_552_object;
	TaskCall(10);
	func_1934(var_553_object, var_551_int, var_552_object);
	TaskReturn();
}


// @pe
void func_2073(object var_2_object, string var_582_string)
{
	bool var_583_bool;
	func_2881(var_583_bool);
	if(!var_583_bool) //@nz
		return 0;
	if(var_582_string == var_2_object)
		return 0;
	string var_586_string; bool var_587_bool;
	var_582_string = var_586_string;
	if(var_582_string == "")
		var_587_bool = false;
	else
		var_587_bool = true;
	func_2703(var_586_string, var_587_bool);
	var_2_object = var_582_string;
	
}


// @pe
void func_3098(bool var_462_bool)
{
	int var_464_int;
	func_2767(var_464_int, "ook11Julia1");
	if(var_464_int == 0) {
		var_462_bool = true;
		return 0;
	}
	var_462_bool = false;
}


// @pe
void func_2843(bool var_278_bool, int var_279_int)
{
	int var_280_int;
	func_2834(var_280_int);
	var_278_bool = var_280_int == var_279_int;
}


void func_2849(string var_56_string, int var_57_int)
{
	string var_59_string = "idle";
	if(var_57_int != 0)
		var_59_string += var_57_int;
	var_59_string = var_56_string;
}


// @pe
void func_3110(bool var_330_bool)
{
	int var_332_int;
	func_2767(var_332_int, "ook3Julia1");
	if(var_332_int == 0) {
		var_330_bool = true;
		return 0;
	}
	var_330_bool = false;
}


void func_2856(int var_50_int)
{
	int var_53_int; bool var_54_bool;
	var_53_int = 0;
	
	for(;;) {
		string var_56_string; int var_57_int;
		var_53_int = var_57_int;
		func_2849(var_56_string, var_57_int);
		@HasAnimation(var_54_bool, "all", var_56_string);
		if(!var_54_bool) //@nz
			break;
		var_53_int += 1;
	}
	var_53_int = var_50_int;
}


// @pe
void func_811(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_378_object, object var_379_object)
{
	var_0_object = var_379_object;
	var_3_string = false;
	if(1 != 0) {
		func_879(var_379_object, "Hope");
		var_0_object->SetMessage(526045); //@t
		var_0_object->ClearReplies(); //@t
		bool var_394_bool;
		func_3074(var_378_object);
		if(var_394_bool != 0)
			var_0_object->AddReply(526046, 27332, 27331); //@t
		var_0_object->AddReply(526063, -1, 27348); //@t
		var_0_object->AddReply(528877, -1, 30300); //@t
		goto Label_849;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x32f";
	}
Label_849:
	bool var_409_bool;
	func_2881(var_409_bool);
	if(var_409_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2687(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_878;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_878:
		return 0;

	}
	
}


void func_2607(bool var_135_bool, object var_136_object)
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
		func_2718(var_158_bool, var_159_string);
		var_158_bool = var_135_bool;
		return 10;

	}
}


void func_3122(void)
{
	object var_118_object;
	@CreateDiaryEntry(var_118_object, 498, 1, 528065);
	bool var_122_bool; object var_123_object;
	var_118_object = var_123_object;
	func_3252(var_122_bool, var_123_object, 480);
}
EMIT "Stack[-1] = 0";


void func_1588(object var_0_object, int var_492_int, object var_493_object)
{
	var_0_object = var_493_object;
	bool var_503_bool; object var_504_object;
	var_493_object = var_504_object;
	func_2462(var_503_bool, var_504_object, 70.0);
	if(!var_503_bool) { //@nz
		var_492_int = -2;
		return 8;
	}
	object var_499_object;
	@CreateDialog(var_499_object);
	int var_507_int;
	func_2875(var_507_int);
	var_499_object->SetNPCName(var_507_int);
	int var_508_int;
	func_2873(var_508_int);
	var_499_object->SetNPCDescription(var_508_int);
	string var_509_string;
	func_2877(var_509_string);
	var_499_object->SetPhoto(var_509_string);
	string var_510_string;
	func_2879(var_510_string);
	var_499_object->SetPhoto2(var_510_string);
	int var_511_int;
	func_3330(var_511_int);
	var_499_object->SetPlayerName(var_511_int);
	bool var_500_bool;
	@IsOverrideActive(var_500_bool);
	if(var_500_bool != 0) {
		var_492_int = -2;
		return 8;
	}
	@DoDialog(var_499_object);
	bool var_513_bool; object var_514_object;
	object var_515_object;
	func_2740(var_515_object);
	var_515_object = var_514_object;
	func_2549(var_513_bool, var_514_object);
	object var_516_object; object var_517_object;
	var_493_object = var_516_object;
	var_499_object = var_517_object;
	TaskCall(9);
	func_1669(var_518_object, var_519_object, var_520_string, var_521_bool, var_516_object, var_517_object);
	TaskReturn();
	bool var_502_bool;
	var_499_object->IsDialogEnd(var_502_bool);
	
	for(;;) {
		var_549_bool = !var_502_bool; //@nz
		if(var_549_bool == 0) goto Label_1658;
		@sync();
		var_499_object->IsDialogEnd(var_502_bool);
	}
	
Label_1658:
	object var_550_object;
	var_493_object = var_550_object;
	func_2531();
	@StopDialog(var_499_object);
	var_499_object->GetReturnValue(-1);
	int var_501_int = var_492_int;
}
EMIT "Stack[-4] = 0";


void func_2873(int var_112_int)
{
	var_112_int = 515537;
}


void func_2875(int var_111_int)
{
	var_111_int = 502862;
}


void func_2877(string var_113_string)
{
	var_113_string = "ui/NPC_Julia.png";
}


void func_3135(void)
{
	object var_108_object;
	@CreateDiaryEntry(var_108_object, 497, 1, 528064);
	bool var_112_bool; object var_113_object;
	var_108_object = var_113_object;
	func_3252(var_112_bool, var_113_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2879(string var_114_string)
{
	var_114_string = "ui/NPC_Julia_b.png";
}


void func_2881(bool var_106_bool)
{
	var_106_bool = true;
}


void func_2883(void)
{
	@SetVariable("k3q02", 2);
	object var_49_object;
	func_3280(var_49_object);
	object var_46_object;
	var_49_object = var_46_object;
	float var_60_float;
	func_2829(var_60_float);
	var_46_object->AddMark("k3q02JuliaGotoEva", "pt_map_eva", 0, 525573, var_60_float);
	func_3213();
}
EMIT "Stack[-1] = 0";


// @pe
void func_1350(object var_2_object, string var_452_string)
{
	bool var_453_bool;
	func_2881(var_453_bool);
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
	func_2703(var_456_string, var_457_bool);
	var_2_object = var_452_string;
	
}


// @pe
void func_330(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_305_object, object var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if(1 != 0) {
		func_402(var_306_object, "Neutral");
		var_0_object->SetMessage(525534); //@t
		var_0_object->ClearReplies(); //@t
		bool var_321_bool = false;
		bool var_322_bool;
		func_3062(var_1_object);
		if(var_322_bool != 0) {
			bool var_330_bool;
			func_3110(var_1_object);
			if(var_330_bool != 0)
				var_321_bool = true;
		}
		if(var_321_bool != 0)
			var_0_object->AddReply(525541, 42712, 26897); //@t
		var_0_object->AddReply(525546, -1, 26902); //@t
		goto Label_372;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x14e";
	}
Label_372:
	bool var_342_bool;
	func_2881(var_342_bool);
	if(var_342_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2687(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_401;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_401:
		return 0;

	}
	
}


void func_3148(void)
{
	object var_98_object;
	@CreateDiaryEntry(var_98_object, 496, 1, 528063);
	bool var_102_bool; object var_103_object;
	var_98_object = var_103_object;
	func_3252(var_102_bool, var_103_object, 480);
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
		var_0_object->SetMessage(525486); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525487, 30760, 26843); //@t
		var_0_object->AddReply(540677, -1, 42710); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_250_bool;
	func_2881(var_250_bool);
	if(var_250_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2687(var_2_object);
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


void func_2644(bool var_166_bool, object var_167_object)
{
	bool var_175_bool; int var_176_int; string var_177_string;
	int var_179_int;
	func_2834(var_179_int);
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
		func_2718(var_198_bool, var_199_string);
		var_198_bool = var_166_bool;
		return 10;

	}
}


void func_2389(bool var_70_bool)
{
	var_70_bool = true;
}


void func_2391(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3161(void)
{
	object var_88_object;
	@CreateDiaryEntry(var_88_object, 495, 1, 528062);
	bool var_92_bool; object var_93_object;
	var_88_object = var_93_object;
	func_3252(var_92_bool, var_93_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2906(void)
{
	@SetVariable("k6q01", 2);
	object var_49_object;
	func_3280(var_49_object);
	object var_46_object;
	var_49_object = var_46_object;
	float var_60_float;
	func_2829(var_60_float);
	var_46_object->AddMark("k6q01IfAnna", "pt_map_anna", 1, 541591, var_60_float);
	float var_67_float;
	func_2829(var_67_float);
	var_46_object->AddMark("k6q01IfEva", "pt_map_eva", 1, 541594, var_67_float);
	float var_72_float;
	func_2829(var_72_float);
	var_46_object->AddMark("k6q01IfLara", "pt_map_lara", 1, 541592, var_72_float);
	float var_77_float;
	func_2829(var_77_float);
	var_46_object->AddMark("k6q01IfOspina", "pt_map_ospina", 1, 541593, var_77_float);
	func_3226();
	bool var_101_bool;
	func_2817(var_101_bool, "quest_k6_01", "place_danko");
}
EMIT "Stack[-1] = 0";


void func_2396(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


void func_2144(object var_0_object)
{
	bool var_32_bool;
	func_2457(var_32_bool);
	if(!var_32_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2320();
	}
}
EMIT "Return(); Pop(0)";


void func_2404(bool var_121_bool, object var_122_object, string var_123_string)
{
	var_128_bool = IsFuncExist(var_122_object, "HasProperty", 2);
	if(!var_128_bool) { //@nz
		var_121_bool = false;
		return 2;
	}
	bool var_125_bool;
	var_122_object->HasProperty(var_123_string, var_125_bool);
	var_125_bool = var_121_bool;
}


void func_3174(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 494, 1, 528061);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_3252(var_82_bool, var_83_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2158(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2448(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_879(object var_2_object, string var_385_string)
{
	bool var_386_bool;
	func_2881(var_386_bool);
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
	func_2703(var_389_string, var_390_bool);
	var_2_object = var_385_string;
	
}


void func_2416(bool var_113_bool, object var_114_object, string var_115_string, float var_116_float, float var_117_float, float var_118_float)
{
	object var_122_object;
	var_114_object = var_122_object;
	string var_123_string;
	var_115_string = var_123_string;
	bool var_121_bool;
	func_2404(var_121_bool, var_122_object, var_123_string);
	if(!var_121_bool) //@nz
		var_113_bool = false;
	float var_120_float;
	var_114_object->GetProperty(var_115_string, var_120_float);
	float var_131_float; float var_133_float; float var_134_float;
	var_117_float = var_133_float;
	var_118_float = var_134_float;
	func_2756(var_131_float, (var_120_float + var_116_float), var_133_float, var_134_float);
	var_114_object->SetProperty(var_115_string, var_131_float);
	var_113_bool = true;
}


void func_3187(void)
{
	object var_53_object;
	@CreateDiaryEntry(var_53_object, 493, 1, 528060);
	bool var_57_bool; object var_58_object;
	var_53_object = var_58_object;
	func_3252(var_57_bool, var_58_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2173(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_2687(string var_252_string)
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


void func_3200(void)
{
	object var_145_object;
	@CreateDiaryEntry(var_145_object, 782, 2, 542095);
	bool var_149_bool; object var_150_object;
	var_145_object = var_150_object;
	func_3252(var_149_bool, var_150_object, 344);
}
EMIT "Stack[-1] = 0";


void func_2178(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2396(var_46_float, var_47_object);
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
void func_1669(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_516_object, object var_517_object)
{
	var_0_object = var_517_object;
	var_1_object = var_516_object;
	var_3_string = false;
	if(1 != 0) {
		func_1732(var_517_object, "Neutral");
		var_0_object->SetMessage(539300); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(542585, 44986, 44985); //@t
		var_0_object->AddReply(539301, -1, 41244); //@t
		var_0_object->AddReply(542584, -1, 44984); //@t
		goto Label_1702;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x689";
	}
Label_1702:
	bool var_541_bool;
	func_2881(var_541_bool);
	if(var_541_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2687(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1731;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1731:
		return 0;

	}
	
}


void func_2438(bool var_39_bool, cvector var_40_cvector)
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
void func_139(object var_2_object, string var_226_string)
{
	bool var_227_bool;
	func_2881(var_227_bool);
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
	func_2703(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	
}


void func_3213(void)
{
	object var_64_object;
	@CreateDiaryEntry(var_64_object, 346, 2, 525568);
	bool var_68_bool; object var_69_object;
	var_64_object = var_69_object;
	func_3252(var_68_bool, var_69_object, 344);
}
EMIT "Stack[-1] = 0";


void func_1934(object var_0_object, int var_551_int, object var_552_object)
{
	var_0_object = var_552_object;
	bool var_562_bool; object var_563_object;
	var_552_object = var_563_object;
	func_2462(var_562_bool, var_563_object, 70.0);
	if(!var_562_bool) { //@nz
		var_551_int = -2;
		return 8;
	}
	object var_558_object;
	@CreateDialog(var_558_object);
	int var_566_int;
	func_2875(var_566_int);
	var_558_object->SetNPCName(var_566_int);
	int var_567_int;
	func_2873(var_567_int);
	var_558_object->SetNPCDescription(var_567_int);
	string var_568_string;
	func_2877(var_568_string);
	var_558_object->SetPhoto(var_568_string);
	string var_569_string;
	func_2879(var_569_string);
	var_558_object->SetPhoto2(var_569_string);
	int var_570_int;
	func_3330(var_570_int);
	var_558_object->SetPlayerName(var_570_int);
	bool var_559_bool;
	@IsOverrideActive(var_559_bool);
	if(var_559_bool != 0) {
		var_551_int = -2;
		return 8;
	}
	@DoDialog(var_558_object);
	bool var_572_bool; object var_573_object;
	object var_574_object;
	func_2740(var_574_object);
	var_574_object = var_573_object;
	func_2549(var_572_bool, var_573_object);
	object var_575_object; object var_576_object;
	var_552_object = var_575_object;
	var_558_object = var_576_object;
	TaskCall(11);
	func_2015(var_577_object, var_578_object, var_579_string, var_580_bool, var_575_object, var_576_object);
	TaskReturn();
	bool var_561_bool;
	var_558_object->IsDialogEnd(var_561_bool);
	
	for(;;) {
		var_605_bool = !var_561_bool; //@nz
		if(var_605_bool == 0) goto Label_2004;
		@sync();
		var_558_object->IsDialogEnd(var_561_bool);
	}
	
Label_2004:
	object var_606_object;
	var_552_object = var_606_object;
	func_2531();
	@StopDialog(var_558_object);
	var_558_object->GetReturnValue(-1);
	int var_560_int = var_551_int;
}
EMIT "Stack[-4] = 0";


void func_2703(string var_230_string, bool var_231_bool)
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


void func_2448(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2438(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


void func_2961(void)
{
	int var_46_int;
	@GetVariable("k11q01SoulCount", var_46_int);
	var_46_int += 1;
	@SetVariable("k11q01SoulCount", var_46_int);
	if(var_46_int == 2) {
		func_3187();
	} else if(var_46_int == 3) {
			func_3174();
	}

	for(;;) {
		return 2;

	}
	
	if(var_46_int == 4) {
		func_3161();
	} else if(var_46_int == 5) {
		func_3148();
	} else if(var_46_int == 6) {
		func_3135();
	} else if(var_46_int == 7) {
		func_3122();
	}
}


// @pe
void func_402(object var_2_object, string var_312_string)
{
	bool var_313_bool;
	func_2881(var_313_bool);
	if(!var_313_bool) //@nz
		return 0;
	if(var_312_string == var_2_object)
		return 0;
	string var_316_string; bool var_317_bool;
	var_312_string = var_316_string;
	if(var_312_string == "")
		var_317_bool = false;
	else
		var_317_bool = true;
	func_2703(var_316_string, var_317_bool);
	var_2_object = var_312_string;
	
}


void func_2200(void)
{
	float var_610_float;
	@rand(var_610_float, 8, 16);
	@SetTimer(10, var_610_float);
}


void func_2457(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


void func_3226(void)
{
	object var_79_object;
	@CreateDiaryEntry(var_79_object, 411, 1, 526112);
	bool var_83_bool; object var_84_object;
	var_79_object = var_84_object;
	func_3252(var_83_bool, var_84_object, 408);
}
EMIT "Stack[-1] = 0";


void func_2718(bool var_158_bool, string var_159_string)
{
	bool var_161_bool;
	bool var_162_bool;
	func_2881(var_162_bool);
	if(var_162_bool != 0) {
		@lshHasSpeech(var_161_bool, var_159_string);
		if(var_161_bool != 0) {
			@lshPlaySpeech(var_159_string);
			var_158_bool = true;
		}
	}
	var_158_bool = false;
}


void func_2462(bool var_63_bool, object var_64_object, float var_65_float)
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
	func_2746(var_90_cvector, (var_79_cvector ^ [0.0, 1.0, 0.0]));
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
	func_2881(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		@HasAnimationTrack(var_83_bool, "head");
		if(var_83_bool == 0) goto Label_2525;
		@LookAsyncCamera("head");
	}
Label_2525:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_63_bool = true;
	
}


void func_2209(void)
{
	@KillTimer(10);
}


void func_3239(object var_66_object)
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


void func_2733(void)
{
	bool var_34_bool;
	func_2881(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


void func_1197(object var_0_object, int var_421_int, object var_422_object)
{
	var_0_object = var_422_object;
	bool var_432_bool; object var_433_object;
	var_422_object = var_433_object;
	func_2462(var_432_bool, var_433_object, 70.0);
	if(!var_432_bool) { //@nz
		var_421_int = -2;
		return 8;
	}
	object var_428_object;
	@CreateDialog(var_428_object);
	int var_436_int;
	func_2875(var_436_int);
	var_428_object->SetNPCName(var_436_int);
	int var_437_int;
	func_2873(var_437_int);
	var_428_object->SetNPCDescription(var_437_int);
	string var_438_string;
	func_2877(var_438_string);
	var_428_object->SetPhoto(var_438_string);
	string var_439_string;
	func_2879(var_439_string);
	var_428_object->SetPhoto2(var_439_string);
	int var_440_int;
	func_3330(var_440_int);
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
	func_2740(var_444_object);
	var_444_object = var_443_object;
	func_2549(var_442_bool, var_443_object);
	object var_445_object; object var_446_object;
	var_422_object = var_445_object;
	var_428_object = var_446_object;
	TaskCall(7);
	func_1278(var_447_object, var_448_object, var_449_string, var_450_bool, var_445_object, var_446_object);
	TaskReturn();
	bool var_431_bool;
	var_428_object->IsDialogEnd(var_431_bool);
	
	for(;;) {
		var_488_bool = !var_431_bool; //@nz
		if(var_488_bool == 0) goto Label_1267;
		@sync();
		var_428_object->IsDialogEnd(var_431_bool);
	}
	
Label_1267:
	object var_489_object;
	var_422_object = var_489_object;
	func_2531();
	@StopDialog(var_428_object);
	var_428_object->GetReturnValue(-1);
	int var_430_int = var_421_int;
}
EMIT "Stack[-4] = 0";


void func_2740(object var_126_object)
{
	object var_128_object;
	@self(var_128_object);
	var_128_object = var_126_object;
}
EMIT "Stack[-1] = 0";


void func_3252(bool var_57_bool, object var_58_object, int var_59_int)
{
	object var_66_object;
	func_3239(var_66_object);
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


void func_2746(cvector var_90_cvector, cvector var_91_cvector)
{
	float var_94_float = sqrt(var_91_cvector | var_91_cvector);
	if(var_94_float < 0.000001)
		var_90_cvector = [0.0, 0.0, 0.0];
	var_90_cvector = var_91_cvector / var_94_float;
}


// @pe
void func_1732(object var_2_object, string var_523_string)
{
	bool var_524_bool;
	func_2881(var_524_bool);
	if(!var_524_bool) //@nz
		return 0;
	if(var_523_string == var_2_object)
		return 0;
	string var_527_string; bool var_528_bool;
	var_523_string = var_527_string;
	if(var_523_string == "")
		var_528_bool = false;
	else
		var_528_bool = true;
	func_2703(var_527_string, var_528_bool);
	var_2_object = var_523_string;
	
}


// @pe
void func_2756(float var_131_float, float var_132_float, float var_133_float, float var_134_float)
{
	if(var_132_float < var_133_float) {
		var_133_float = var_131_float;
		return 0;
	}
	if(var_132_float > var_134_float) {
		var_134_float = var_131_float;
		return 0;
	}
	var_132_float = var_131_float;
}


// @pe
void func_3012(void)
{
	@SetVariable("ook11Julia1", 1);
}


// @pe
void func_3018(void)
{
	@SetVariable("ook3Julia1", 1);
}


void func_2767(int var_324_int, string var_325_string)
{
	int var_327_int;
	@GetVariable(var_325_string, var_327_int);
	var_327_int = var_324_int;
}


void func_3280(object var_49_object)
{
	object var_52_object; object var_53_object;
	@GetMainOutdoorScene(var_52_object);
	if(var_52_object == null) {
		@Trace("Can't find main outdoor scene");
		var_53_object = null;
		var_53_object = var_49_object;
	}
	var_52_object->GetMap(var_53_object);
	var_53_object = var_49_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3024(object var_108_object)
{
	object var_112_object;
	func_3280(var_112_object);
	object var_109_object;
	var_112_object = var_109_object;
	func_3297(var_109_object, "pt_map_theater", (float)1);
	object var_132_object;
	func_3280(var_132_object);
	var_108_object->ShowMap(var_132_object);
}


// @pe
void func_2772(bool var_102_bool, object var_103_object, float var_104_float)
{
	if(!var_103_object) { //@nz
		var_102_bool = false;
		return 0;
	}
	if(var_104_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_104_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_109_float;
		var_104_float = var_109_float;
		func_2807(var_109_float);
		bool var_113_bool; object var_114_object; float var_116_float;
		var_103_object = var_114_object;
		var_104_float = var_116_float;
		func_2416(var_113_bool, var_114_object, "reputation", var_116_float, (float)0, (float)1);
		var_102_bool = true;
		return 0;

	}
	
	var_102_bool = false;
}


void func_730(object var_0_object, int var_354_int, object var_355_object)
{
	var_0_object = var_355_object;
	bool var_365_bool; object var_366_object;
	var_355_object = var_366_object;
	func_2462(var_365_bool, var_366_object, 70.0);
	if(!var_365_bool) { //@nz
		var_354_int = -2;
		return 8;
	}
	object var_361_object;
	@CreateDialog(var_361_object);
	int var_369_int;
	func_2875(var_369_int);
	var_361_object->SetNPCName(var_369_int);
	int var_370_int;
	func_2873(var_370_int);
	var_361_object->SetNPCDescription(var_370_int);
	string var_371_string;
	func_2877(var_371_string);
	var_361_object->SetPhoto(var_371_string);
	string var_372_string;
	func_2879(var_372_string);
	var_361_object->SetPhoto2(var_372_string);
	int var_373_int;
	func_3330(var_373_int);
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
	func_2740(var_377_object);
	var_377_object = var_376_object;
	func_2549(var_375_bool, var_376_object);
	object var_378_object; object var_379_object;
	var_355_object = var_378_object;
	var_361_object = var_379_object;
	TaskCall(5);
	func_811(var_380_object, var_381_object, var_382_string, var_383_bool, var_378_object, var_379_object);
	TaskReturn();
	bool var_364_bool;
	var_361_object->IsDialogEnd(var_364_bool);
	
	for(;;) {
		var_417_bool = !var_364_bool; //@nz
		if(var_417_bool == 0) goto Label_800;
		@sync();
		var_361_object->IsDialogEnd(var_364_bool);
	}
	
Label_800:
	object var_418_object;
	var_355_object = var_418_object;
	func_2531();
	@StopDialog(var_361_object);
	var_361_object->GetReturnValue(-1);
	int var_363_int = var_354_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2015(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_575_object, object var_576_object)
{
	var_0_object = var_576_object;
	var_1_object = var_575_object;
	var_3_string = false;
	if(1 != 0) {
		func_2073(var_576_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_2043;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7e3";
	}
Label_2043:
	bool var_597_bool;
	func_2881(var_597_bool);
	if(var_597_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2687(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2072;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2072:
		return 0;

	}
	
}


// @pe
void func_3040(void)
{
	@SetVariable("k3q02", -1);
	func_3200();
}


void func_3297(object var_109_object, string var_110_string, float var_111_float)
{
	object var_119_object;
	@GetMainOutdoorScene(var_119_object);
	if(var_119_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_117_cvector;
	cvector var_118_cvector;
	bool var_120_bool;
	var_119_object->GetLocator(var_110_string, var_120_bool, var_117_cvector, var_118_cvector);
	if(!var_120_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_110_string) + " doesnt exist");
	var_119_object->GetMap(var_109_object);
	if(var_109_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_130_float = GetByIndex(var_117_cvector, 0);
	var_131_float = GetByIndex(var_117_cvector, 2);
	var_109_object->SetMapParams(var_130_float, var_131_float, var_111_float);
}
EMIT "Stack[-2] = 0";


void func_2531(void)
{
	bool var_271_bool;
	@CameraSwitchToNormal(true);
	bool var_273_bool;
	func_2881(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		@HasAnimationTrack(var_271_bool, "head");
		if(var_271_bool == 0) goto Label_2548;
		@UnlookAsync("head");
	}
Label_2548:
	
}


// @pe
void func_3049(void)
{
	@SetVariable("k6StopKaterinaTalks", 1);
}


// @pe
void func_3055(object var_100_object)
{
	object var_103_object;
	var_100_object = var_103_object;
	bool var_102_bool;
	func_2772(var_102_bool, var_103_object, 0.3);
}


void func_2549(bool var_124_bool, object var_125_object)
{
	int var_131_int; int var_132_int;
	@GetVariable("voice_common", var_131_int);
	if(var_131_int != 0) {
		bool var_135_bool; object var_136_object;
		var_125_object = var_136_object;
		func_2607(var_135_bool, var_136_object);
		if(!var_135_bool) { //@nz
			bool var_166_bool; object var_167_object;
			var_125_object = var_167_object;
			func_2644(var_166_bool, var_167_object);
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
		func_2644(var_211_bool, var_212_object);
		if(!var_211_bool) { //@nz
			bool var_214_bool; object var_215_object;
			var_125_object = var_215_object;
			func_2607(var_214_bool, var_215_object);
			if(!var_214_bool) { //@nz
				var_124_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2605;
	
Label_2605:
	var_124_bool = true;
	
}


// @pe
void func_3062(bool var_322_bool)
{
	int var_324_int;
	func_2767(var_324_int, "k3q02");
	if(var_324_int == 1)
		var_322_bool = true;
	var_322_bool = false;
}


void func_2807(float var_109_float)
{
	object var_111_object;
	@CreateFloatVector(var_111_object);
	var_111_object->add(var_109_float);
	@SendWorldWndMessage(16, var_111_object);
}
EMIT "Stack[-1] = 0";


void func_249(object var_0_object, int var_281_int, object var_282_object)
{
	var_0_object = var_282_object;
	bool var_292_bool; object var_293_object;
	var_282_object = var_293_object;
	func_2462(var_292_bool, var_293_object, 70.0);
	if(!var_292_bool) { //@nz
		var_281_int = -2;
		return 8;
	}
	object var_288_object;
	@CreateDialog(var_288_object);
	int var_296_int;
	func_2875(var_296_int);
	var_288_object->SetNPCName(var_296_int);
	int var_297_int;
	func_2873(var_297_int);
	var_288_object->SetNPCDescription(var_297_int);
	string var_298_string;
	func_2877(var_298_string);
	var_288_object->SetPhoto(var_298_string);
	string var_299_string;
	func_2879(var_299_string);
	var_288_object->SetPhoto2(var_299_string);
	int var_300_int;
	func_3330(var_300_int);
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
	func_2740(var_304_object);
	var_304_object = var_303_object;
	func_2549(var_302_bool, var_303_object);
	object var_305_object; object var_306_object;
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(3);
	func_330(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	bool var_291_bool;
	var_288_object->IsDialogEnd(var_291_bool);
	
	for(;;) {
		var_350_bool = !var_291_bool; //@nz
		if(var_350_bool == 0) goto Label_319;
		@sync();
		var_288_object->IsDialogEnd(var_291_bool);
	}
	
Label_319:
	object var_351_object;
	var_282_object = var_351_object;
	func_2531();
	@StopDialog(var_288_object);
	var_288_object->GetReturnValue(-1);
	int var_290_int = var_281_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1278(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_445_object, object var_446_object)
{
	var_0_object = var_446_object;
	var_1_object = var_445_object;
	var_3_string = false;
	if(1 != 0) {
		func_1350(var_446_object, "Neutral");
		var_0_object->SetMessage(527568); //@t
		var_0_object->ClearReplies(); //@t
		bool var_461_bool = false;
		bool var_462_bool;
		func_3098(var_1_object);
		if(var_462_bool != 0) {
			bool var_468_bool;
			func_3086(var_1_object);
			if(var_468_bool != 0)
				var_461_bool = true;
		}
		if(var_461_bool != 0)
			var_0_object->AddReply(527570, 28913, 28912); //@t
		var_0_object->AddReply(527569, -1, 28911); //@t
		goto Label_1320;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x502";
	}
Label_1320:
	bool var_480_bool;
	func_2881(var_480_bool);
	if(var_480_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2687(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1349;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1349:
		return 0;

	}
	
}


