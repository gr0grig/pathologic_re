// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4655();
			if(var_42_cvector == 26100) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4897();
				object var_98_object = var_1_object;
				func_4856(var_0_object);
			}
			if(var_42_cvector == 26104) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_4897();
				object var_128_object = var_1_object;
				func_4856(var_0_object);
			}
			if(var_42_cvector == 44350) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_4923();
				object var_144_object = var_1_object;
				func_4872(var_0_object);
			}
			if(var_42_cvector == 26113) {
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_4923();
				object var_188_object = var_1_object;
				func_5157(var_0_object);
				object var_209_object; object var_210_object;
				var_209_object = var_1_object;
				var_210_object = var_0_object;
				func_5145();
			}
			if(var_41_bool == 26029) {
				bool var_215_bool = false;
				bool var_216_bool;
				func_5173(var_1_object);
				if(var_216_bool != 0) {
					bool var_224_bool;
					func_5185(var_1_object);
					if(var_224_bool != 0)
						var_215_bool = true;
				}
				if(var_215_bool != 0) {
					object var_230_object; object var_231_object;
					var_230_object = var_1_object;
					var_231_object = var_0_object;
					func_4879();
					func_272(var_42_cvector, "Fear");
					var_0_object->SetMessage(524690); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524691, 28130, 26030); //@t
					var_0_object->AddReply(542043, 44323, 44322); //@t
					return 0;
				}
				bool var_258_bool = false;
				bool var_259_bool;
				func_5197(var_1_object);
				if(var_259_bool != 0) {
					bool var_265_bool;
					func_5209(var_1_object);
					if(var_265_bool != 0)
						var_258_bool = true;
				}
				if(var_258_bool != 0) {
					object var_271_object; object var_272_object;
					var_271_object = var_1_object;
					var_272_object = var_0_object;
					func_4885();
					func_272(var_42_cvector, "Neutral");
					var_0_object->SetMessage(524707); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524708, 28139, 26047); //@t
					var_0_object->AddReply(542053, 28139, 44336); //@t
					return 0;
				}
				bool var_283_bool;
				func_5221(var_1_object);
				if(var_283_bool != 0) {
					object var_289_object; object var_290_object;
					var_289_object = var_1_object;
					var_290_object = var_0_object;
					func_4891();
					func_272(var_42_cvector, "Fear");
					var_0_object->SetMessage(524780); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526860, 28146, 28145); //@t
					var_0_object->AddReply(542054, 28146, 44338); //@t
					return 0;
				}
				func_272(var_42_cvector, "Dream");
				var_0_object->SetMessage(524709); //@t
				var_0_object->ClearReplies(); //@t
				bool var_303_bool = false;
				bool var_304_bool;
				func_5233(var_1_object);
				if(var_304_bool != 0) {
					bool var_310_bool;
					func_5221(var_1_object);
					if(!var_310_bool) //@nz
						var_303_bool = true;
				}
				if(var_303_bool != 0)
					var_0_object->AddReply(524787, 26103, 26102); //@t
				bool var_316_bool;
				func_5245(var_1_object);
				if(var_316_bool != 0)
					var_0_object->AddReply(524796, 28156, 26111); //@t
				var_0_object->AddReply(524710, -1, 26049); //@t
				return 0;
			}
			if(var_41_bool == 28156) {
				func_272(var_42_cvector, "Adoration");
				var_0_object->SetMessage(526870); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526871, 44381, 28157); //@t
				var_0_object->AddReply(542072, 44363, 44362); //@t
				var_0_object->AddReply(526872, 28155, 28158); //@t
				return 0;
			}
			if(var_41_bool == 44363) {
				func_272(var_42_cvector, "Adoration");
				var_0_object->SetMessage(542073); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542077, 26112, 44367); //@t
				var_0_object->AddReply(542078, 26112, 44368); //@t
				return 0;
			}
			if(var_41_bool == 44381) {
				var_0_object->SetMessage(542087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542088, 26112, 44382); //@t
				var_0_object->AddReply(542090, 26112, 44384); //@t
				return 0;
			}
			if(var_41_bool == 26112) {
				func_272(var_42_cvector, "Rage");
				var_0_object->SetMessage(524797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526868, 28155, 28154); //@t
				return 0;
			}
			if(var_41_bool == 28155) {
				func_272(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526869); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542062, -1, 44350); //@t
				var_0_object->AddReply(542091, 44390, 44389); //@t
				return 0;
			}
			if(var_41_bool == 44390) {
				func_272(var_42_cvector, "Adoration");
				var_0_object->SetMessage(542092); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524798, -1, 26113); //@t
				return 0;
			}
			if(var_41_bool == 26103) {
				func_272(var_42_cvector, "Adoration");
				var_0_object->SetMessage(524788); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524789, -1, 26104); //@t
				return 0;
			}
			if(var_41_bool == 28146) {
				func_272(var_42_cvector, "Fear");
				var_0_object->SetMessage(526861); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542064, 44355, 44352); //@t
				var_0_object->AddReply(542069, 44355, 44357); //@t
				var_0_object->AddReply(542070, 44364, 44358); //@t
				return 0;
			}
			if(var_41_bool == 44364) {
				func_272(var_42_cvector, "Dream");
				var_0_object->SetMessage(542074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542075, -1, 44365); //@t
				var_0_object->AddReply(542076, -1, 44366); //@t
				return 0;
			}
			if(var_41_bool == 44355) {
				func_272(var_42_cvector, "Rage");
				var_0_object->SetMessage(542067); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542068, 44353, 44356); //@t
				var_0_object->AddReply(542071, 44353, 44359); //@t
				return 0;
			}
			if(var_41_bool == 44353) {
				func_272(var_42_cvector, "Rage");
				var_0_object->SetMessage(542065); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526862, 28148, 28147); //@t
				var_0_object->AddReply(526865, 28148, 28150); //@t
				return 0;
			}
			if(var_41_bool == 28148) {
				func_272(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524783, 26099, 26098); //@t
				var_0_object->AddReply(542056, 26099, 44341); //@t
				return 0;
			}
			if(var_41_bool == 26099) {
				func_272(var_42_cvector, "Neutral");
				var_0_object->SetMessage(524784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524785, -1, 26100); //@t
				var_0_object->AddReply(524786, -1, 26101); //@t
				return 0;
			}
			if(var_41_bool == 28139) {
				func_272(var_42_cvector, "Adoration");
				var_0_object->SetMessage(526854); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526855, 28142, 28140); //@t
				var_0_object->AddReply(526856, -1, 28141); //@t
				return 0;
			}
			if(var_41_bool == 28142) {
				func_272(var_42_cvector, "Adoration");
				var_0_object->SetMessage(526857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526858, -1, 28143); //@t
				var_0_object->AddReply(526859, -1, 28144); //@t
				return 0;
			}
			if(var_41_bool == 44323) {
				func_272(var_42_cvector, "Dream");
				var_0_object->SetMessage(542044); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542045, 44327, 44324); //@t
				var_0_object->AddReply(542046, 28132, 44325); //@t
				return 0;
			}
			if(var_41_bool == 28130) {
				func_272(var_42_cvector, "Rage");
				var_0_object->SetMessage(526845); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526846, 28132, 28131); //@t
				var_0_object->AddReply(542047, 44327, 44326); //@t
				return 0;
			}
			if(var_41_bool == 44327) {
				func_272(var_42_cvector, "Dream");
				var_0_object->SetMessage(542048); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542050, 44333, 44331); //@t
				return 0;
			}
			if(var_41_bool == 44333) {
				func_272(var_42_cvector, "Neutral");
				var_0_object->SetMessage(542051); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542052, 28134, 44334); //@t
				return 0;
			}
			if(var_41_bool == 28132) {
				func_272(var_42_cvector, "Rage");
				var_0_object->SetMessage(526847); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526848, 28134, 28133); //@t
				return 0;
			}
			if(var_41_bool == 28134) {
				func_272(var_42_cvector, "Rage");
				var_0_object->SetMessage(526849); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526850, 28136, 28135); //@t
				return 0;
			}
			if(var_41_bool == 28136) {
				func_272(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526852, -1, 28137); //@t
				var_0_object->AddReply(526853, -1, 28138); //@t
				return 0;
			}
			var_3_string = true;
			bool var_532_bool;
			func_4854(var_532_bool);
			if(var_532_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x127";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4655();
			if(var_42_cvector == 26722) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4932();
			}
			if(var_42_cvector == 26725) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_4973();
				object var_114_object = var_1_object;
				func_4982(var_0_object);
				object var_138_object = var_1_object;
				func_4993(var_0_object);
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_5151();
			}
			if(var_42_cvector == 43965) {
				object var_150_object; object var_151_object;
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_4973();
				object var_152_object = var_1_object;
				func_4982(var_0_object);
				object var_154_object = var_1_object;
				func_4993(var_0_object);
				object var_156_object; object var_157_object;
				var_156_object = var_1_object;
				var_157_object = var_0_object;
				func_5151();
			}
			if(var_42_cvector == 43966) {
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_4973();
				object var_162_object = var_1_object;
				func_4982(var_0_object);
				object var_164_object = var_1_object;
				func_4993(var_0_object);
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_5151();
			}
			if(var_41_bool == 26714) {
				func_1162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525346); //@t
				var_0_object->ClearReplies(); //@t
				bool var_188_bool;
				func_5257(var_1_object);
				if(var_188_bool != 0)
					var_0_object->AddReply(525348, 44408, 26716); //@t
				bool var_199_bool;
				func_5269(var_1_object);
				if(var_199_bool != 0)
					var_0_object->AddReply(541760, 43964, 43963); //@t
				var_0_object->AddReply(525347, -1, 26715); //@t
				var_0_object->AddReply(529145, -1, 30591); //@t
				return 0;
			}
			if(var_41_bool == 43964) {
				func_1162(var_42_cvector, "Fear");
				var_0_object->SetMessage(541761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541762, -1, 43965); //@t
				var_0_object->AddReply(541763, -1, 43966); //@t
				return 0;
			}
			if(var_41_bool == 44408) {
				func_1162(var_42_cvector, "Rage");
				var_0_object->SetMessage(542106); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542107, 44410, 44409); //@t
				var_0_object->AddReply(542110, 30593, 44412); //@t
				return 0;
			}
			if(var_41_bool == 44410) {
				func_1162(var_42_cvector, "Rage");
				var_0_object->SetMessage(542108); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542109, 26717, 44411); //@t
				var_0_object->AddReply(542111, 30593, 44414); //@t
				return 0;
			}
			if(var_41_bool == 26717) {
				func_1162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525349); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529146, 30593, 30592); //@t
				var_0_object->AddReply(529150, 30593, 30596); //@t
				return 0;
			}
			if(var_41_bool == 30593) {
				func_1162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(529147); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529148, 30595, 30594); //@t
				return 0;
			}
			if(var_41_bool == 30595) {
				func_1162(var_42_cvector, "Adoration");
				var_0_object->SetMessage(529149); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525350, 26719, 26718); //@t
				var_0_object->AddReply(542112, 26721, 44416); //@t
				return 0;
			}
			if(var_41_bool == 26719) {
				func_1162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525351); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525352, 26721, 26720); //@t
				var_0_object->AddReply(525355, 26724, 26723); //@t
				return 0;
			}
			if(var_41_bool == 26724) {
				func_1162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525357, -1, 26725); //@t
				return 0;
			}
			if(var_41_bool == 26721) {
				func_1162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525354, -1, 26722); //@t
				return 0;
			}
			var_3_string = true;
			bool var_295_bool;
			func_4854(var_295_bool);
			if(var_295_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4a1";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4655();
			if(var_42_cvector == 26779) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_5004();
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_5167();
			}
			if(var_42_cvector == 40921) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_5004();
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_5167();
			}
			if(var_42_cvector == 26801) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_5036();
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_5167();
			}
			if(var_42_cvector == 26922) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_5045();
			}
			if(var_42_cvector == 26924) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_5051();
			}
			if(var_41_bool == 26810) {
				bool var_159_bool;
				func_5317(var_1_object);
				if(var_159_bool != 0) {
					func_1727(var_42_cvector, "Neutral");
					var_0_object->SetMessage(525442); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525443, -1, 26811); //@t
					var_0_object->AddReply(529337, -1, 30792); //@t
					return 0;
				}
				func_1727(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525406); //@t
				var_0_object->ClearReplies(); //@t
				bool var_193_bool;
				func_5281(var_1_object);
				if(var_193_bool != 0)
					var_0_object->AddReply(525407, 26776, 26775); //@t
				bool var_202_bool = false;
				bool var_203_bool;
				func_5305(var_1_object);
				if(var_203_bool != 0) {
					bool var_209_bool;
					func_5293(var_1_object);
					if(var_209_bool != 0)
						var_202_bool = true;
				}
				if(var_202_bool != 0)
					var_0_object->AddReply(525425, 40970, 26793); //@t
				bool var_218_bool = false;
				bool var_219_bool;
				func_5341(var_1_object);
				if(var_219_bool != 0) {
					bool var_225_bool;
					func_5329(var_1_object);
					if(var_225_bool != 0)
						var_218_bool = true;
				}
				if(var_218_bool != 0)
					var_0_object->AddReply(525575, 26923, 26922); //@t
				var_0_object->AddReply(525412, -1, 26780); //@t
				var_0_object->AddReply(538971, -1, 40909); //@t
				return 0;
			}
			if(var_41_bool == 26923) {
				func_1727(var_42_cvector, "Adoration");
				var_0_object->SetMessage(525576); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538918, 40872, 40871); //@t
				var_0_object->AddReply(538922, 40872, 40875); //@t
				return 0;
			}
			if(var_41_bool == 40872) {
				func_1727(var_42_cvector, "Dream");
				var_0_object->SetMessage(538919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538920, 40874, 40873); //@t
				return 0;
			}
			if(var_41_bool == 40874) {
				func_1727(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539033, 40975, 40974); //@t
				var_0_object->AddReply(539035, 40975, 40976); //@t
				return 0;
			}
			if(var_41_bool == 40975) {
				func_1727(var_42_cvector, "Dream");
				var_0_object->SetMessage(539034); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538923, 40878, 40877); //@t
				var_0_object->AddReply(538925, 40878, 40879); //@t
				return 0;
			}
			if(var_41_bool == 40878) {
				func_1727(var_42_cvector, "Dream");
				var_0_object->SetMessage(538924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525577, -1, 26924); //@t
				var_0_object->AddReply(525614, -1, 26961); //@t
				return 0;
			}
			if(var_41_bool == 40970) {
				func_1727(var_42_cvector, "Rage");
				var_0_object->SetMessage(539029); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539030, 26794, 40971); //@t
				var_0_object->AddReply(539031, 26794, 40972); //@t
				return 0;
			}
			if(var_41_bool == 26794) {
				func_1727(var_42_cvector, "Fear");
				var_0_object->SetMessage(525426); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525427, 40979, 26795); //@t
				return 0;
			}
			if(var_41_bool == 40979) {
				func_1727(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539036); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539037, 40982, 40980); //@t
				var_0_object->AddReply(539038, 40983, 40981); //@t
				return 0;
			}
			if(var_41_bool == 40983) {
				func_1727(var_42_cvector, "Rage");
				var_0_object->SetMessage(539040); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539046, 40991, 40990); //@t
				var_0_object->AddReply(539048, 40996, 40992); //@t
				return 0;
			}
			if(var_41_bool == 40991) {
				func_1727(var_42_cvector, "Rage");
				var_0_object->SetMessage(539047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539041, 40996, 40984); //@t
				return 0;
			}
			if(var_41_bool == 40996) {
				func_1727(var_42_cvector, "Dream");
				var_0_object->SetMessage(539051); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539052, 40999, 40998); //@t
				return 0;
			}
			if(var_41_bool == 40999) {
				func_1727(var_42_cvector, "Dream");
				var_0_object->SetMessage(539053); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539054, 26796, 41000); //@t
				var_0_object->AddReply(539056, 26798, 41003); //@t
				return 0;
			}
			if(var_41_bool == 40982) {
				func_1727(var_42_cvector, "Dream");
				var_0_object->SetMessage(539039); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539044, 40988, 40987); //@t
				return 0;
			}
			if(var_41_bool == 40988) {
				func_1727(var_42_cvector, "Rage");
				var_0_object->SetMessage(539045); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539049, 40983, 40993); //@t
				var_0_object->AddReply(539050, 26796, 40994); //@t
				return 0;
			}
			if(var_41_bool == 26796) {
				func_1727(var_42_cvector, "Dream");
				var_0_object->SetMessage(525428); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525429, 26798, 26797); //@t
				var_0_object->AddReply(539071, 41020, 41019); //@t
				return 0;
			}
			if(var_41_bool == 41020) {
				func_1727(var_42_cvector, "Dream");
				var_0_object->SetMessage(539072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539073, 26798, 41021); //@t
				return 0;
			}
			if(var_41_bool == 26798) {
				func_1727(var_42_cvector, "Dream");
				var_0_object->SetMessage(525430); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525431, 26800, 26799); //@t
				return 0;
			}
			if(var_41_bool == 26800) {
				func_1727(var_42_cvector, "Fear");
				var_0_object->SetMessage(525432); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538913, 40867, 40866); //@t
				var_0_object->AddReply(539074, 41024, 41023); //@t
				return 0;
			}
			if(var_41_bool == 41024) {
				func_1727(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539075); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539076, 41026, 41025); //@t
				return 0;
			}
			if(var_41_bool == 41026) {
				func_1727(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539078, 41029, 41027); //@t
				return 0;
			}
			if(var_41_bool == 41029) {
				func_1727(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539080); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539081, 41028, 41030); //@t
				return 0;
			}
			if(var_41_bool == 40867) {
				func_1727(var_42_cvector, "Fear");
				var_0_object->SetMessage(538914); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525434, 41028, 26802); //@t
				var_0_object->AddReply(538915, 41028, 40868); //@t
				return 0;
			}
			if(var_41_bool == 41028) {
				func_1727(var_42_cvector, "Fear");
				var_0_object->SetMessage(539079); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525433, -1, 26801); //@t
				bool var_437_bool;
				func_5317(var_1_object);
				if(var_437_bool != 0)
					var_0_object->AddReply(538917, -1, 40870); //@t
				return 0;
			}
			if(var_41_bool == 26776) {
				func_1727(var_42_cvector, "Fear");
				var_0_object->SetMessage(525408); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525409, 40903, 26777); //@t
				return 0;
			}
			if(var_41_bool == 40903) {
				func_1727(var_42_cvector, "Fear");
				var_0_object->SetMessage(538965); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538966, 40905, 40904); //@t
				var_0_object->AddReply(538972, 40905, 40910); //@t
				return 0;
			}
			if(var_41_bool == 40905) {
				func_1727(var_42_cvector, "Dream");
				var_0_object->SetMessage(538967); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538968, 40907, 40906); //@t
				return 0;
			}
			if(var_41_bool == 40907) {
				func_1727(var_42_cvector, "Dream");
				var_0_object->SetMessage(538969); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538970, 40912, 40908); //@t
				return 0;
			}
			if(var_41_bool == 40912) {
				func_1727(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538974, 40914, 40913); //@t
				var_0_object->AddReply(538977, 40917, 40916); //@t
				return 0;
			}
			if(var_41_bool == 40917) {
				func_1727(var_42_cvector, "Fear");
				var_0_object->SetMessage(538978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538979, 40914, 40918); //@t
				return 0;
			}
			if(var_41_bool == 40914) {
				func_1727(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538975); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525411, -1, 26779); //@t
				var_0_object->AddReply(538980, 26778, 40920); //@t
				return 0;
			}
			if(var_41_bool == 26778) {
				func_1727(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525410); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538981, -1, 40921); //@t
				return 0;
			}
			var_3_string = true;
			bool var_507_bool;
			func_4854(var_507_bool);
			if(var_507_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6d6";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4655();
			if(var_41_bool == 26821) {
				func_2701(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525465); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526257, 27533, 27531); //@t
				var_0_object->AddReply(525466, -1, 26822); //@t
				return 0;
			}
			if(var_41_bool == 27533) {
				func_2701(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526259); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526260, -1, 27534); //@t
				var_0_object->AddReply(526261, -1, 27535); //@t
				return 0;
			}
			var_3_string = true;
			bool var_81_bool;
			func_4854(var_81_bool);
			if(var_81_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaa4";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4655();
			if(var_42_cvector == 27372) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_5077();
			}
			if(var_42_cvector == 27374) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_5083();
			}
			if(var_42_cvector == 43967) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_5083();
			}
			if(var_41_bool == 27371) {
				func_2955(var_42_cvector, "Fear");
				var_0_object->SetMessage(526085); //@t
				var_0_object->ClearReplies(); //@t
				bool var_102_bool = false;
				bool var_103_bool = false;
				bool var_104_bool;
				func_5353(var_1_object);
				if(var_104_bool != 0) {
					bool var_112_bool;
					func_5365(var_1_object);
					if(var_112_bool != 0)
						var_103_bool = true;
				}
				if(var_103_bool != 0) {
					bool var_118_bool;
					func_5377(var_1_object);
					if(var_118_bool != 0)
						var_102_bool = true;
				}
				if(var_102_bool != 0)
					var_0_object->AddReply(526086, 27373, 27372); //@t
				var_0_object->AddReply(526089, -1, 27375); //@t
				var_0_object->AddReply(528861, -1, 30283); //@t
				return 0;
			}
			if(var_41_bool == 27373) {
				func_2955(var_42_cvector, "Fear");
				var_0_object->SetMessage(526087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528862, 30285, 30284); //@t
				return 0;
			}
			if(var_41_bool == 30285) {
				func_2955(var_42_cvector, "Dream");
				var_0_object->SetMessage(528863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526088, -1, 27374); //@t
				var_0_object->AddReply(541764, -1, 43967); //@t
				return 0;
			}
			var_3_string = true;
			bool var_150_bool;
			func_4854(var_150_bool);
			if(var_150_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xba2";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4655();
			if(var_42_cvector == 28892) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_5139();
			}
			if(var_42_cvector == 28904) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_5088();
			}
			if(var_41_bool == 28889) {
				func_3265(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527548); //@t
				var_0_object->ClearReplies(); //@t
				bool var_155_bool = false;
				bool var_156_bool;
				func_5389(var_1_object);
				if(var_156_bool != 0) {
					bool var_164_bool;
					func_5401(var_1_object);
					if(var_164_bool != 0)
						var_155_bool = true;
				}
				if(var_155_bool != 0)
					var_0_object->AddReply(527551, 28893, 28892); //@t
				var_0_object->AddReply(527550, -1, 28891); //@t
				return 0;
			}
			if(var_41_bool == 28893) {
				func_3265(var_42_cvector, "Dream");
				var_0_object->SetMessage(527552); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527553, 28895, 28894); //@t
				var_0_object->AddReply(527564, 28906, 28905); //@t
				return 0;
			}
			if(var_41_bool == 28906) {
				func_3265(var_42_cvector, "Dream");
				var_0_object->SetMessage(527565); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527566, 28897, 28907); //@t
				return 0;
			}
			if(var_41_bool == 28895) {
				func_3265(var_42_cvector, "Rage");
				var_0_object->SetMessage(527554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527555, 28897, 28896); //@t
				return 0;
			}
			if(var_41_bool == 28897) {
				func_3265(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527556); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527557, 28899, 28898); //@t
				return 0;
			}
			if(var_41_bool == 28899) {
				func_3265(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527558); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527559, 28901, 28900); //@t
				return 0;
			}
			if(var_41_bool == 28901) {
				func_3265(var_42_cvector, "Adoration");
				var_0_object->SetMessage(527560); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527561, 28903, 28902); //@t
				return 0;
			}
			if(var_41_bool == 28903) {
				func_3265(var_42_cvector, "Adoration");
				var_0_object->SetMessage(527562); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527563, -1, 28904); //@t
				return 0;
			}
			var_3_string = true;
			bool var_228_bool;
			func_4854(var_228_bool);
			if(var_228_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcd8";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4655();
			if(var_41_bool == 41246) {
				func_3634(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539303); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542544, 44940, 44939); //@t
				var_0_object->AddReply(539304, -1, 41247); //@t
				var_0_object->AddReply(542543, -1, 44938); //@t
				return 0;
			}
			if(var_41_bool == 44940) {
				func_3634(var_42_cvector, "Dream");
				var_0_object->SetMessage(542545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542553, 44954, 44950); //@t
				var_0_object->AddReply(542554, 44952, 44951); //@t
				return 0;
			}
			if(var_41_bool == 44952) {
				func_3634(var_42_cvector, "Adoration");
				var_0_object->SetMessage(542555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542556, 44954, 44953); //@t
				return 0;
			}
			if(var_41_bool == 44954) {
				func_3634(var_42_cvector, "Dream");
				var_0_object->SetMessage(542557); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542558, 44957, 44956); //@t
				return 0;
			}
			if(var_41_bool == 44957) {
				func_3634(var_42_cvector, "Adoration");
				var_0_object->SetMessage(542559); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542560, 44962, 44958); //@t
				var_0_object->AddReply(542561, 44960, 44959); //@t
				return 0;
			}
			if(var_41_bool == 44960) {
				func_3634(var_42_cvector, "Neutral");
				var_0_object->SetMessage(542562); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542563, 44962, 44961); //@t
				return 0;
			}
			if(var_41_bool == 44962) {
				func_3634(var_42_cvector, "Neutral");
				var_0_object->SetMessage(542564); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542565, 44966, 44964); //@t
				var_0_object->AddReply(542566, -1, 44965); //@t
				return 0;
			}
			if(var_41_bool == 44966) {
				func_3634(var_42_cvector, "Neutral");
				var_0_object->SetMessage(542567); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542568, -1, 44967); //@t
				var_0_object->AddReply(542569, -1, 44968); //@t
				return 0;
			}
			var_3_string = true;
			bool var_135_bool;
			func_4854(var_135_bool);
			if(var_135_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe49";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4655();
			if(var_41_int == 42548) {
				func_3988(var_42_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_71_bool;
			func_4854(var_71_bool);
			if(var_71_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfab";
	
	}

}


maintask task_16
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		var_41_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_4059(var_40_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, int var_41_int)
	{
		if(var_41_int == 10) {
			func_4124();
			bool var_45_bool = false;
			bool var_46_bool;
			func_4379(var_46_bool);
			if(var_46_bool != 0) {
				bool var_49_bool;
				func_4093(var_49_bool);
				if(var_49_bool != 0)
					var_45_bool = true;
			}
			if(var_45_bool != 0) {
				bool var_66_bool;
				func_4073(var_66_bool);
				if(var_66_bool != 0) {
					bool var_85_bool; object var_86_object;
					object var_87_object;
					func_4662(var_87_object);
					var_87_object = var_86_object;
					func_4529(var_85_bool, var_86_object);
				}
			} else {
				func_4088(var_41_int);
				func_4115();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		func_4306();
		func_4124();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		@StopGroup0();
		func_4124();
		func_4609("Neutral");
		func_4115();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, bool var_41_bool)
	{
		if(var_41_bool != 0)
			func_4115();
		else
			func_4609("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, object var_41_object)
	{
		bool var_43_bool;
		@IsOverrideActive(var_43_bool);
		if(!var_43_bool) { //@nz
			disable OnUse;
			func_4306();
			bool var_45_bool; object var_46_object;
			var_41_object = var_46_object;
			func_4370(var_45_bool, var_46_object);
			enable OnUse;
			object var_59_object;
			var_41_object = var_59_object;
			func_5729(var_59_object);
			func_4609("Neutral");
			func_4124();
			func_4115();
		}
	}

}


void func_0(object var_0_object, int var_291_int, object var_292_object)
{
	var_0_object = var_292_object;
	bool var_302_bool; object var_303_object;
	var_292_object = var_303_object;
	func_4384(var_302_bool, var_303_object, 70.0);
	if(!var_302_bool) { //@nz
		var_291_int = -2;
		return 8;
	}
	object var_298_object;
	@CreateDialog(var_298_object);
	int var_306_int;
	func_4848(var_306_int);
	var_298_object->SetNPCName(var_306_int);
	int var_307_int;
	func_4846(var_307_int);
	var_298_object->SetNPCDescription(var_307_int);
	string var_308_string;
	func_4850(var_308_string);
	var_298_object->SetPhoto(var_308_string);
	string var_309_string;
	func_4852(var_309_string);
	var_298_object->SetPhoto2(var_309_string);
	int var_310_int;
	func_5712(var_310_int);
	var_298_object->SetPlayerName(var_310_int);
	bool var_299_bool;
	@IsOverrideActive(var_299_bool);
	if(var_299_bool != 0) {
		var_291_int = -2;
		return 8;
	}
	@DoDialog(var_298_object);
	bool var_312_bool; object var_313_object;
	object var_314_object;
	func_4662(var_314_object);
	var_314_object = var_313_object;
	func_4471(var_312_bool, var_313_object);
	object var_315_object; object var_316_object;
	var_292_object = var_315_object;
	var_298_object = var_316_object;
	TaskCall(1);
	func_81(var_317_object, var_318_object, var_319_string, var_320_bool, var_315_object, var_316_object);
	TaskReturn();
	bool var_301_bool;
	var_298_object->IsDialogEnd(var_301_bool);
	
	for(;;) {
		var_434_bool = !var_301_bool; //@nz
		if(var_434_bool == 0) goto Label_70;
		@sync();
		var_298_object->IsDialogEnd(var_301_bool);
	}
	
Label_70:
	object var_435_object;
	var_292_object = var_435_object;
	func_4453();
	@StopDialog(var_298_object);
	var_298_object->GetReturnValue(-1);
	int var_300_int = var_291_int;
}
EMIT "Stack[-4] = 0";


void func_4609(string var_262_string)
{
	bool var_266_bool; float var_267_float; float var_268_float;
	@lshHasAnimation(var_266_bool, var_262_string);
	if(var_266_bool != 0) {
		@lshGetAnimTimes(var_262_string, var_267_float, var_268_float);
		@lshPlayAnimation(var_267_float, var_268_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_262_string);
	}
	
}


void func_5634(bool var_67_bool, object var_68_object, int var_69_int)
{
	object var_76_object;
	func_5621(var_76_object);
	object var_73_object;
	var_76_object = var_73_object;
	object var_74_object;
	var_73_object->Find(var_69_int, var_74_object);
	if(!var_74_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_69_int);
		var_67_bool = false;
	}
	var_74_object->AddChild(var_68_object);
	@SendWorldWndMessage(7);
	int var_75_int;
	var_68_object->GetCategory(var_75_int);
	@SetDiarySection(var_75_int);
	var_67_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2562(object var_0_object, int var_62_int, object var_63_object)
{
	var_0_object = var_63_object;
	bool var_73_bool; object var_74_object;
	var_63_object = var_74_object;
	func_4384(var_73_bool, var_74_object, 70.0);
	if(!var_73_bool) { //@nz
		var_62_int = -2;
		return 8;
	}
	object var_69_object;
	@CreateDialog(var_69_object);
	int var_121_int;
	func_4848(var_121_int);
	var_69_object->SetNPCName(var_121_int);
	int var_122_int;
	func_4846(var_122_int);
	var_69_object->SetNPCDescription(var_122_int);
	string var_123_string;
	func_4850(var_123_string);
	var_69_object->SetPhoto(var_123_string);
	string var_124_string;
	func_4852(var_124_string);
	var_69_object->SetPhoto2(var_124_string);
	int var_125_int;
	func_5712(var_125_int);
	var_69_object->SetPlayerName(var_125_int);
	bool var_70_bool;
	@IsOverrideActive(var_70_bool);
	if(var_70_bool != 0) {
		var_62_int = -2;
		return 8;
	}
	@DoDialog(var_69_object);
	bool var_134_bool; object var_135_object;
	object var_136_object;
	func_4662(var_136_object);
	var_136_object = var_135_object;
	func_4471(var_134_bool, var_135_object);
	object var_229_object; object var_230_object;
	var_63_object = var_229_object;
	var_69_object = var_230_object;
	TaskCall(7);
	func_2643(var_231_object, var_232_object, var_233_string, var_234_bool, var_229_object, var_230_object);
	TaskReturn();
	bool var_72_bool;
	var_69_object->IsDialogEnd(var_72_bool);
	
	for(;;) {
		var_278_bool = !var_72_bool; //@nz
		if(var_278_bool == 0) goto Label_2632;
		@sync();
		var_69_object->IsDialogEnd(var_72_bool);
	}
	
Label_2632:
	object var_279_object;
	var_63_object = var_279_object;
	func_4453();
	@StopDialog(var_69_object);
	var_69_object->GetReturnValue(-1);
	int var_71_int = var_62_int;
}
EMIT "Stack[-4] = 0";


void func_4625(string var_240_string, bool var_241_bool)
{
	bool var_247_bool; float var_248_float; float var_249_float;
	@lshHasAnimation(var_247_bool, var_240_string);
	if(var_247_bool != 0) {
		@lshGetAnimTimes(var_240_string, var_248_float, var_249_float);
		@lshPlayAnimation(var_248_float, var_249_float, var_241_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_240_string);
	}
	
}


// @pe
void func_5139(void)
{
	@SetVariable("ook11Anna1", 1);
}


void func_4115(void)
{
	float var_897_float;
	@rand(var_897_float, 8, 16);
	@SetTimer(10, var_897_float);
}


// @pe
void func_5145(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_4124(void)
{
	@KillTimer(10);
}


void func_5662(object var_53_object)
{
	object var_56_object; object var_57_object;
	@GetMainOutdoorScene(var_56_object);
	if(var_56_object == null) {
		@Trace("Can't find main outdoor scene");
		var_57_object = null;
		var_57_object = var_53_object;
	}
	var_56_object->GetMap(var_57_object);
	var_57_object = var_53_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5151(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_4640(bool var_168_bool, string var_169_string)
{
	bool var_171_bool;
	bool var_172_bool;
	func_4854(var_172_bool);
	if(var_172_bool != 0) {
		@lshHasSpeech(var_171_bool, var_169_string);
		if(var_171_bool != 0) {
			@lshPlaySpeech(var_169_string);
			var_168_bool = true;
		}
	}
	var_168_bool = false;
}


// @pe
void func_5157(object var_188_object)
{
	@Trace("money 1500 is given");
	object var_191_object;
	var_188_object = var_191_object;
	func_4706(var_191_object, 1500);
}


void func_3112(object var_0_object, int var_708_int, object var_709_object)
{
	var_0_object = var_709_object;
	bool var_719_bool; object var_720_object;
	var_709_object = var_720_object;
	func_4384(var_719_bool, var_720_object, 70.0);
	if(!var_719_bool) { //@nz
		var_708_int = -2;
		return 8;
	}
	object var_715_object;
	@CreateDialog(var_715_object);
	int var_723_int;
	func_4848(var_723_int);
	var_715_object->SetNPCName(var_723_int);
	int var_724_int;
	func_4846(var_724_int);
	var_715_object->SetNPCDescription(var_724_int);
	string var_725_string;
	func_4850(var_725_string);
	var_715_object->SetPhoto(var_725_string);
	string var_726_string;
	func_4852(var_726_string);
	var_715_object->SetPhoto2(var_726_string);
	int var_727_int;
	func_5712(var_727_int);
	var_715_object->SetPlayerName(var_727_int);
	bool var_716_bool;
	@IsOverrideActive(var_716_bool);
	if(var_716_bool != 0) {
		var_708_int = -2;
		return 8;
	}
	@DoDialog(var_715_object);
	bool var_729_bool; object var_730_object;
	object var_731_object;
	func_4662(var_731_object);
	var_731_object = var_730_object;
	func_4471(var_729_bool, var_730_object);
	object var_732_object; object var_733_object;
	var_709_object = var_732_object;
	var_715_object = var_733_object;
	TaskCall(11);
	func_3193(var_734_object, var_735_object, var_736_string, var_737_bool, var_732_object, var_733_object);
	TaskReturn();
	bool var_718_bool;
	var_715_object->IsDialogEnd(var_718_bool);
	
	for(;;) {
		var_775_bool = !var_718_bool; //@nz
		if(var_775_bool == 0) goto Label_3182;
		@sync();
		var_715_object->IsDialogEnd(var_718_bool);
	}
	
Label_3182:
	object var_776_object;
	var_709_object = var_776_object;
	func_4453();
	@StopDialog(var_715_object);
	var_715_object->GetReturnValue(-1);
	int var_717_int = var_708_int;
}
EMIT "Stack[-4] = 0";


void func_4655(void)
{
	bool var_44_bool;
	func_4854(var_44_bool);
	if(var_44_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_5167(void)
{
	@TriggerWorld("playsound", "mapmark");
}


void func_5679(object var_100_object, string var_101_string, float var_102_float)
{
	object var_110_object;
	@GetMainOutdoorScene(var_110_object);
	if(var_110_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_108_cvector;
	cvector var_109_cvector;
	bool var_111_bool;
	var_110_object->GetLocator(var_101_string, var_111_bool, var_108_cvector, var_109_cvector);
	if(!var_111_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_101_string) + " doesnt exist");
	var_110_object->GetMap(var_100_object);
	if(var_100_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_121_float = GetByIndex(var_108_cvector, 0);
	var_122_float = GetByIndex(var_108_cvector, 2);
	var_100_object->SetMapParams(var_121_float, var_122_float, var_102_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_3634(object var_2_object, string var_810_string)
{
	bool var_811_bool;
	func_4854(var_811_bool);
	if(!var_811_bool) //@nz
		return 0;
	if(var_810_string == var_2_object)
		return 0;
	string var_814_string; bool var_815_bool;
	var_810_string = var_814_string;
	if(var_810_string == "")
		var_815_bool = false;
	else
		var_815_bool = true;
	func_4625(var_814_string, var_815_bool);
	var_2_object = var_810_string;
	
}


// @pe
void func_5173(bool var_323_bool)
{
	int var_325_int;
	func_4689(var_325_int, "k1q01");
	if(var_325_int == 4)
		var_323_bool = true;
	var_323_bool = false;
}


void func_4662(object var_136_object)
{
	object var_138_object;
	@self(var_138_object);
	var_138_object = var_136_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1084(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_462_object, object var_463_object)
{
	var_0_object = var_463_object;
	var_1_object = var_462_object;
	var_3_string = false;
	if(1 != 0) {
		func_1162(var_463_object, "Neutral");
		var_0_object->SetMessage(525346); //@t
		var_0_object->ClearReplies(); //@t
		bool var_478_bool;
		func_5257(var_1_object);
		if(var_478_bool != 0)
			var_0_object->AddReply(525348, 44408, 26716); //@t
		bool var_487_bool;
		func_5269(var_1_object);
		if(var_487_bool != 0)
			var_0_object->AddReply(541760, 43964, 43963); //@t
		var_0_object->AddReply(525347, -1, 26715); //@t
		var_0_object->AddReply(529145, -1, 30591); //@t
		goto Label_1132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x440";
	}
Label_1132:
	bool var_502_bool;
	func_4854(var_502_bool);
	if(var_502_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4609(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1161;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1161:
		return 0;

	}
	
}


// @pe
void func_1596(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_538_object, object var_539_object)
{
	var_0_object = var_539_object;
	var_1_object = var_538_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_545_bool;
		func_5317(var_1_object);
		if(var_545_bool != 0) {
			func_1727(var_539_object, "Neutral");
			var_0_object->SetMessage(525442); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(525443, -1, 26811); //@t
			var_0_object->AddReply(529337, -1, 30792); //@t
		} else {
					func_1727(var_539_object, "Neutral");
					var_0_object->SetMessage(525406); //@t
					var_0_object->ClearReplies(); //@t
					bool var_576_bool;
					func_5281(var_1_object);
					if(var_576_bool != 0)
						var_0_object->AddReply(525407, 26776, 26775); //@t
					bool var_585_bool = false;
					bool var_586_bool;
					func_5305(var_1_object);
					if(var_586_bool != 0) {
						bool var_592_bool;
						func_5293(var_1_object);
						if(var_592_bool != 0)
							var_585_bool = true;
					}
					if(var_585_bool != 0)
						var_0_object->AddReply(525425, 40970, 26793); //@t
					bool var_601_bool = false;
					bool var_602_bool;
					func_5341(var_1_object);
					if(var_602_bool != 0) {
						bool var_608_bool;
						func_5329(var_1_object);
						if(var_608_bool != 0)
							var_601_bool = true;
					}
					if(var_601_bool != 0)
						var_0_object->AddReply(525575, 26923, 26922); //@t
					var_0_object->AddReply(525412, -1, 26780); //@t
					var_0_object->AddReply(538971, -1, 40909); //@t
		}
	}
	for(;;) {
		bool var_566_bool;
		func_4854(var_566_bool);
		if(var_566_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4609(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1726;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1726:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x640";


void func_4668(cvector var_100_cvector, cvector var_101_cvector)
{
	float var_104_float = sqrt(var_101_cvector | var_101_cvector);
	if(var_104_float < 0.000001)
		var_100_cvector = [0.0, 0.0, 0.0];
	var_100_cvector = var_101_cvector / var_104_float;
}


// @pe
void func_5185(bool var_331_bool)
{
	int var_333_int;
	func_4689(var_333_int, "ook1Anna1");
	if(var_333_int == 0) {
		var_331_bool = true;
		return 0;
	}
	var_331_bool = false;
}


// @pe
void func_4678(float var_175_float, float var_176_float, float var_177_float, float var_178_float)
{
	if(var_176_float < var_177_float) {
		var_177_float = var_175_float;
		return 0;
	}
	if(var_176_float > var_178_float) {
		var_178_float = var_175_float;
		return 0;
	}
	var_176_float = var_175_float;
}


// @pe
void func_5197(bool var_365_bool)
{
	int var_367_int;
	func_4689(var_367_int, "k1q01Healed");
	if(var_367_int != 0) {
		var_365_bool = true;
		return 0;
	}
	var_365_bool = false;
}


void func_5712(int var_125_int)
{
	int var_127_int;
	@GetVariable("branch", var_127_int);
	if(var_127_int == 0) {
		var_125_int = 1;
		return 2;
	EMIT "GOTO 0x165f";
	}
	if(var_127_int == 1) {
		var_125_int = 2;
		return 2;
	}
	var_125_int = 3;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_315_object, object var_316_object)
{
	var_0_object = var_316_object;
	var_1_object = var_315_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_322_bool = false;
		bool var_323_bool;
		func_5173(var_1_object);
		if(var_323_bool != 0) {
			bool var_331_bool;
			func_5185(var_1_object);
			if(var_331_bool != 0)
				var_322_bool = true;
		}
		if(var_322_bool != 0) {
			object var_337_object; object var_338_object;
			var_337_object = var_1_object;
			var_338_object = var_0_object;
			func_4879();
			func_272(var_316_object, "Fear");
			var_0_object->SetMessage(524690); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(524691, 28130, 26030); //@t
			var_0_object->AddReply(542043, 44323, 44322); //@t
		} else {
					bool var_364_bool = false;
					bool var_365_bool;
					func_5197(var_1_object);
					if(var_365_bool != 0) {
						bool var_371_bool;
						func_5209(var_1_object);
						if(var_371_bool != 0)
							var_364_bool = true;
					}
					if(var_364_bool == 0) goto Label_165;
					object var_377_object; object var_378_object;
					var_377_object = var_1_object;
					var_378_object = var_0_object;
					func_4885();
					func_272(var_316_object, "Neutral");
					var_0_object->SetMessage(524707); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524708, 28139, 26047); //@t
					var_0_object->AddReply(542053, 28139, 44336); //@t
		}
	}
Label_242:
	for(;;) {
		bool var_356_bool;
		func_4854(var_356_bool);
		if(var_356_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4609(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_271;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_271:
			}
			bool var_389_bool;
			func_5221(var_1_object);
			if(var_389_bool != 0) {
			object var_395_object; object var_396_object;
			var_395_object = var_1_object;
			var_396_object = var_0_object;
			func_4891();
			func_272(var_316_object, "Fear");
			var_0_object->SetMessage(524780); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526860, 28146, 28145); //@t
			var_0_object->AddReply(542054, 28146, 44338); //@t
			goto Label_242;
		}
		return 0;
	}
	func_272(var_316_object, "Dream");
	var_0_object->SetMessage(524709); //@t
	var_0_object->ClearReplies(); //@t
	bool var_409_bool = false;
	bool var_410_bool;
	func_5233(var_1_object);
	if(var_410_bool != 0) {
		bool var_416_bool;
		func_5221(var_1_object);
		if(!var_416_bool) //@nz
			var_409_bool = true;
	}
	if(var_409_bool != 0)
		var_0_object->AddReply(524787, 26103, 26102); //@t
	bool var_422_bool;
	func_5245(var_1_object);
	if(var_422_bool != 0)
		var_0_object->AddReply(524796, 28156, 26111); //@t
	var_0_object->AddReply(524710, -1, 26049); //@t
	goto Label_242;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_4689(int var_325_int, string var_326_string)
{
	int var_328_int;
	@GetVariable(var_326_string, var_328_int);
	var_328_int = var_325_int;
}


// @pe
void func_2643(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_229_object, object var_230_object)
{
	var_0_object = var_230_object;
	var_1_object = var_229_object;
	var_3_string = false;
	if(1 != 0) {
		func_2701(var_230_object, "Neutral");
		var_0_object->SetMessage(525465); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(526257, 27533, 27531); //@t
		var_0_object->AddReply(525466, -1, 26822); //@t
		goto Label_2671;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa57";
	}
Label_2671:
	bool var_260_bool;
	func_4854(var_260_bool);
	if(var_260_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4609(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2700;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2700:
		return 0;

	}
	
}


void func_4694(int var_133_int, int var_134_int)
{
	object var_136_object;
	@CreateIntVector(var_136_object);
	var_136_object->add(var_133_int);
	var_136_object->add(var_134_int);
	@SendWorldWndMessage(3, var_136_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5209(bool var_371_bool)
{
	int var_373_int;
	func_4689(var_373_int, "ook1Anna2");
	if(var_373_int == 0) {
		var_371_bool = true;
		return 0;
	}
	var_371_bool = false;
}


// @pe
void func_5729(object var_59_object)
{
	var_60_bool = GlobalVars[1];
	if(!var_60_bool) { //@nz
		int var_62_int; object var_63_object;
		var_59_object = var_63_object;
		TaskCall(6);
		func_2562(var_64_object, var_62_int, var_63_object);
		TaskReturn();
		var_287_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_288_bool;
	func_4816(var_288_bool, 1);
	if(var_288_bool != 0) {
		int var_291_int; object var_292_object;
		var_59_object = var_292_object;
		TaskCall(0);
		func_0(var_293_object, var_291_int, var_292_object);
		TaskReturn();
		return 0;
	}
	bool var_436_bool;
	func_4816(var_436_bool, 2);
	if(var_436_bool != 0) {
		int var_438_int; object var_439_object;
		var_59_object = var_439_object;
		TaskCall(2);
		func_1003(var_440_object, var_438_int, var_439_object);
		TaskReturn();
		return 0;
	}
	bool var_512_bool;
	func_4816(var_512_bool, 3);
	if(var_512_bool != 0) {
		int var_514_int; object var_515_object;
		var_59_object = var_515_object;
		TaskCall(4);
		func_1515(var_516_object, var_514_int, var_515_object);
		TaskReturn();
		return 0;
	}
	bool var_625_bool;
	func_4816(var_625_bool, 6);
	if(var_625_bool != 0) {
		int var_627_int; object var_628_object;
		var_59_object = var_628_object;
		TaskCall(8);
		func_2788(var_629_object, var_627_int, var_628_object);
		TaskReturn();
		return 0;
	}
	bool var_706_bool;
	func_4816(var_706_bool, 11);
	if(var_706_bool != 0) {
		int var_708_int; object var_709_object;
		var_59_object = var_709_object;
		TaskCall(10);
		func_3112(var_710_object, var_708_int, var_709_object);
		TaskReturn();
		return 0;
	}
	bool var_777_bool;
	func_4816(var_777_bool, 12);
	if(var_777_bool != 0) {
		int var_779_int; object var_780_object;
		var_59_object = var_780_object;
		TaskCall(12);
		func_3490(var_781_object, var_779_int, var_780_object);
		TaskReturn();
		return 0;
	}
	int var_838_int; object var_839_object;
	var_59_object = var_839_object;
	TaskCall(14);
	func_3849(var_840_object, var_838_int, var_839_object);
	TaskReturn();
}


void func_4706(object var_191_object, int var_192_int)
{
	int var_194_int;
	object var_195_object;
	var_191_object = var_195_object;
	int var_197_int;
	func_4353(var_195_object, "money", var_197_int);
	if(var_197_int > 0) {
		@GetInvItemByName(var_194_int, "Money");
		int var_204_int; int var_205_int;
		var_194_int = var_204_int;
		var_192_int = var_205_int;
		func_4694(var_204_int, var_205_int);
	}
}


// @pe
void func_5221(bool var_389_bool)
{
	int var_391_int;
	func_4689(var_391_int, "ook1Anna3");
	if(var_391_int == 0) {
		var_389_bool = true;
		return 0;
	}
	var_389_bool = false;
}


// @pe
void func_5233(bool var_410_bool)
{
	int var_412_int;
	func_4689(var_412_int, "k1q03");
	if(var_412_int == 0) {
		var_410_bool = true;
		return 0;
	}
	var_410_bool = false;
}


void func_4725(object var_122_object, object var_123_object, int var_124_int)
{
	int var_128_int;
	var_123_object->GetItemID(var_128_int);
	int var_129_int;
	@GetInvItemProperty(var_129_int, var_128_int, "Category");
	bool var_130_bool;
	var_122_object->AddItem(var_130_bool, var_123_object, var_129_int, var_124_int);
	if(!var_130_bool) { //@nz
		var_122_object->DropItems(var_123_object, var_124_int);
	} else {
		int var_133_int; int var_134_int;
		var_128_int = var_133_int;
		var_124_int = var_134_int;
		func_4694(var_133_int, var_134_int);
	}
	
}


// @pe
void func_3193(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_732_object, object var_733_object)
{
	var_0_object = var_733_object;
	var_1_object = var_732_object;
	var_3_string = false;
	if(1 != 0) {
		func_3265(var_733_object, "Neutral");
		var_0_object->SetMessage(527548); //@t
		var_0_object->ClearReplies(); //@t
		bool var_748_bool = false;
		bool var_749_bool;
		func_5389(var_1_object);
		if(var_749_bool != 0) {
			bool var_755_bool;
			func_5401(var_1_object);
			if(var_755_bool != 0)
				var_748_bool = true;
		}
		if(var_748_bool != 0)
			var_0_object->AddReply(527551, 28893, 28892); //@t
		var_0_object->AddReply(527550, -1, 28891); //@t
		goto Label_3235;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc7d";
	}
Label_3235:
	bool var_767_bool;
	func_4854(var_767_bool);
	if(var_767_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4609(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3264;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3264:
		return 0;

	}
	
}


// @pe
void func_5245(bool var_422_bool)
{
	int var_424_int;
	func_4689(var_424_int, "k1q03");
	if(var_424_int == 2)
		var_422_bool = true;
	var_422_bool = false;
}


void func_4744(object var_117_object, string var_118_string, int var_119_int)
{
	object var_121_object;
	@CreateInvItem(var_121_object);
	var_121_object->SetItemName(var_118_string);
	object var_122_object; object var_123_object; int var_124_int;
	var_117_object = var_122_object;
	var_121_object = var_123_object;
	var_119_int = var_124_int;
	func_4725(var_122_object, var_123_object, var_124_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5257(bool var_478_bool)
{
	int var_480_int;
	func_4689(var_480_int, "k2q04");
	if(var_480_int == 1)
		var_478_bool = true;
	var_478_bool = false;
}


// @pe
void func_1162(object var_2_object, string var_469_string)
{
	bool var_470_bool;
	func_4854(var_470_bool);
	if(!var_470_bool) //@nz
		return 0;
	if(var_469_string == var_2_object)
		return 0;
	string var_473_string; bool var_474_bool;
	var_469_string = var_473_string;
	if(var_469_string == "")
		var_474_bool = false;
	else
		var_474_bool = true;
	func_4625(var_473_string, var_474_bool);
	var_2_object = var_469_string;
	
}


void func_4235(void)
{
	bool var_54_bool; int var_55_int; int var_56_int; bool var_57_bool;
	@WaitForAnimEnd();
	bool var_58_bool;
	func_4379(var_58_bool);
	if(!var_58_bool) //@nz
		return 12;
	int var_60_int;
	func_4829(var_60_int);
	int var_52_int;
	var_60_int = var_52_int;
	int var_53_int = 0;
	
	for(;;) {
		bool var_73_bool = false;
		if(var_53_int < 5) {
			bool var_76_bool;
			func_4379(var_76_bool);
			if(var_76_bool != 0)
				var_73_bool = true;
		}
		if(var_73_bool != 0) {
			if(!var_52_int) { //@nz
				@Sleep(3, var_54_bool);
				if(!var_54_bool) { //@nz
				} else {
			} else {
			@irand(var_55_int, var_52_int);
			@irand(var_56_int, 5);
			if(var_56_int != 0)
				var_55_int = 0;
			string var_87_string; int var_88_int;
			var_55_int = var_88_int;
			func_4822(var_87_string, var_88_int);
			@PlayAnimation("all", var_87_string);
			@WaitForAnimEnd(var_57_bool);
			var_89_bool = !var_57_bool; //@nz
			if(var_89_bool == 0) goto Label_4290;
			goto Label_4301;
			}
				Label_4290:
					bool var_80_bool;
					func_4304(var_80_bool);
					var_81_bool = !var_80_bool; //@nz
					if(var_81_bool == 0) goto Label_4296;
			}
		}
	Label_4301:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4296:
		@ResetAAS();
		var_53_int += 1;
	}
	
}


// @pe
void func_2701(object var_2_object, string var_236_string)
{
	bool var_237_bool;
	func_4854(var_237_bool);
	if(!var_237_bool) //@nz
		return 0;
	if(var_236_string == var_2_object)
		return 0;
	string var_240_string; bool var_241_bool;
	var_236_string = var_240_string;
	if(var_236_string == "")
		var_241_bool = false;
	else
		var_241_bool = true;
	func_4625(var_240_string, var_241_bool);
	var_2_object = var_236_string;
	
}


// @pe
void func_5269(bool var_487_bool)
{
	int var_489_int;
	func_4689(var_489_int, "k2q04");
	if(var_489_int == 3)
		var_487_bool = true;
	var_487_bool = false;
}


// @pe
void func_4757(bool var_146_bool, object var_147_object, float var_148_float)
{
	if(!var_147_object) { //@nz
		var_146_bool = false;
		return 0;
	}
	if(var_148_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_148_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_153_float;
		var_148_float = var_153_float;
		func_4792(var_153_float);
		bool var_157_bool; object var_158_object; float var_160_float;
		var_147_object = var_158_object;
		var_148_float = var_160_float;
		func_4331(var_157_bool, var_158_object, "reputation", var_160_float, (float)0, (float)1);
		var_146_bool = true;
		return 0;

	}
	
	var_146_bool = false;
}


// @pe
void func_5281(bool var_576_bool)
{
	int var_578_int;
	func_4689(var_578_int, "k3q01");
	if(var_578_int == 1)
		var_576_bool = true;
	var_576_bool = false;
}


// @pe
void func_5293(bool var_592_bool)
{
	int var_594_int;
	func_4689(var_594_int, "k3q01");
	if(var_594_int == 2)
		var_592_bool = true;
	var_592_bool = false;
}


void func_4792(float var_153_float)
{
	object var_155_object;
	@CreateFloatVector(var_155_object);
	var_155_object->add(var_153_float);
	@SendWorldWndMessage(16, var_155_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5305(bool var_586_bool)
{
	int var_588_int;
	func_4689(var_588_int, "k3q01KapellaAboutHan");
	if(var_588_int != 0) {
		var_586_bool = true;
		return 0;
	}
	var_586_bool = false;
}


// @pe
void func_1727(object var_2_object, string var_551_string)
{
	bool var_552_bool;
	func_4854(var_552_bool);
	if(!var_552_bool) //@nz
		return 0;
	if(var_551_string == var_2_object)
		return 0;
	string var_555_string; bool var_556_bool;
	var_551_string = var_555_string;
	if(var_551_string == "")
		var_556_bool = false;
	else
		var_556_bool = true;
	func_4625(var_555_string, var_556_bool);
	var_2_object = var_551_string;
	
}


// @pe
void func_3265(object var_2_object, string var_739_string)
{
	bool var_740_bool;
	func_4854(var_740_bool);
	if(!var_740_bool) //@nz
		return 0;
	if(var_739_string == var_2_object)
		return 0;
	string var_743_string; bool var_744_bool;
	var_739_string = var_743_string;
	if(var_739_string == "")
		var_744_bool = false;
	else
		var_744_bool = true;
	func_4625(var_743_string, var_744_bool);
	var_2_object = var_739_string;
	
}


void func_4802(float var_64_float)
{
	float var_66_float;
	@GetGameTime(var_66_float);
	var_66_float = var_64_float;
}


// @pe
void func_5317(bool var_545_bool)
{
	int var_547_int;
	func_4689(var_547_int, "k3q01");
	if(var_547_int == 3)
		var_545_bool = true;
	var_545_bool = false;
}


void func_4807(int var_189_int)
{
	float var_191_float;
	@GetGameTime(var_191_float);
	var_189_int = 1 + (var_191_float / 24);
}


void func_4304(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_5329(bool var_608_bool)
{
	int var_610_int;
	func_4689(var_610_int, "ook3Anna1");
	if(var_610_int == 0) {
		var_608_bool = true;
		return 0;
	}
	var_608_bool = false;
}


void func_4306(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_4816(bool var_288_bool, int var_289_int)
{
	int var_290_int;
	func_4807(var_290_int);
	var_288_bool = var_290_int == var_289_int;
}


void func_4822(string var_66_string, int var_67_int)
{
	string var_69_string = "idle";
	if(var_67_int != 0)
		var_69_string += var_67_int;
	var_69_string = var_66_string;
}


void func_4311(float var_56_float, object var_57_object)
{
	cvector var_61_cvector;
	@GetPosition(var_61_cvector);
	cvector var_62_cvector;
	var_57_object->GetPosition(var_62_cvector);
	var_56_float = (var_62_cvector - var_61_cvector) | (var_62_cvector - var_61_cvector);
}


// @pe
void func_5341(bool var_602_bool)
{
	int var_604_int;
	func_4689(var_604_int, "k3q03");
	if(var_604_int == 0) {
		var_602_bool = true;
		return 0;
	}
	var_602_bool = false;
}


void func_4829(int var_60_int)
{
	int var_63_int; bool var_64_bool;
	var_63_int = 0;
	
	for(;;) {
		string var_66_string; int var_67_int;
		var_63_int = var_67_int;
		func_4822(var_66_string, var_67_int);
		@HasAnimation(var_64_bool, "all", var_66_string);
		if(!var_64_bool) //@nz
			break;
		var_63_int += 1;
	}
	var_63_int = var_60_int;
}


void func_4319(bool var_165_bool, object var_166_object, string var_167_string)
{
	var_172_bool = IsFuncExist(var_166_object, "HasProperty", 2);
	if(!var_172_bool) { //@nz
		var_165_bool = false;
		return 2;
	}
	bool var_169_bool;
	var_166_object->HasProperty(var_167_string, var_169_bool);
	var_169_bool = var_165_bool;
}


void func_2788(object var_0_object, int var_627_int, object var_628_object)
{
	var_0_object = var_628_object;
	bool var_638_bool; object var_639_object;
	var_628_object = var_639_object;
	func_4384(var_638_bool, var_639_object, 70.0);
	if(!var_638_bool) { //@nz
		var_627_int = -2;
		return 8;
	}
	object var_634_object;
	@CreateDialog(var_634_object);
	int var_642_int;
	func_4848(var_642_int);
	var_634_object->SetNPCName(var_642_int);
	int var_643_int;
	func_4846(var_643_int);
	var_634_object->SetNPCDescription(var_643_int);
	string var_644_string;
	func_4850(var_644_string);
	var_634_object->SetPhoto(var_644_string);
	string var_645_string;
	func_4852(var_645_string);
	var_634_object->SetPhoto2(var_645_string);
	int var_646_int;
	func_5712(var_646_int);
	var_634_object->SetPlayerName(var_646_int);
	bool var_635_bool;
	@IsOverrideActive(var_635_bool);
	if(var_635_bool != 0) {
		var_627_int = -2;
		return 8;
	}
	@DoDialog(var_634_object);
	bool var_648_bool; object var_649_object;
	object var_650_object;
	func_4662(var_650_object);
	var_650_object = var_649_object;
	func_4471(var_648_bool, var_649_object);
	object var_651_object; object var_652_object;
	var_628_object = var_651_object;
	var_634_object = var_652_object;
	TaskCall(9);
	func_2869(var_653_object, var_654_object, var_655_string, var_656_bool, var_651_object, var_652_object);
	TaskReturn();
	bool var_637_bool;
	var_634_object->IsDialogEnd(var_637_bool);
	
	for(;;) {
		var_704_bool = !var_637_bool; //@nz
		if(var_704_bool == 0) goto Label_2858;
		@sync();
		var_634_object->IsDialogEnd(var_637_bool);
	}
	
Label_2858:
	object var_705_object;
	var_628_object = var_705_object;
	func_4453();
	@StopDialog(var_634_object);
	var_634_object->GetReturnValue(-1);
	int var_636_int = var_627_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5353(bool var_669_bool)
{
	int var_671_int;
	func_4689(var_671_int, "k6q01");
	if(var_671_int == 2)
		var_669_bool = true;
	var_669_bool = false;
}


void func_4331(bool var_157_bool, object var_158_object, string var_159_string, float var_160_float, float var_161_float, float var_162_float)
{
	object var_166_object;
	var_158_object = var_166_object;
	string var_167_string;
	var_159_string = var_167_string;
	bool var_165_bool;
	func_4319(var_165_bool, var_166_object, var_167_string);
	if(!var_165_bool) //@nz
		var_157_bool = false;
	float var_164_float;
	var_158_object->GetProperty(var_159_string, var_164_float);
	float var_175_float; float var_177_float; float var_178_float;
	var_161_float = var_177_float;
	var_162_float = var_178_float;
	func_4678(var_175_float, (var_164_float + var_160_float), var_177_float, var_178_float);
	var_158_object->SetProperty(var_159_string, var_175_float);
	var_157_bool = true;
}


void func_4846(int var_122_int)
{
	var_122_int = 515530;
}


void func_4848(int var_121_int)
{
	var_121_int = 502856;
}


void func_4850(string var_123_string)
{
	var_123_string = "ui/NPC_Anna.png";
}


void func_4852(string var_124_string)
{
	var_124_string = "ui/NPC_Anna_b.png";
}


// @pe
void func_5365(bool var_675_bool)
{
	int var_677_int;
	func_4689(var_677_int, "k6q01DankoPos");
	if(var_677_int > 1)
		var_675_bool = true;
	var_675_bool = false;
}


void func_4854(bool var_116_bool)
{
	var_116_bool = true;
}


// @pe
void func_4856(object var_99_object)
{
	object var_103_object;
	func_5662(var_103_object);
	object var_100_object;
	var_103_object = var_100_object;
	func_5679(var_100_object, "pt_map_notkin", (float)2);
	object var_123_object;
	func_5662(var_123_object);
	var_99_object->ShowMap(var_123_object);
}


// @pe
void func_5377(bool var_681_bool)
{
	int var_683_int;
	func_4689(var_683_int, "ook6Anna1");
	if(var_683_int == 0) {
		var_681_bool = true;
		return 0;
	}
	var_681_bool = false;
}


void func_4353(object var_195_object, string var_196_string, int var_197_int)
{
	int var_199_int;
	var_195_object->GetProperty(var_196_string, var_199_int);
	var_195_object->SetProperty(var_196_string, (var_199_int + var_197_int));
}


// @pe
void func_4872(object var_144_object)
{
	object var_147_object;
	var_144_object = var_147_object;
	bool var_146_bool;
	func_4757(var_146_bool, var_147_object, 0.05);
}


void func_4360(bool var_49_bool, cvector var_50_cvector)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector = var_50_cvector - var_54_cvector;
	var_57_float = GetByIndex(var_55_cvector, 0);
	var_58_float = GetByIndex(var_55_cvector, 2);
	bool var_56_bool;
	@Rotate(var_57_float, var_58_float, var_56_bool);
	var_56_bool = var_49_bool;
}


void func_3849(object var_0_object, int var_838_int, object var_839_object)
{
	var_0_object = var_839_object;
	bool var_849_bool; object var_850_object;
	var_839_object = var_850_object;
	func_4384(var_849_bool, var_850_object, 70.0);
	if(!var_849_bool) { //@nz
		var_838_int = -2;
		return 8;
	}
	object var_845_object;
	@CreateDialog(var_845_object);
	int var_853_int;
	func_4848(var_853_int);
	var_845_object->SetNPCName(var_853_int);
	int var_854_int;
	func_4846(var_854_int);
	var_845_object->SetNPCDescription(var_854_int);
	string var_855_string;
	func_4850(var_855_string);
	var_845_object->SetPhoto(var_855_string);
	string var_856_string;
	func_4852(var_856_string);
	var_845_object->SetPhoto2(var_856_string);
	int var_857_int;
	func_5712(var_857_int);
	var_845_object->SetPlayerName(var_857_int);
	bool var_846_bool;
	@IsOverrideActive(var_846_bool);
	if(var_846_bool != 0) {
		var_838_int = -2;
		return 8;
	}
	@DoDialog(var_845_object);
	bool var_859_bool; object var_860_object;
	object var_861_object;
	func_4662(var_861_object);
	var_861_object = var_860_object;
	func_4471(var_859_bool, var_860_object);
	object var_862_object; object var_863_object;
	var_839_object = var_862_object;
	var_845_object = var_863_object;
	TaskCall(15);
	func_3930(var_864_object, var_865_object, var_866_string, var_867_bool, var_862_object, var_863_object);
	TaskReturn();
	bool var_848_bool;
	var_845_object->IsDialogEnd(var_848_bool);
	
	for(;;) {
		var_892_bool = !var_848_bool; //@nz
		if(var_892_bool == 0) goto Label_3919;
		@sync();
		var_845_object->IsDialogEnd(var_848_bool);
	}
	
Label_3919:
	object var_893_object;
	var_839_object = var_893_object;
	func_4453();
	@StopDialog(var_845_object);
	var_845_object->GetReturnValue(-1);
	int var_847_int = var_838_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5389(bool var_749_bool)
{
	int var_751_int;
	func_4689(var_751_int, "k11q01");
	if(var_751_int == 9)
		var_749_bool = true;
	var_749_bool = false;
}


// @pe
void func_4879(void)
{
	@SetVariable("ook1Anna1", 1);
}


// @pe
void func_272(object var_2_object, string var_341_string)
{
	bool var_342_bool;
	func_4854(var_342_bool);
	if(!var_342_bool) //@nz
		return 0;
	if(var_341_string == var_2_object)
		return 0;
	string var_345_string; bool var_346_bool;
	var_341_string = var_345_string;
	if(var_341_string == "")
		var_346_bool = false;
	else
		var_346_bool = true;
	func_4625(var_345_string, var_346_bool);
	var_2_object = var_341_string;
	
}


void func_4370(bool var_45_bool, object var_46_object)
{
	cvector var_48_cvector;
	var_46_object->GetPosition(var_48_cvector);
	bool var_49_bool; cvector var_50_cvector;
	var_48_cvector = var_50_cvector;
	func_4360(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
}


// @pe
void func_4885(void)
{
	@SetVariable("ook1Anna2", 1);
}


// @pe
void func_5401(bool var_755_bool)
{
	int var_757_int;
	func_4689(var_757_int, "ook11Anna1");
	if(var_757_int == 0) {
		var_755_bool = true;
		return 0;
	}
	var_755_bool = false;
}


// @pe
void func_4891(void)
{
	@SetVariable("ook1Anna3", 1);
}


void func_4379(bool var_42_bool)
{
	bool var_44_bool;
	@IsLoaded(var_44_bool);
	var_44_bool = var_42_bool;
}


void func_4384(bool var_73_bool, object var_74_object, float var_75_float)
{
	cvector var_86_cvector; bool var_93_bool;
	var_74_object->GetPosition(var_86_cvector);
	float var_85_float;
	var_74_object->GetEyesHeight(var_85_float);
	var_94_float = GetByIndex(var_86_cvector, 1);
	SetByIndex(var_86_cvector, 1) = (var_94_float + var_85_float);
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	@GetEyesHeight(var_85_float);
	var_95_float = GetByIndex(var_87_cvector, 1);
	SetByIndex(var_87_cvector, 1) = (var_95_float + var_85_float);
	cvector var_88_cvector = var_86_cvector - var_87_cvector;
	var_96_float = GetByIndex(var_88_cvector, 1);
	SetByIndex(var_88_cvector, 1) = (float)0;
	var_98_float = sqrt(var_88_cvector | var_88_cvector);
	var_88_cvector /= var_98_float;
	cvector var_89_cvector = -var_88_cvector;
	cvector var_100_cvector;
	func_4668(var_100_cvector, (var_89_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_90_cvector = ((var_88_cvector * var_75_float) + (var_100_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_92_bool;
	@IsOverrideActive(var_92_bool);
	if(var_92_bool != 0)
		var_73_bool = false;
	@StopWorld();
	@CameraTransit((var_87_cvector + var_90_cvector), var_89_cvector, true);
	var_114_float = GetByIndex(var_90_cvector, 0);
	var_115_float = GetByIndex(var_90_cvector, 2);
	@Rotate(var_114_float, var_115_float);
	bool var_116_bool;
	func_4854(var_116_bool);
	if(var_116_bool != 0) {
	} else {
		@HasAnimationTrack(var_93_bool, "head");
		if(var_93_bool == 0) goto Label_4447;
		@LookAsyncCamera("head");
	}
Label_4447:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_73_bool = true;
	
}


void func_4897(void)
{
	@SetVariable("k1q03", 1);
	object var_53_object;
	func_5662(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	float var_64_float;
	func_4802(var_64_float);
	var_50_object->AddMark("k1q03AnnaGotoNotkin", "pt_map_notkin", 0, 524799, var_64_float);
	func_5491();
	func_5504();
}
EMIT "Stack[-1] = 0";


void func_5413(void)
{
	object var_128_object;
	@CreateDiaryEntry(var_128_object, 498, 1, 528065);
	bool var_132_bool; object var_133_object;
	var_128_object = var_133_object;
	func_5634(var_132_bool, var_133_object, 480);
}
EMIT "Stack[-1] = 0";


void func_5426(void)
{
	object var_118_object;
	@CreateDiaryEntry(var_118_object, 497, 1, 528064);
	bool var_122_bool; object var_123_object;
	var_118_object = var_123_object;
	func_5634(var_122_bool, var_123_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2869(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_651_object, object var_652_object)
{
	var_0_object = var_652_object;
	var_1_object = var_651_object;
	var_3_string = false;
	if(1 != 0) {
		func_2955(var_652_object, "Fear");
		var_0_object->SetMessage(526085); //@t
		var_0_object->ClearReplies(); //@t
		bool var_667_bool = false;
		bool var_668_bool = false;
		bool var_669_bool;
		func_5353(var_1_object);
		if(var_669_bool != 0) {
			bool var_675_bool;
			func_5365(var_1_object);
			if(var_675_bool != 0)
				var_668_bool = true;
		}
		if(var_668_bool != 0) {
			bool var_681_bool;
			func_5377(var_1_object);
			if(var_681_bool != 0)
				var_667_bool = true;
		}
		if(var_667_bool != 0)
			var_0_object->AddReply(526086, 27373, 27372); //@t
		var_0_object->AddReply(526089, -1, 27375); //@t
		var_0_object->AddReply(528861, -1, 30283); //@t
		goto Label_2925;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb39";
	}
Label_2925:
	bool var_696_bool;
	func_4854(var_696_bool);
	if(var_696_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4609(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2954;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2954:
		return 0;

	}
	
}


// @pe
void func_4923(void)
{
	@SetVariable("k1q03", 1000);
	func_5517();
}


void func_5439(void)
{
	object var_108_object;
	@CreateDiaryEntry(var_108_object, 496, 1, 528063);
	bool var_112_bool; object var_113_object;
	var_108_object = var_113_object;
	func_5634(var_112_bool, var_113_object, 480);
}
EMIT "Stack[-1] = 0";


void func_4932(void)
{
	@SetVariable("k2q04", 2);
	object var_53_object;
	func_5662(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	float var_64_float;
	func_4802(var_64_float);
	var_50_object->AddMark("k2q04AnnaGotoGatherer1", "pt_map_gatherer1", 0, 508643, var_64_float);
	float var_71_float;
	func_4802(var_71_float);
	var_50_object->AddMark("k2q04AnnaGotoGatherer2", "pt_map_gatherer2", 0, 539379, var_71_float);
	float var_76_float;
	func_4802(var_76_float);
	var_50_object->AddMark("k2q04AnnaGotoGatherer3", "pt_map_gatherer3", 0, 508644, var_76_float);
	func_5543();
}
EMIT "Stack[-1] = 0";


void func_5452(void)
{
	object var_98_object;
	@CreateDiaryEntry(var_98_object, 495, 1, 528062);
	bool var_102_bool; object var_103_object;
	var_98_object = var_103_object;
	func_5634(var_102_bool, var_103_object, 480);
}
EMIT "Stack[-1] = 0";


void func_5465(void)
{
	object var_88_object;
	@CreateDiaryEntry(var_88_object, 494, 1, 528061);
	bool var_92_bool; object var_93_object;
	var_88_object = var_93_object;
	func_5634(var_92_bool, var_93_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3930(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_862_object, object var_863_object)
{
	var_0_object = var_863_object;
	var_1_object = var_862_object;
	var_3_string = false;
	if(1 != 0) {
		func_3988(var_863_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_3958;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf5e";
	}
Label_3958:
	bool var_884_bool;
	func_4854(var_884_bool);
	if(var_884_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4609(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3987;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3987:
		return 0;

	}
	
}


void func_4453(void)
{
	bool var_281_bool;
	@CameraSwitchToNormal(true);
	bool var_283_bool;
	func_4854(var_283_bool);
	if(var_283_bool != 0) {
	} else {
		@HasAnimationTrack(var_281_bool, "head");
		if(var_281_bool == 0) goto Label_4470;
		@UnlookAsync("head");
	}
Label_4470:
	
}


void func_5478(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 493, 1, 528060);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_5634(var_67_bool, var_68_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4973(void)
{
	@SetVariable("k2q04", 9);
	func_5530();
}


void func_5491(void)
{
	object var_68_object;
	@CreateDiaryEntry(var_68_object, 333, 2, 524800);
	bool var_72_bool; object var_73_object;
	var_68_object = var_73_object;
	func_5634(var_72_bool, var_73_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4982(object var_114_object)
{
	@Trace("alpha_pills 5 is given");
	object var_117_object;
	var_114_object = var_117_object;
	func_4744(var_117_object, "alpha_pills", 5);
}


void func_4471(bool var_134_bool, object var_135_object)
{
	int var_141_int; int var_142_int;
	@GetVariable("voice_common", var_141_int);
	if(var_141_int != 0) {
		bool var_145_bool; object var_146_object;
		var_135_object = var_146_object;
		func_4529(var_145_bool, var_146_object);
		if(!var_145_bool) { //@nz
			bool var_176_bool; object var_177_object;
			var_135_object = var_177_object;
			func_4566(var_176_bool, var_177_object);
			if(!var_176_bool) { //@nz
				var_134_bool = false;
				return 4;
			}
		}
		@irand(var_142_int, 2);
		if(var_142_int != 0)
			@SetVariable("voice_common", ((var_141_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_221_bool; object var_222_object;
		var_135_object = var_222_object;
		func_4566(var_221_bool, var_222_object);
		if(!var_221_bool) { //@nz
			bool var_224_bool; object var_225_object;
			var_135_object = var_225_object;
			func_4529(var_224_bool, var_225_object);
			if(!var_224_bool) { //@nz
				var_134_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4527;
	
Label_4527:
	var_134_bool = true;
	
}


void func_5504(void)
{
	object var_91_object;
	@CreateDiaryEntry(var_91_object, 334, 2, 524801);
	bool var_95_bool; object var_96_object;
	var_91_object = var_96_object;
	func_5634(var_95_bool, var_96_object, 333);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4993(object var_138_object)
{
	@Trace("beta_pills 5 is given");
	object var_141_object;
	var_138_object = var_141_object;
	func_4744(var_141_object, "beta_pills", 5);
}


// @pe
void func_2955(object var_2_object, string var_658_string)
{
	bool var_659_bool;
	func_4854(var_659_bool);
	if(!var_659_bool) //@nz
		return 0;
	if(var_658_string == var_2_object)
		return 0;
	string var_662_string; bool var_663_bool;
	var_658_string = var_662_string;
	if(var_658_string == "")
		var_663_bool = false;
	else
		var_663_bool = true;
	func_4625(var_662_string, var_663_bool);
	var_2_object = var_658_string;
	
}


void func_5004(void)
{
	@SetVariable("k3q01", 2);
	object var_53_object;
	func_5662(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	float var_64_float;
	func_4802(var_64_float);
	var_50_object->AddMark("k3q01AnnaGotoMladVlad", "pt_map_mladvlad", 1, 525454, var_64_float);
	float var_71_float;
	func_4802(var_71_float);
	var_50_object->AddMark("k3q01AnnaGotoKapella", "pt_map_kapella", 1, 525455, var_71_float);
	func_5569();
}
EMIT "Stack[-1] = 0";


void func_5517(void)
{
	object var_137_object;
	@CreateDiaryEntry(var_137_object, 336, 2, 524803);
	bool var_141_bool; object var_142_object;
	var_137_object = var_142_object;
	func_5634(var_141_bool, var_142_object, 333);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3988(object var_2_object, string var_869_string)
{
	bool var_870_bool;
	func_4854(var_870_bool);
	if(!var_870_bool) //@nz
		return 0;
	if(var_869_string == var_2_object)
		return 0;
	string var_873_string; bool var_874_bool;
	var_869_string = var_873_string;
	if(var_869_string == "")
		var_874_bool = false;
	else
		var_874_bool = true;
	func_4625(var_873_string, var_874_bool);
	var_2_object = var_869_string;
	
}


void func_5530(void)
{
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 510, 2, 529709);
	bool var_111_bool; object var_112_object;
	var_107_object = var_112_object;
	func_5634(var_111_bool, var_112_object, 507);
}
EMIT "Stack[-1] = 0";


void func_3490(object var_0_object, int var_779_int, object var_780_object)
{
	var_0_object = var_780_object;
	bool var_790_bool; object var_791_object;
	var_780_object = var_791_object;
	func_4384(var_790_bool, var_791_object, 70.0);
	if(!var_790_bool) { //@nz
		var_779_int = -2;
		return 8;
	}
	object var_786_object;
	@CreateDialog(var_786_object);
	int var_794_int;
	func_4848(var_794_int);
	var_786_object->SetNPCName(var_794_int);
	int var_795_int;
	func_4846(var_795_int);
	var_786_object->SetNPCDescription(var_795_int);
	string var_796_string;
	func_4850(var_796_string);
	var_786_object->SetPhoto(var_796_string);
	string var_797_string;
	func_4852(var_797_string);
	var_786_object->SetPhoto2(var_797_string);
	int var_798_int;
	func_5712(var_798_int);
	var_786_object->SetPlayerName(var_798_int);
	bool var_787_bool;
	@IsOverrideActive(var_787_bool);
	if(var_787_bool != 0) {
		var_779_int = -2;
		return 8;
	}
	@DoDialog(var_786_object);
	bool var_800_bool; object var_801_object;
	object var_802_object;
	func_4662(var_802_object);
	var_802_object = var_801_object;
	func_4471(var_800_bool, var_801_object);
	object var_803_object; object var_804_object;
	var_780_object = var_803_object;
	var_786_object = var_804_object;
	TaskCall(13);
	func_3571(var_805_object, var_806_object, var_807_string, var_808_bool, var_803_object, var_804_object);
	TaskReturn();
	bool var_789_bool;
	var_786_object->IsDialogEnd(var_789_bool);
	
	for(;;) {
		var_836_bool = !var_789_bool; //@nz
		if(var_836_bool == 0) goto Label_3560;
		@sync();
		var_786_object->IsDialogEnd(var_789_bool);
	}
	
Label_3560:
	object var_837_object;
	var_780_object = var_837_object;
	func_4453();
	@StopDialog(var_786_object);
	var_786_object->GetReturnValue(-1);
	int var_788_int = var_779_int;
}
EMIT "Stack[-4] = 0";


void func_5543(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 509, 2, 529708);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_5634(var_82_bool, var_83_object, 507);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5036(void)
{
	@SetVariable("k3q01", 3);
	func_5556();
}


void func_4529(bool var_145_bool, object var_146_object)
{
	string var_152_string; bool var_154_bool; int var_155_int; string var_156_string;
	var_152_string = "c";
	int var_153_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_146_object->HasProperty((var_152_string + (var_153_int + 1)), var_154_bool);
			if(!var_154_bool) { //@nz
			} else {
				var_153_int += 1;
			}
		}
		if(!var_153_int) { //@nz
			var_145_bool = false;
			return 10;
		}
		var_155_int = 0;
		if(var_153_int > 1)
			@irand(var_155_int, var_153_int);
		var_146_object->GetProperty((var_152_string + (var_155_int + 1)), var_156_string);
		bool var_168_bool; string var_169_string;
		var_156_string = var_169_string;
		func_4640(var_168_bool, var_169_string);
		var_168_bool = var_145_bool;
		return 10;

	}
}


void func_5556(void)
{
	object var_112_object;
	@CreateDiaryEntry(var_112_object, 341, 1, 525450);
	bool var_116_bool; object var_117_object;
	var_112_object = var_117_object;
	func_5634(var_116_bool, var_117_object, 337);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5045(void)
{
	@SetVariable("ook3Anna1", 1);
}


void func_5051(void)
{
	@SetVariable("k3q03", 1);
	object var_135_object;
	func_5662(var_135_object);
	object var_132_object;
	var_135_object = var_132_object;
	float var_140_float;
	func_4802(var_140_float);
	var_132_object->AddMark("k3q03AnnaGotoEva", "pt_map_eva", 0, 525615, var_140_float);
	func_5582();
	func_5595();
}
EMIT "Stack[-1] = 0";


void func_5569(void)
{
	object var_73_object;
	@CreateDiaryEntry(var_73_object, 339, 1, 525448);
	bool var_77_bool; object var_78_object;
	var_73_object = var_78_object;
	func_5634(var_77_bool, var_78_object, 337);
}
EMIT "Stack[-1] = 0";


void func_5582(void)
{
	object var_142_object;
	@CreateDiaryEntry(var_142_object, 350, 2, 525616);
	bool var_146_bool; object var_147_object;
	var_142_object = var_147_object;
	func_5634(var_146_bool, var_147_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5077(void)
{
	@SetVariable("ook6Anna1", 1);
}


void func_4566(bool var_176_bool, object var_177_object)
{
	bool var_185_bool; int var_186_int; string var_187_string;
	int var_189_int;
	func_4807(var_189_int);
	string var_183_string = ("d" + var_189_int) + "m";
	int var_184_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_177_object->HasProperty((var_183_string + (var_184_int + 1)), var_185_bool);
			if(!var_185_bool) { //@nz
			} else {
				var_184_int += 1;
			}
		}
		if(!var_184_int) { //@nz
			var_176_bool = false;
			return 10;
		}
		var_186_int = 0;
		if(var_184_int > 1)
			@irand(var_186_int, var_184_int);
		var_177_object->GetProperty((var_183_string + (var_186_int + 1)), var_187_string);
		bool var_208_bool; string var_209_string;
		var_187_string = var_209_string;
		func_4640(var_208_bool, var_209_string);
		var_208_bool = var_176_bool;
		return 10;

	}
}


// @pe
void func_5083(void)
{
	func_5608();
}


void func_4059(object var_0_object)
{
	bool var_42_bool;
	func_4379(var_42_bool);
	if(!var_42_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_4235();
	}
}
EMIT "Return(); Pop(0)";


void func_5595(void)
{
	object var_150_object;
	@CreateDiaryEntry(var_150_object, 351, 2, 525617);
	bool var_154_bool; object var_155_object;
	var_150_object = var_155_object;
	func_5634(var_154_bool, var_155_object, 350);
}
EMIT "Stack[-1] = 0";


void func_5088(void)
{
	int var_56_int;
	@GetVariable("k11q01SoulCount", var_56_int);
	var_56_int += 1;
	@SetVariable("k11q01SoulCount", var_56_int);
	if(var_56_int == 2) {
		func_5478();
	} else if(var_56_int == 3) {
			func_5465();
	}

	for(;;) {
		return 2;

	}
	
	if(var_56_int == 4) {
		func_5452();
	} else if(var_56_int == 5) {
		func_5439();
	} else if(var_56_int == 6) {
		func_5426();
	} else if(var_56_int == 7) {
		func_5413();
	}
}


void func_5608(void)
{
	object var_56_object;
	@CreateDiaryEntry(var_56_object, 412, 1, 526113);
	bool var_60_bool; object var_61_object;
	var_56_object = var_61_object;
	func_5634(var_60_bool, var_61_object, 408);
}
EMIT "Stack[-1] = 0";


void func_4073(bool var_66_bool)
{
	object var_68_object;
	@FindActor(var_68_object, "player");
	if(!var_68_object) //@nz
		var_66_bool = false;
	bool var_71_bool; object var_72_object;
	var_68_object = var_72_object;
	func_4370(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
}
EMIT "Stack[-1] = 0";


void func_1003(object var_0_object, int var_438_int, object var_439_object)
{
	var_0_object = var_439_object;
	bool var_449_bool; object var_450_object;
	var_439_object = var_450_object;
	func_4384(var_449_bool, var_450_object, 70.0);
	if(!var_449_bool) { //@nz
		var_438_int = -2;
		return 8;
	}
	object var_445_object;
	@CreateDialog(var_445_object);
	int var_453_int;
	func_4848(var_453_int);
	var_445_object->SetNPCName(var_453_int);
	int var_454_int;
	func_4846(var_454_int);
	var_445_object->SetNPCDescription(var_454_int);
	string var_455_string;
	func_4850(var_455_string);
	var_445_object->SetPhoto(var_455_string);
	string var_456_string;
	func_4852(var_456_string);
	var_445_object->SetPhoto2(var_456_string);
	int var_457_int;
	func_5712(var_457_int);
	var_445_object->SetPlayerName(var_457_int);
	bool var_446_bool;
	@IsOverrideActive(var_446_bool);
	if(var_446_bool != 0) {
		var_438_int = -2;
		return 8;
	}
	@DoDialog(var_445_object);
	bool var_459_bool; object var_460_object;
	object var_461_object;
	func_4662(var_461_object);
	var_461_object = var_460_object;
	func_4471(var_459_bool, var_460_object);
	object var_462_object; object var_463_object;
	var_439_object = var_462_object;
	var_445_object = var_463_object;
	TaskCall(3);
	func_1084(var_464_object, var_465_object, var_466_string, var_467_bool, var_462_object, var_463_object);
	TaskReturn();
	bool var_448_bool;
	var_445_object->IsDialogEnd(var_448_bool);
	
	for(;;) {
		var_510_bool = !var_448_bool; //@nz
		if(var_510_bool == 0) goto Label_1073;
		@sync();
		var_445_object->IsDialogEnd(var_448_bool);
	}
	
Label_1073:
	object var_511_object;
	var_439_object = var_511_object;
	func_4453();
	@StopDialog(var_445_object);
	var_445_object->GetReturnValue(-1);
	int var_447_int = var_438_int;
}
EMIT "Stack[-4] = 0";


void func_1515(object var_0_object, int var_514_int, object var_515_object)
{
	var_0_object = var_515_object;
	bool var_525_bool; object var_526_object;
	var_515_object = var_526_object;
	func_4384(var_525_bool, var_526_object, 70.0);
	if(!var_525_bool) { //@nz
		var_514_int = -2;
		return 8;
	}
	object var_521_object;
	@CreateDialog(var_521_object);
	int var_529_int;
	func_4848(var_529_int);
	var_521_object->SetNPCName(var_529_int);
	int var_530_int;
	func_4846(var_530_int);
	var_521_object->SetNPCDescription(var_530_int);
	string var_531_string;
	func_4850(var_531_string);
	var_521_object->SetPhoto(var_531_string);
	string var_532_string;
	func_4852(var_532_string);
	var_521_object->SetPhoto2(var_532_string);
	int var_533_int;
	func_5712(var_533_int);
	var_521_object->SetPlayerName(var_533_int);
	bool var_522_bool;
	@IsOverrideActive(var_522_bool);
	if(var_522_bool != 0) {
		var_514_int = -2;
		return 8;
	}
	@DoDialog(var_521_object);
	bool var_535_bool; object var_536_object;
	object var_537_object;
	func_4662(var_537_object);
	var_537_object = var_536_object;
	func_4471(var_535_bool, var_536_object);
	object var_538_object; object var_539_object;
	var_515_object = var_538_object;
	var_521_object = var_539_object;
	TaskCall(5);
	func_1596(var_540_object, var_541_object, var_542_string, var_543_bool, var_538_object, var_539_object);
	TaskReturn();
	bool var_524_bool;
	var_521_object->IsDialogEnd(var_524_bool);
	
	for(;;) {
		var_623_bool = !var_524_bool; //@nz
		if(var_623_bool == 0) goto Label_1585;
		@sync();
		var_521_object->IsDialogEnd(var_524_bool);
	}
	
Label_1585:
	object var_624_object;
	var_515_object = var_624_object;
	func_4453();
	@StopDialog(var_521_object);
	var_521_object->GetReturnValue(-1);
	int var_523_int = var_514_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3571(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_803_object, object var_804_object)
{
	var_0_object = var_804_object;
	var_1_object = var_803_object;
	var_3_string = false;
	if(1 != 0) {
		func_3634(var_804_object, "Neutral");
		var_0_object->SetMessage(539303); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(542544, 44940, 44939); //@t
		var_0_object->AddReply(539304, -1, 41247); //@t
		var_0_object->AddReply(542543, -1, 44938); //@t
		goto Label_3604;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xdf7";
	}
Label_3604:
	bool var_828_bool;
	func_4854(var_828_bool);
	if(var_828_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4609(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3633;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3633:
		return 0;

	}
	
}


void func_5621(object var_76_object)
{
	object var_78_object;
	@GetDiaryRoot(var_78_object);
	if(!var_78_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_76_object = false;
	}
	var_78_object = var_76_object;
}
EMIT "Stack[-1] = 0";


void func_4088(object var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_118_float, var_119_float);
}


void func_4093(bool var_49_bool)
{
	object var_52_object;
	@FindActor(var_52_object, "player");
	if(!var_52_object) { //@nz
		var_49_bool = false;
		return 4;
	}
	float var_56_float; object var_57_object;
	func_4311(var_56_float, var_57_object);
	if(var_56_float > 90000.0) {
		var_49_bool = false;
		return 4;
	}
	bool var_53_bool;
	@CanSee(var_53_bool, var_57_object);
	var_53_bool = var_49_bool;
}
EMIT "Stack[-2] = 0";


