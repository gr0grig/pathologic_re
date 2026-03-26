GlobalVarCount = 0

Strings:
	W:d1q01_trigger
	W:d1q01_trigger.xml
	W:warehouse_rubin
	W:norubin
	W:place_masks
	W:pt_d1q01_birdmask
	W:pers_birdmask
	W:d1q01_birdmask.xml
	W:pt_d1q01_whitemask
	W:pers_whitemask
	W:d1q01_whitemask.xml
	W:remove_masks
	A:Remove
	W:cutscene_end
	W:pt_d1q01_morlok
	W:pers_morlok
	W:d1q01_morlok.xml
	W:pt_d1q01_worker
	W:pers_worker
	W:d1q01_worker.xml
	W:remove_cutscene
	W:attack
	W:place_patrol
	W:pt_d1q01_patrol1
	W:pers_patrool
	W:d1q01_patrol.xml
	W:pt_d1q01_patrol2
	W:place_morlok_run
	W:pt_d1q01_morlok_run_path
	W:d1q01_morlok_run.xml
	W:place_rubin
	W:cot_viktor
	W:pt_d1q01_rubin
	W:NPC_Rubin
	W:d1q01_rubin.xml
	W:unlock_doors
	W:cleanup
	W:d1q01
	W:fail
	W:completed
	W:icot_eva@door1
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:cot_anna@door1
	W:cot_julia@door1
	W:cot_lara@door1
	W:house_vlad@door1
	W:dt_house_1_04@door1
// @pool_raw:640031007100300031005f0074007200690067006700650072000000640031007100300031005f0074007200690067006700650072002e0078006d006c000000770061007200650068006f007500730065005f0072007500620069006e0000006e006f0072007500620069006e00000070006c006100630065005f006d00610073006b0073000000700074005f00640031007100300031005f0062006900720064006d00610073006b00000070006500720073005f0062006900720064006d00610073006b000000640031007100300031005f0062006900720064006d00610073006b002e0078006d006c000000700074005f00640031007100300031005f00770068006900740065006d00610073006b00000070006500720073005f00770068006900740065006d00610073006b000000640031007100300031005f00770068006900740065006d00610073006b002e0078006d006c000000720065006d006f00760065005f006d00610073006b007300000052656d6f7665006300750074007300630065006e0065005f0065006e0064000000700074005f00640031007100300031005f006d006f0072006c006f006b00000070006500720073005f006d006f0072006c006f006b000000640031007100300031005f006d006f0072006c006f006b002e0078006d006c000000700074005f00640031007100300031005f0077006f0072006b0065007200000070006500720073005f0077006f0072006b00650072000000640031007100300031005f0077006f0072006b00650072002e0078006d006c000000720065006d006f00760065005f006300750074007300630065006e0065000000610074007400610063006b00000070006c006100630065005f0070006100740072006f006c000000700074005f00640031007100300031005f0070006100740072006f006c003100000070006500720073005f0070006100740072006f006f006c000000640031007100300031005f0070006100740072006f006c002e0078006d006c000000700074005f00640031007100300031005f0070006100740072006f006c003200000070006c006100630065005f006d006f0072006c006f006b005f00720075006e000000700074005f00640031007100300031005f006d006f0072006c006f006b005f00720075006e005f0070006100740068000000640031007100300031005f006d006f0072006c006f006b005f00720075006e002e0078006d006c00000070006c006100630065005f0072007500620069006e00000063006f0074005f00760069006b0074006f0072000000700074005f00640031007100300031005f0072007500620069006e0000004e00500043005f0052007500620069006e000000640031007100300031005f0072007500620069006e002e0078006d006c00000075006e006c006f0063006b005f0064006f006f0072007300000063006c00650061006e007500700000006400310071003000310000006600610069006c00000063006f006d0070006c0065007400650064000000690063006f0074005f00650076006100400064006f006f007200310000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f70657274790063006f0074005f0061006e006e006100400064006f006f0072003100000063006f0074005f006a0075006c0069006100400064006f006f0072003100000063006f0074005f006c00610072006100400064006f006f0072003100000068006f007500730065005f0076006c0061006400400064006f006f00720031000000640074005f0068006f007500730065005f0031005f0030003400400064006f006f00720031000000

