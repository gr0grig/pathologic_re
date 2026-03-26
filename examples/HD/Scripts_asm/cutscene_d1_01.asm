GlobalVarCount = 0

Strings:
	W:cutscene_burn_d1
	W:play
	W:pt_cs_d1_01_worker
	W:pers_worker
	W:cutscene_d1_01_worker.xml
	W:pt_cs_d1_01_woman
	W:pers_woman
	W:cutscene_d1_01_woman.xml
	W:pt_cs_d1_01_alkash
	W:pers_alkash
	W:cutscene_d1_01_alkash.xml
	W:cs_cannibal_alkash1
	W:cs_play_all_trigger.bin
	A:add
	W:cs_cannibal_grabitel1
	W:cs_cannibal_unosha1
	W:cs_cannibal_unosha2
	W:cs_cannibal_woman1
	W:cs_cannibal_worker1
	W:pt_cs_d1_01_fire
	W:scripted
	W:bonfire_big.xml
	W:cs_cannibal_nudegirl
	W:space
	W:cs_cannibal.mot
	W:noaccess
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:RemoveProperty
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:size
	A:get
	A:clear
// @pool_raw:6300750074007300630065006e0065005f006200750072006e005f0064003100000070006c00610079000000700074005f00630073005f00640031005f00300031005f0077006f0072006b0065007200000070006500720073005f0077006f0072006b006500720000006300750074007300630065006e0065005f00640031005f00300031005f0077006f0072006b00650072002e0078006d006c000000700074005f00630073005f00640031005f00300031005f0077006f006d0061006e00000070006500720073005f0077006f006d0061006e0000006300750074007300630065006e0065005f00640031005f00300031005f0077006f006d0061006e002e0078006d006c000000700074005f00630073005f00640031005f00300031005f0061006c006b00610073006800000070006500720073005f0061006c006b0061007300680000006300750074007300630065006e0065005f00640031005f00300031005f0061006c006b006100730068002e0078006d006c000000630073005f00630061006e006e006900620061006c005f0061006c006b0061007300680031000000630073005f0070006c00610079005f0061006c006c005f0074007200690067006700650072002e00620069006e00000061646400630073005f00630061006e006e006900620061006c005f0067007200610062006900740065006c0031000000630073005f00630061006e006e006900620061006c005f0075006e006f0073006800610031000000630073005f00630061006e006e006900620061006c005f0075006e006f0073006800610032000000630073005f00630061006e006e006900620061006c005f0077006f006d0061006e0031000000630073005f00630061006e006e006900620061006c005f0077006f0072006b006500720031000000700074005f00630073005f00640031005f00300031005f006600690072006500000073006300720069007000740065006400000062006f006e0066006900720065005f006200690067002e0078006d006c000000630073005f00630061006e006e006900620061006c005f006e007500640065006700690072006c000000730070006100630065000000630073005f00630061006e006e006900620061006c002e006d006f00740000006e006f00610063006300650073007300000048617350726f70657274790047657450726f70657274790053657450726f70657274790052656d6f766550726f7065727479004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000073697a650067657400636c65617200