Import:
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object, bool) Params = 0
		EVENT_26 Op = 0x18 Vars = (string)


0x0: PushEmpty(object, object)
0x1: PushEmpty()
0x2: Call2 0x158

0x3: Pop(0)
0x4: @ GetMainOutdoorScene(Stack[-1])
0x5: Pop(0)
0x6: PushEmpty(object, object, string, string)
0x7: Stack[-5] = Stack[-3]
0x8: Stack[-2] = "d1q01_trigger" // @poff=0
0x9: Stack[-1] = "d1q01_trigger.xml" // @poff=28
0xa: Call2 0x11b

0xb: Stack[2 + Tasks[-1].StackPointer] = Stack[-4]
0xc: Pop(4)
0xd: Push("warehouse_rubin") // @poff=64
0xe: @ GetSceneByName(Stack[-2], Stack[-1])
0xf: Pop(1)
0x10: Push("norubin") // @poff=96
0x11: @ Trigger(Stack[-2], Stack[-1])
0x12: Pop(1)
0x13: @ Hold()
0x14: Pop(0)
0x15: GOTO 0x13

0x16: Return(); Pop(2)

0x17: Stack[-1] = 0
0x18: PushEmpty(object, object, object, object, object, int, object, object, object, object, object, int)
0x19: @ Trace(Stack[-13])
0x1a: Pop(0)
0x1b: Push("place_masks") // @poff=112
0x1c: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x1e: @ GetMainOutdoorScene(Stack[-6])
0x1f: Pop(0)
0x20: PushEmpty(object, object, string, string, string)
0x21: Stack[-11] = Stack[-4]
0x22: Stack[-3] = "pt_d1q01_birdmask" // @poff=136
0x23: Stack[-2] = "pers_birdmask" // @poff=172
0x24: Stack[-1] = "d1q01_birdmask.xml" // @poff=200
0x25: Call2 0x135

0x26: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x27: Pop(5)
0x28: PushEmpty(object, object, string, string, string)
0x29: Stack[-11] = Stack[-4]
0x2a: Stack[-3] = "pt_d1q01_whitemask" // @poff=238
0x2b: Stack[-2] = "pers_whitemask" // @poff=276
0x2c: Stack[-1] = "d1q01_whitemask.xml" // @poff=306
0x2d: Call2 0x135

0x2e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x2f: Pop(5)
0x30: Stack[-6] = 0
0x31: GOTO 0xc5

0x32: Push("remove_masks") // @poff=346
0x33: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x35: @@@ Remove(); Obj=0 // @poff=372
0x36: Pop(0)
0x37: @@@ Remove(); Obj=1 // @poff=372
0x38: Pop(0)
0x39: GOTO 0xc5

0x3a: Push("cutscene_end") // @poff=379
0x3b: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x3d: @ GetMainOutdoorScene(Stack[-5])
0x3e: Pop(0)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-10] = Stack[-4]
0x41: Stack[-3] = "pt_d1q01_morlok" // @poff=405
0x42: Stack[-2] = "pers_morlok" // @poff=437
0x43: Stack[-1] = "d1q01_morlok.xml" // @poff=461
0x44: Call2 0x123

0x45: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x46: Pop(5)
0x47: PushEmpty(object, object, string, string, string)
0x48: Stack[-10] = Stack[-4]
0x49: Stack[-3] = "pt_d1q01_worker" // @poff=495
0x4a: Stack[-2] = "pers_worker" // @poff=527
0x4b: Stack[-1] = "d1q01_worker.xml" // @poff=551
0x4c: Call2 0x123

0x4d: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x4e: Pop(5)
0x4f: Push( Stack[8 + Tasks[-1].StackPointer] )
0x50: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x51: PushEmpty()
0x52: Call2 0xd6

0x53: Pop(0)
0x54: Stack[-5] = 0
0x55: GOTO 0xc5

0x56: Push("remove_cutscene") // @poff=585
0x57: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x59: PushEmpty()
0x5a: Call2 0xd6

0x5b: Pop(0)
0x5c: GOTO 0xc5

0x5d: Push("attack") // @poff=617
0x5e: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x60: Push( Stack[3 + Tasks[-1].StackPointer] )
0x61: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x62: Push("attack") // @poff=617
0x63: @ Trigger(Stack[-3]T, Stack[-1])
0x64: Pop(1)
0x65: Push( Stack[4 + Tasks[-1].StackPointer] )
0x66: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x67: Push("attack") // @poff=617
0x68: @ Trigger(Stack[-4]T, Stack[-1])
0x69: Pop(1)
0x6a: GOTO 0xc5

0x6b: Push("place_patrol") // @poff=631
0x6c: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x6e: @ GetMainOutdoorScene(Stack[-4])
0x6f: Pop(0)
0x70: PushEmpty(object, object, string, string, string)
0x71: Stack[-9] = Stack[-4]
0x72: Stack[-3] = "pt_d1q01_patrol1" // @poff=657
0x73: Stack[-2] = "pers_patrool" // @poff=691
0x74: Stack[-1] = "d1q01_patrol.xml" // @poff=717
0x75: Call2 0x123

0x76: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x77: Pop(5)
0x78: PushEmpty(object, object, string, string, string)
0x79: Stack[-9] = Stack[-4]
0x7a: Stack[-3] = "pt_d1q01_patrol2" // @poff=751
0x7b: Stack[-2] = "pers_patrool" // @poff=691
0x7c: Stack[-1] = "d1q01_patrol.xml" // @poff=717
0x7d: Call2 0x123

0x7e: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0x7f: Pop(5)
0x80: Stack[-4] = 0
0x81: GOTO 0xc5

0x82: Push("place_morlok_run") // @poff=785
0x83: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x85: @ GetMainOutdoorScene(Stack[-3])
0x86: Pop(0)
0x87: PushEmpty(object, object, string, string, string)
0x88: Stack[-8] = Stack[-4]
0x89: Stack[-3] = "pt_d1q01_morlok_run_path" // @poff=819
0x8a: Stack[-2] = "pers_morlok" // @poff=437
0x8b: Stack[-1] = "d1q01_morlok_run.xml" // @poff=869
0x8c: Call2 0x123

0x8d: Pop(5)
0x8e: Stack[-3] = 0
0x8f: GOTO 0xc5

0x90: Push("place_rubin") // @poff=911
0x91: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x93: Push("cot_viktor") // @poff=935
0x94: @ GetSceneByName(Stack[-3], Stack[-1])
0x95: Pop(1)
0x96: PushEmpty(object, object, string, string, string)
0x97: Stack[-7] = Stack[-4]
0x98: Stack[-3] = "pt_d1q01_rubin" // @poff=957
0x99: Stack[-2] = "NPC_Rubin" // @poff=987
0x9a: Stack[-1] = "d1q01_rubin.xml" // @poff=1007
0x9b: Call2 0x123

0x9c: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0x9d: Pop(5)
0x9e: Stack[-2] = 0
0x9f: GOTO 0xc5

0xa0: Push("unlock_doors") // @poff=1039
0xa1: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0x172

0xa5: Pop(0)
0xa6: GOTO 0xc5

0xa7: Push("cleanup") // @poff=1065
0xa8: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xaa: Push("d1q01") // @poff=1081
0xab: @ GetVariable(Stack[-1], Stack[-2])
0xac: Pop(1)
0xad: Push((int) 1000)
0xae: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0xc6

0xb2: Pop(0)
0xb3: GOTO 0xb7

0xb4: PushEmpty()
0xb5: Call2 0xe7

0xb6: Pop(0)
0xb7: GOTO 0xc5

0xb8: Push("fail") // @poff=1093
0xb9: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0xc6

0xbd: Pop(0)
0xbe: GOTO 0xc5

0xbf: Push("completed") // @poff=1103
0xc0: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0xce

0xc4: Pop(0)
0xc5: Return(); Pop(12)