Import:
	SetTimeEvent (2 args)
	Hold (0 args)
	SetVariable (2 args)
	IsPlayerActor (2 args)
	Trigger (2 args)
	GetMainOutdoorScene (1 args)
	RemoveActor (1 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	CameraSwitchToNormal (0 args)
	IsLoaded (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	Trace (1 args)
	AddActor (6 args)
	AddScriptedActor (6 args)
	AddActorByType (6 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool, bool, object, object, object) Params = 0
		EVENT_6 Op = 0x13 Vars = ()
		EVENT_9 Op = 0x20 Vars = (int, float)
		EVENT_23 Op = 0x38 Vars = (object)
	GTASK_1  Params = 1
		EVENT_24 Op = 0xe7 Vars = (int)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3: PushEmpty(object)
0x4: Call2 0x121

0x5: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x6: Pop(1)
0x7: Push((int) 0)
0x8: Push((int) 7)
0x9: @ SetTimeEvent(Stack[-2], Stack[-1])
0xa: Pop(2)
0xb: Push((int) 1)
0xc: Push((int) 18)
0xd: @ SetTimeEvent(Stack[-2], Stack[-1])
0xe: Pop(2)
0xf: @ Hold()
0x10: Pop(0)
0x11: GOTO 0xf

0x12: Return(); Pop(0)

0x13: Push( Stack[2 + Tasks[-1].StackPointer] )
0x14: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x15: PushEmpty()
0x16: Call2 0xbd

0x17: Pop(0)
0x18: GOTO 0x1f

0x19: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1a: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1c: PushEmpty()
0x1d: Call2 0x6f

0x1e: Pop(0)
0x1f: Return(); Pop(0)

0x20: PushEmpty()
0x21: Push((int) 0)
0x22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x24: PushEmpty(bool)
0x25: Call2 0xeb

0x26: Pop(0)
0x27: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x28: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x29: GOTO 0x2d

0x2a: PushEmpty()
0x2b: Call2 0x6f

0x2c: Pop(0)
0x2d: GOTO 0x37

0x2e: PushEmpty(bool)
0x2f: Call2 0xeb

0x30: Pop(0)
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x33: GOTO 0x37

0x34: PushEmpty()
0x35: Call2 0xbd

0x36: Pop(0)
0x37: Return(); Pop(0)

0x38: PushEmpty(bool, object, bool, object)
0x39: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3a: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3b: Return(); Pop(4)

0x3c: Push("cutscene_burn_d1") // @poff=0
0x3d: Push((int) 1)
0x3e: @ SetVariable(Stack[-2], Stack[-1])
0x3f: Pop(2)
0x40: @ IsPlayerActor(Stack[-5], Stack[-2])
0x41: Pop(0)
0x42: Push(Stack[-2])
0x43: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x44: EventDisable(23)
0x45: PushEmpty(object, string)
0x46: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x47: Stack[-1] = "play" // @poff=34
0x48: Call2 0x168

0x49: Pop(2)
0x4a: Push("play") // @poff=34
0x4b: @ Trigger(Stack[-4]T, Stack[-1])
0x4c: Pop(1)
0x4d: PushEmpty(object)
0x4e: Stack[-6] = Stack[-1]
0x4f: Push(-1, 0); TaskCall(1)
0x50: Call2 0xca

0x51: Pop(-1, 0); TaskReturn
0x52: Pop(1)
0x53: @ GetMainOutdoorScene(Stack[-1])
0x54: Pop(0)
0x55: PushEmpty(object, object, string, string, string)
0x56: Stack[-6] = Stack[-4]
0x57: Stack[-3] = "pt_cs_d1_01_worker" // @poff=44
0x58: Stack[-2] = "pers_worker" // @poff=82
0x59: Stack[-1] = "cutscene_d1_01_worker.xml" // @poff=106
0x5a: Call2 0x127

0x5b: Pop(5)
0x5c: PushEmpty(object, object, string, string, string)
0x5d: Stack[-6] = Stack[-4]
0x5e: Stack[-3] = "pt_cs_d1_01_woman" // @poff=158
0x5f: Stack[-2] = "pers_woman" // @poff=194
0x60: Stack[-1] = "cutscene_d1_01_woman.xml" // @poff=216
0x61: Call2 0x127

0x62: Pop(5)
0x63: PushEmpty(object, object, string, string, string)
0x64: Stack[-6] = Stack[-4]
0x65: Stack[-3] = "pt_cs_d1_01_alkash" // @poff=266
0x66: Stack[-2] = "pers_alkash" // @poff=304
0x67: Stack[-1] = "cutscene_d1_01_alkash.xml" // @poff=328
0x68: Call2 0x127

0x69: Pop(5)
0x6a: PushEmpty()
0x6b: Call2 0xb4

0x6c: Pop(0)
0x6d: Stack[-1] = 0
0x6e: Return(); Pop(4)

0x6f: PushEmpty(object, object)
0x70: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x71: @ GetMainOutdoorScene(Stack[-1])
0x72: Pop(0)
0x73: PushEmpty(object, object, string, string)
0x74: Stack[-5] = Stack[-3]
0x75: Stack[-2] = "cs_cannibal_alkash1" // @poff=380
0x76: Stack[-1] = "cs_play_all_trigger.bin" // @poff=420
0x77: Call2 0x139

0x78: Pop(3)
0x79: @@@ add(Stack[-1]); Obj=3 // @poff=468
0x7a: Pop(1)
0x7b: PushEmpty(object, object, string, string)
0x7c: Stack[-5] = Stack[-3]
0x7d: Stack[-2] = "cs_cannibal_grabitel1" // @poff=472
0x7e: Stack[-1] = "cs_play_all_trigger.bin" // @poff=420
0x7f: Call2 0x139

0x80: Pop(3)
0x81: @@@ add(Stack[-1]); Obj=3 // @poff=468
0x82: Pop(1)
0x83: PushEmpty(object, object, string, string)
0x84: Stack[-5] = Stack[-3]
0x85: Stack[-2] = "cs_cannibal_unosha1" // @poff=516
0x86: Stack[-1] = "cs_play_all_trigger.bin" // @poff=420
0x87: Call2 0x139

0x88: Pop(3)
0x89: @@@ add(Stack[-1]); Obj=3 // @poff=468
0x8a: Pop(1)
0x8b: PushEmpty(object, object, string, string)
0x8c: Stack[-5] = Stack[-3]
0x8d: Stack[-2] = "cs_cannibal_unosha2" // @poff=556
0x8e: Stack[-1] = "cs_play_all_trigger.bin" // @poff=420
0x8f: Call2 0x139

0x90: Pop(3)
0x91: @@@ add(Stack[-1]); Obj=3 // @poff=468
0x92: Pop(1)
0x93: PushEmpty(object, object, string, string)
0x94: Stack[-5] = Stack[-3]
0x95: Stack[-2] = "cs_cannibal_woman1" // @poff=596
0x96: Stack[-1] = "cs_play_all_trigger.bin" // @poff=420
0x97: Call2 0x139

0x98: Pop(3)
0x99: @@@ add(Stack[-1]); Obj=3 // @poff=468
0x9a: Pop(1)
0x9b: PushEmpty(object, object, string, string)
0x9c: Stack[-5] = Stack[-3]
0x9d: Stack[-2] = "cs_cannibal_worker1" // @poff=634
0x9e: Stack[-1] = "cs_play_all_trigger.bin" // @poff=420
0x9f: Call2 0x139

0xa0: Pop(3)
0xa1: @@@ add(Stack[-1]); Obj=3 // @poff=468
0xa2: Pop(1)
0xa3: PushEmpty(object, object, string, string, string)
0xa4: Stack[-6] = Stack[-4]
0xa5: Stack[-3] = "pt_cs_d1_01_fire" // @poff=674
0xa6: Stack[-2] = "scripted" // @poff=708
0xa7: Stack[-1] = "bonfire_big.xml" // @poff=726
0xa8: Call2 0x141

0xa9: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xaa: Pop(5)
0xab: PushEmpty(object, object, string, string)
0xac: Stack[-5] = Stack[-3]
0xad: Stack[-2] = "cs_cannibal_nudegirl" // @poff=758
0xae: Stack[-1] = "cs_play_all_trigger.bin" // @poff=420
0xaf: Call2 0x139

0xb0: Stack[4 + Tasks[-1].StackPointer] = Stack[-4]
0xb1: Pop(4)
0xb2: Return(); Pop(2)

0xb3: Stack[-1] = 0
0xb4: PushEmpty(object)
0xb5: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xb6: Call2 0x153

0xb7: Pop(1)
0xb8: Push( Stack[4 + Tasks[-1].StackPointer] )
0xb9: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xba: @ RemoveActor(Stack[-4]T)
0xbb: Pop(0)
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: Call2 0xb4

0xbf: Pop(0)
0xc0: Push( Stack[5 + Tasks[-1].StackPointer] )
0xc1: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc2: @ RemoveActor(Stack[-5]T)
0xc3: Pop(0)
0xc4: PushEmpty(object)
0xc5: Call2 0x11b

0xc6: Pop(0)
0xc7: @ RemoveActor(Stack[-1])
0xc8: Pop(1)
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: PushEmpty()
0xcc: Call2 0x17b

0xcd: Pop(0)
0xce: PushEmpty(object)
0xcf: Stack[-2] = Stack[-1]
0xd0: Call2 0xf0

0xd1: Pop(1)
0xd2: Push("space") // @poff=800
0xd3: @ RegisterKeyCallback(Stack[-1])
0xd4: Pop(1)
0xd5: Push("cs_cannibal.mot") // @poff=812
0xd6: @ CameraPlay(Stack[-1])
0xd7: Pop(1)
0xd8: @ CameraWaitForPlayFinish()
0xd9: Pop(0)
0xda: Push("space") // @poff=800
0xdb: @ UnregisterKeyCallback(Stack[-1])
0xdc: Pop(1)
0xdd: PushEmpty(object)
0xde: Stack[-2] = Stack[-1]
0xdf: Call2 0x107

0xe0: Pop(1)
0xe1: PushEmpty()
0xe2: Call2 0x180

0xe3: Pop(0)
0xe4: @ CameraSwitchToNormal()
0xe5: Pop(0)
0xe6: Return(); Pop(0)

0xe7: PushEmpty()
0xe8: @ CameraSwitchToNormal()
0xe9: Pop(0)
0xea: Return(); Pop(0)

0xeb: PushEmpty(bool, bool)
0xec: @ IsLoaded(Stack[-1])
0xed: Pop(0)
0xee: Stack[-1] = Stack[-3]
0xef: Return(); Pop(2)

0xf0: PushEmpty(bool, int, bool, int)
0xf1: Pop(0); Push((bool) Stack[-5] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: Return(); Pop(4)

0xf4: Push("noaccess") // @poff=844
0xf5: @@ HasProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=862
0xf6: Pop(1)
0xf7: Push(Stack[-2])
0xf8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xf9: Push("noaccess") // @poff=844
0xfa: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=874
0xfb: Pop(1)
0xfc: Push("noaccess") // @poff=844
0xfd: Push((int) 1)
0xfe: Pop(1); Push(Stack[-3] + Stack[-1]);
0xff: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=886
0x100: Pop(2)
0x101: GOTO 0x106

0x102: Push("noaccess") // @poff=844
0x103: Push((int) 1)
0x104: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=886
0x105: Pop(2)
0x106: Return(); Pop(4)

0x107: PushEmpty(int, int)
0x108: Pop(0); Push((bool) Stack[-3] == 0)
0x109: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x10a: Return(); Pop(2)

0x10b: Push("noaccess") // @poff=844
0x10c: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=874
0x10d: Pop(1)
0x10e: Push((int) 1)
0x10f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x111: Push("noaccess") // @poff=844
0x112: Push((int) 1)
0x113: Pop(1); Push(Stack[-3] - Stack[-1]);
0x114: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=886
0x115: Pop(2)
0x116: GOTO 0x11a

0x117: Push("noaccess") // @poff=844
0x118: @@ RemoveProperty(Stack[-1]); Obj=4 // @poff=898
0x119: Pop(1)
0x11a: Return(); Pop(2)

0x11b: PushEmpty(object, object)
0x11c: @ self(Stack[-1])
0x11d: Pop(0)
0x11e: Stack[-1] = Stack[-3]
0x11f: Return(); Pop(2)

0x120: Stack[-1] = 0
0x121: PushEmpty(object, object)
0x122: @ CreateObjectVector(Stack[-1])
0x123: Pop(0)
0x124: Stack[-1] = Stack[-3]
0x125: Return(); Pop(2)

0x126: Stack[-1] = 0
0x127: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x128: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=913
0x129: Pop(0)
0x12a: Pop(0); Push((bool) Stack[-4] == 0)
0x12b: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x12c: Push("Locator ") // @poff=924
0x12d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x12e: Push(" doesn't exist") // @poff=942
0x12f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x130: @ Trace(Stack[-1])
0x131: Pop(1)
0x132: Stack[-1] = 0
0x133: GOTO 0x136

0x134: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x135: Pop(0)
0x136: Stack[-1] = Stack[-13]
0x137: Return(); Pop(8)

0x138: Stack[-1] = 0
0x139: PushEmpty(object, object)
0x13a: Push(CVector(0.0, 0.0, 0.0))
0x13b: Push(CVector(0.0, 0.0, 1.0))
0x13c: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x13d: Pop(2)
0x13e: Stack[-1] = Stack[-6]
0x13f: Return(); Pop(2)

0x140: Stack[-1] = 0
0x141: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x142: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=913
0x143: Pop(0)
0x144: Pop(0); Push((bool) Stack[-4] == 0)
0x145: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x146: Push("Locator ") // @poff=924
0x147: Pop(1); Push(Stack[-1] + Stack[-12]);
0x148: Push(" doesn't exist") // @poff=942
0x149: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14a: @ Trace(Stack[-1])
0x14b: Pop(1)
0x14c: Stack[-1] = 0
0x14d: GOTO 0x150

0x14e: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x14f: Pop(0)
0x150: Stack[-1] = Stack[-13]
0x151: Return(); Pop(8)

0x152: Stack[-1] = 0
0x153: PushEmpty(int, int, object, int, int, object)
0x154: Push(Stack[-7])
0x155: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x156: @@ size(Stack[-3]); Obj=7 // @poff=972
0x157: Pop(0)
0x158: Stack[-2] = (int) 0
0x159: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x15a: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15b: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=977
0x15c: Pop(0)
0x15d: Push(Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15f: @ RemoveActor(Stack[-1])
0x160: Pop(0)
0x161: Stack[-1] = 0
0x162: Push((int) 1)
0x163: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x164: GOTO 0x159

0x165: @@ clear(); Obj=7 // @poff=981
0x166: Pop(0)
0x167: Return(); Pop(6)

0x168: PushEmpty(int, int, object, int, int, object)
0x169: Push(Stack[-8])
0x16a: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x16b: @@ size(Stack[-3]); Obj=8 // @poff=972
0x16c: Pop(0)
0x16d: Stack[-2] = (int) 0
0x16e: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x16f: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x170: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=977
0x171: Pop(0)
0x172: Push(Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x174: @ Trigger(Stack[-1], Stack[-7])
0x175: Pop(0)
0x176: Stack[-1] = 0
0x177: Push((int) 1)
0x178: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x179: GOTO 0x16e

0x17a: Return(); Pop(6)

0x17b: Push((float)0.5)
0x17c: Push((float)0.8859999775886536)
0x17d: @ SetSepia(Stack[-2], Stack[-1])
0x17e: Pop(2)
0x17f: Return(); Pop(0)

0x180: Push((int) 0)
0x181: Push((int) 0)
0x182: @ SetSepia(Stack[-2], Stack[-1])
0x183: Pop(2)
0x184: Return(); Pop(0)