0xc6: Push("d1q01") // @poff=1081
0xc7: Push((int) -1)
0xc8: @ SetVariable(Stack[-2], Stack[-1])
0xc9: Pop(2)
0xca: PushEmpty()
0xcb: Call2 0xe7

0xcc: Pop(0)
0xcd: Return(); Pop(0)

0xce: Push("d1q01") // @poff=1081
0xcf: Push((int) 1000)
0xd0: @ SetVariable(Stack[-2], Stack[-1])
0xd1: Pop(2)
0xd2: PushEmpty()
0xd3: Call2 0xe7

0xd4: Pop(0)
0xd5: Return(); Pop(0)

0xd6: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd7: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd8: Push("cleanup") // @poff=1065
0xd9: @ Trigger(Stack[-2]T, Stack[-1])
0xda: Pop(1)
0xdb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdc: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdd: Push("cleanup") // @poff=1065
0xde: @ Trigger(Stack[-3]T, Stack[-1])
0xdf: Pop(1)
0xe0: Push( Stack[4 + Tasks[-1].StackPointer] )
0xe1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe2: Push("cleanup") // @poff=1065
0xe3: @ Trigger(Stack[-4]T, Stack[-1])
0xe4: Pop(1)
0xe5: Stack[8 + Tasks[-1].StackPointer] = (bool)1
0xe6: Return(); Pop(0)

0xe7: PushEmpty(object, object)
0xe8: EventDisable(26)
0xe9: PushEmpty()
0xea: Call2 0xd6

0xeb: Pop(0)
0xec: Push( Stack[0 + Tasks[-1].StackPointer] )
0xed: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xee: @@@ Remove(); Obj=0 // @poff=372
0xef: Pop(0)
0xf0: Push( Stack[1 + Tasks[-1].StackPointer] )
0xf1: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf2: @@@ Remove(); Obj=1 // @poff=372
0xf3: Pop(0)
0xf4: Push( Stack[5 + Tasks[-1].StackPointer] )
0xf5: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf6: Push("cleanup") // @poff=1065
0xf7: @ Trigger(Stack[-5]T, Stack[-1])
0xf8: Pop(1)
0xf9: Push( Stack[5 + Tasks[-1].StackPointer] )
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: Push("cleanup") // @poff=1065
0xfc: @ Trigger(Stack[-6]T, Stack[-1])
0xfd: Pop(1)
0xfe: Push( Stack[7 + Tasks[-1].StackPointer] )
0xff: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x100: Push("cleanup") // @poff=1065
0x101: @ Trigger(Stack[-7]T, Stack[-1])
0x102: Pop(1)
0x103: Push("warehouse_rubin") // @poff=64
0x104: @ GetSceneByName(Stack[-2], Stack[-1])
0x105: Pop(1)
0x106: Push("rubin") // @poff=84
0x107: @ Trigger(Stack[-2], Stack[-1])
0x108: Pop(1)
0x109: PushEmpty(string, bool)
0x10a: Stack[-2] = "icot_eva@door1" // @poff=1123
0x10b: Stack[-1] = (bool) 0
0x10c: Call2 0x147

0x10d: Pop(2)
0x10e: PushEmpty(object)
0x10f: Call2 0x115

0x110: Pop(0)
0x111: @ RemoveActor(Stack[-1])
0x112: Pop(1)
0x113: Return(); Pop(2)

0x114: Stack[-1] = 0
0x115: PushEmpty(object, object)
0x116: @ self(Stack[-1])
0x117: Pop(0)
0x118: Stack[-1] = Stack[-3]
0x119: Return(); Pop(2)

0x11a: Stack[-1] = 0
0x11b: PushEmpty(object, object)
0x11c: Push(CVector(0.0, 0.0, 0.0))
0x11d: Push(CVector(0.0, 0.0, 1.0))
0x11e: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0x11f: Pop(2)
0x120: Stack[-1] = Stack[-6]
0x121: Return(); Pop(2)

0x122: Stack[-1] = 0
0x123: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x124: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=1153
0x125: Pop(0)
0x126: Pop(0); Push((bool) Stack[-4] == 0)
0x127: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x128: Push("Locator ") // @poff=1164
0x129: Pop(1); Push(Stack[-1] + Stack[-12]);
0x12a: Push(" doesn't exist") // @poff=1182
0x12b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12c: @ Trace(Stack[-1])
0x12d: Pop(1)
0x12e: Stack[-1] = 0
0x12f: GOTO 0x132

0x130: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x131: Pop(0)
0x132: Stack[-1] = Stack[-13]
0x133: Return(); Pop(8)

0x134: Stack[-1] = 0
0x135: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x136: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=1153
0x137: Pop(0)
0x138: Pop(0); Push((bool) Stack[-4] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13a: Push("Locator ") // @poff=1164
0x13b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x13c: Push(" doesn't exist") // @poff=1182
0x13d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13e: @ Trace(Stack[-1])
0x13f: Pop(1)
0x140: Stack[-1] = 0
0x141: GOTO 0x144

0x142: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=1212
0x143: Pop(0)
0x144: Stack[-1] = Stack[-13]
0x145: Return(); Pop(8)

0x146: Stack[-1] = 0
0x147: PushEmpty(object, object)
0x148: @ FindActor(Stack[-1], Stack[-4])
0x149: Pop(0)
0x14a: Pop(0); Push((bool) Stack[-1] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14c: Push("Door ") // @poff=1231
0x14d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x14e: Push(" not found") // @poff=1243
0x14f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x150: @ Trace(Stack[-1])
0x151: Pop(1)
0x152: GOTO 0x156

0x153: Push("locked") // @poff=1265
0x154: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1279
0x155: Pop(1)
0x156: Return(); Pop(2)

0x157: Stack[-1] = 0
0x158: PushEmpty(string, bool)
0x159: Stack[-2] = "cot_anna@door1" // @poff=1291
0x15a: Stack[-1] = (bool) 1
0x15b: Call2 0x147

0x15c: Pop(2)
0x15d: PushEmpty(string, bool)
0x15e: Stack[-2] = "cot_julia@door1" // @poff=1321
0x15f: Stack[-1] = (bool) 1
0x160: Call2 0x147

0x161: Pop(2)
0x162: PushEmpty(string, bool)
0x163: Stack[-2] = "cot_lara@door1" // @poff=1353
0x164: Stack[-1] = (bool) 1
0x165: Call2 0x147

0x166: Pop(2)
0x167: PushEmpty(string, bool)
0x168: Stack[-2] = "house_vlad@door1" // @poff=1383
0x169: Stack[-1] = (bool) 1
0x16a: Call2 0x147

0x16b: Pop(2)
0x16c: PushEmpty(string, bool)
0x16d: Stack[-2] = "dt_house_1_04@door1" // @poff=1417
0x16e: Stack[-1] = (bool) 1
0x16f: Call2 0x147

0x170: Pop(2)
0x171: Return(); Pop(0)

0x172: PushEmpty(string, bool)
0x173: Stack[-2] = "cot_anna@door1" // @poff=1291
0x174: Stack[-1] = (bool) 0
0x175: Call2 0x147

0x176: Pop(2)
0x177: PushEmpty(string, bool)
0x178: Stack[-2] = "cot_julia@door1" // @poff=1321
0x179: Stack[-1] = (bool) 0
0x17a: Call2 0x147

0x17b: Pop(2)
0x17c: PushEmpty(string, bool)
0x17d: Stack[-2] = "cot_lara@door1" // @poff=1353
0x17e: Stack[-1] = (bool) 0
0x17f: Call2 0x147

0x180: Pop(2)
0x181: PushEmpty(string, bool)
0x182: Stack[-2] = "house_vlad@door1" // @poff=1383
0x183: Stack[-1] = (bool) 0
0x184: Call2 0x147

0x185: Pop(2)
0x186: PushEmpty(string, bool)
0x187: Stack[-2] = "dt_house_1_04@door1" // @poff=1417
0x188: Stack[-1] = (bool) 0
0x189: Call2 0x147

0x18a: Pop(2)
0x18b: Return(); Pop(0)

