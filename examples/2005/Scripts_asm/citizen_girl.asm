GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	W:Neutral
	W:all
	W:idle
	W:head
	W:attack_on
	W:attack_stay
	W:attack_off
	A:GetPosition
	W:Can't retreat, distance: 
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:HasProperty
	A:HasProperty
	A:IsDead
	W:IsDead
	A:GetScene
	W:noaccess
	A:GetProperty
	A:GetEyesHeight
	W:unholster
	W:player_shot
	W:battle
	A:IsWeaponHolstered
	W:heal
	W:player
	W:class
	W:rat
	W:rat_big
	W:dog
	A:SetReturnValue
	W:branch
	W:reputation
	W:alpha_pills
	W:meradorm
	W:beta_pills
	W:monomicin
	W:lockpick
	W:rifle_ammo
	W:revolver_ammo
	W:samopal_ammo
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:4e00650075007400720061006c00000061006c006c000000690064006c006500000068006500610064000000610074007400610063006b005f006f006e000000610074007400610063006b005f0073007400610079000000610074007400610063006b005f006f00660066000000476574506f736974696f6e00430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a00200000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565005365744d65737361676500436c6561725265706c696573004164645265706c7900480061007300500072006f0070006500720074007900000048617350726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000047657450726f706572747900476574457965734865696768740075006e0068006f006c007300740065007200000070006c0061007900650072005f00730068006f007400000062006100740074006c00650000004973576561706f6e486f6c737465726564006800650061006c00000070006c006100790065007200000063006c00610073007300000072006100740000007200610074005f00620069006700000064006f006700000053657452657475726e56616c7565006200720061006e00630068000000720065007000750074006100740069006f006e00000061006c007000680061005f00700069006c006c00730000006d0065007200610064006f0072006d00000062006500740061005f00700069006c006c00730000006d006f006e006f006d006900630069006e0000006c006f0063006b007000690063006b0000007200690066006c0065005f0061006d006d006f0000007200650076006f006c007600650072005f0061006d006d006f000000730061006d006f00700061006c005f0061006d006d006f000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000

Import:
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	SensePlayerOnly (1 args)
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	GetDirection (1 args)
	StopAsync (0 args)
	UnlookAsync (1 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	GetScene (1 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	AddItem (3 args)
	AddItem (4 args)
	self (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	HasAnimation (3 args)
	CanSee (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	ClearSubContainer (1 args)

RunOp = 0x28
RunTask = 1

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x40 Vars = (object)
		EVENT_17 Op = 0x54 Vars = (object)
		EVENT_30 Op = 0x6c Vars = (object, object, bool)
		EVENT_40 Op = 0x88 Vars = (object)
		EVENT_42 Op = 0x9c Vars = (object, string)
		EVENT_26 Op = 0xc1 Vars = (string)
		EVENT_1 Op = 0xcf Vars = (object)
		EVENT_3 Op = 0xe2 Vars = (object)
		EVENT_7 Op = 0xe8 Vars = (int)
		EVENT_6 Op = 0xf4 Vars = ()
		EVENT_41 Op = 0x10b Vars = (object)
		EVENT_10 Op = 0x17c Vars = (object)
		EVENT_28 Op = 0x180 Vars = ()
	GTASK_2  Params = 0
		EVENT_0 Op = 0x199 Vars = (object)
		EVENT_17 Op = 0x1ad Vars = (object)
		EVENT_30 Op = 0x1c5 Vars = (object, object, bool)
		EVENT_40 Op = 0x1e1 Vars = (object)
		EVENT_42 Op = 0x1f5 Vars = (object, string)
		EVENT_26 Op = 0x21a Vars = (string)
		EVENT_6 Op = 0x228 Vars = ()
		EVENT_1 Op = 0x22f Vars = (object)
	GTASK_3 Vars = (object) Params = 1
		EVENT_0 Op = 0x2cb Vars = (object)
		EVENT_17 Op = 0x2df Vars = (object)
		EVENT_30 Op = 0x2f7 Vars = (object, object, bool)
		EVENT_40 Op = 0x313 Vars = (object)
		EVENT_42 Op = 0x327 Vars = (object, string)
		EVENT_26 Op = 0x34c Vars = (string)
		EVENT_41 Op = 0x365 Vars = (object)
		EVENT_7 Op = 0x36e Vars = (int)
		EVENT_6 Op = 0x391 Vars = ()
		EVENT_1 Op = 0x398 Vars = (object)
	GTASK_4 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x3c2 Vars = ()
		EVENT_7 Op = 0x430 Vars = (int)
		EVENT_41 Op = 0x46b Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x4eb Vars = (int)
		EVENT_41 Op = 0x526 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x53f Vars = ()
		EVENT_7 Op = 0x5ad Vars = (int)
		EVENT_41 Op = 0x5e8 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x601 Vars = ()
		EVENT_7 Op = 0x66f Vars = (int)
		EVENT_41 Op = 0x6aa Vars = (object)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8a3 Vars = (int, int)

Events:
EVENT_16 Op = 0x1310 Vars = (object, string)
EVENT_41 Op = 0x1312 Vars = (object)
EVENT_22 Op = 0x1314 Vars = (object, int, float, float)
EVENT_43 Op = 0x1316 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x1620

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral" // @poff=0
0xa: Call2 0x1280

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all") // @poff=16
0x12: Push("idle") // @poff=24
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x1620

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: @ lshStopAnimation()
0x20: Pop(0)
0x21: GOTO 0x24

0x22: @ StopAnimation()
0x23: Pop(0)
0x24: @ StopTrade()
0x25: Pop(0)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: Push((bool) 1)
0x29: @ SensePlayerOnly(Stack[-1])
0x2a: Pop(1)
0x2b: PushEmpty()
0x2c: Call2 0x1622

0x2d: Pop(0)
0x2e: PushEmpty()
0x2f: Call2 0x37

0x30: Pop(0)
0x31: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x32: PushEmpty()
0x33: Call2 0x13c

0x34: Pop(0)
0x35: GOTO 0x31

0x36: Return(); Pop(0)

0x37: PushEmpty(bool)
0x38: Call2 0x11eb

0x39: Pop(0)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x143a

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: PushEmpty(int, object)
0x42: Stack[-5] = Stack[-1]
0x43: Call2 0x1431

0x44: Stack[-2] = Stack[-3]
0x45: Pop(2)
0x46: Push((int) 0)
0x47: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x49: Push((int) 1)
0x4a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4c: PushEmpty()
0x4d: Call2 0xfb

0x4e: Pop(0)
0x4f: PushEmpty(object)
0x50: Stack[-4] = Stack[-1]
0x51: Call2 0x1434

0x52: Pop(1)
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: PushEmpty(object)
0x56: Stack[-4] = Stack[-1]
0x57: Call2 0x136e

0x58: Pop(1)
0x59: PushEmpty(int, object)
0x5a: Stack[-5] = Stack[-1]
0x5b: Call2 0x13c1

0x5c: Stack[-2] = Stack[-3]
0x5d: Pop(2)
0x5e: Push((int) 0)
0x5f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x61: Push((int) 1)
0x62: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x64: PushEmpty()
0x65: Call2 0xfb

0x66: Pop(0)
0x67: PushEmpty(object)
0x68: Stack[-4] = Stack[-1]
0x69: Call2 0x13cb

0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: PushEmpty(bool, object, object, bool)
0x6e: Stack[-9] = Stack[-3]
0x6f: Stack[-8] = Stack[-2]
0x70: Stack[-7] = Stack[-1]
0x71: Call2 0x1658

0x72: Pop(3)
0x73: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x74: PushEmpty(int, object, bool)
0x75: Stack[-8] = Stack[-2]
0x76: Stack[-6] = Stack[-1]
0x77: Call2 0x13d3

0x78: Stack[-3] = Stack[-4]
0x79: Pop(3)
0x7a: Push((int) 0)
0x7b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x7d: Push((int) 1)
0x7e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x80: PushEmpty()
0x81: Call2 0xfb

0x82: Pop(0)
0x83: PushEmpty(object)
0x84: Stack[-6] = Stack[-1]
0x85: Call2 0x13dd

0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int)
0x89: PushEmpty(int, object)
0x8a: Stack[-5] = Stack[-1]
0x8b: Call2 0x1427

0x8c: Stack[-2] = Stack[-3]
0x8d: Pop(2)
0x8e: Push((int) 0)
0x8f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x91: Push((int) 1)
0x92: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x94: PushEmpty()
0x95: Call2 0xfb

0x96: Pop(0)
0x97: PushEmpty(object)
0x98: Stack[-4] = Stack[-1]
0x99: Call2 0x142a

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-7] = Stack[-2]
0x9f: Stack[-6] = Stack[-1]
0xa0: Call2 0x1318

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0xfb

0xa5: Pop(0)
0xa6: PushEmpty(object, string)
0xa7: Stack[-6] = Stack[-2]
0xa8: Stack[-5] = Stack[-1]
0xa9: Call2 0x1338

0xaa: Pop(2)
0xab: GOTO 0xc0

0xac: PushEmpty(int, string, object)
0xad: Stack[-6] = Stack[-2]
0xae: Stack[-7] = Stack[-1]
0xaf: Call2 0x142c

0xb0: Stack[-3] = Stack[-4]
0xb1: Pop(3)
0xb2: Push((int) 0)
0xb3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb5: Push((int) 1)
0xb6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: PushEmpty()
0xb9: Call2 0xfb

0xba: Pop(0)
0xbb: PushEmpty(string, object)
0xbc: Stack[-5] = Stack[-2]
0xbd: Stack[-6] = Stack[-1]
0xbe: Call2 0x142f

0xbf: Pop(2)
0xc0: Return(); Pop(2)

0xc1: PushEmpty()
0xc2: PushEmpty(bool, string)
0xc3: Stack[-3] = Stack[-1]
0xc4: Call2 0x137b

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xfb

0xc9: Pop(0)
0xca: PushEmpty(string)
0xcb: Stack[-2] = Stack[-1]
0xcc: Call2 0x138b

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool, object)
0xd1: Stack[-3] = Stack[-1]
0xd2: Call2 0x1351

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xfb

0xd7: Pop(0)
0xd8: PushEmpty(object)
0xd9: Stack[-2] = Stack[-1]
0xda: Call2 0x1368

0xdb: Pop(1)
0xdc: GOTO 0xe1

0xdd: PushEmpty(object)
0xde: Stack[-2] = Stack[-1]
0xdf: Call2 0x114

0xe0: Pop(1)
0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: PushEmpty(object)
0xe4: Stack[-2] = Stack[-1]
0xe5: Call2 0x114

0xe6: Pop(1)
0xe7: Return(); Pop(0)

0xe8: PushEmpty()
0xe9: Push((int) 110)
0xea: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Return(); Pop(0)

0xed: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xee: Push((int) 110)
0xef: @ KillTimer(Stack[-1])
0xf0: Pop(1)
0xf1: @ ResetAAS()
0xf2: Pop(0)
0xf3: Return(); Pop(0)

0xf4: PushEmpty()
0xf5: Call2 0xfb

0xf6: Pop(0)
0xf7: PushEmpty()
0xf8: Call2 0x143a

0xf9: Pop(0)
0xfa: Return(); Pop(0)

0xfb: Push((int) 110)
0xfc: @ KillTimer(Stack[-1])
0xfd: Pop(1)
0xfe: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xff: PushEmpty()
0x100: Call2 0x183

0x101: Pop(0)
0x102: Return(); Pop(0)

0x103: Push((int) 110)
0x104: @ KillTimer(Stack[-1])
0x105: Pop(1)
0x106: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x107: PushEmpty()
0x108: Call2 0x18a

0x109: Pop(0)
0x10a: Return(); Pop(0)

0x10b: PushEmpty()
0x10c: PushEmpty()
0x10d: Call2 0xfb

0x10e: Pop(0)
0x10f: PushEmpty(object)
0x110: Stack[-2] = Stack[-1]
0x111: Call2 0x1312

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty(bool, int, bool, int)
0x115: PushEmpty(bool, object)
0x116: Stack[-7] = Stack[-1]
0x117: Call2 0x11c8

0x118: Pop(1)
0x119: Pop(1); Push((bool) Stack[-1] == 0)
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: Return(); Pop(4)

0x11c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: Return(); Pop(4)

0x11f: @ IsPlayerActor(Stack[-5], Stack[-2])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-2] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x123: Return(); Pop(4)

0x124: PushEmpty(int, object)
0x125: Stack[-7] = Stack[-1]
0x126: Call2 0x13b0

0x127: Stack[-2] = Stack[-3]
0x128: Pop(2)
0x129: Push((int) 0)
0x12a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12c: Push((int) 1)
0x12d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12f: PushEmpty()
0x130: Call2 0x103

0x131: Pop(0)
0x132: PushEmpty(object)
0x133: Stack[-6] = Stack[-1]
0x134: Call2 0x13b9

0x135: Pop(1)
0x136: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x137: Push((int) 110)
0x138: Push((float)10.0)
0x139: @ SetTimer(Stack[-2], Stack[-1])
0x13a: Pop(2)
0x13b: Return(); Pop(4)

0x13c: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x13d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x13e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x13f: Push((float)0.5)
0x140: @ rand(Stack[-7], Stack[-1])
0x141: Pop(1)
0x142: @ Sleep(Stack[-6])
0x143: Pop(0)
0x144: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x145: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x146: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x148: @ GetPosition(Stack[-4])
0x149: Pop(0)
0x14a: PushEmpty(float)
0x14b: Call2 0x177

0x14c: Pop(0)
0x14d: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x14e: Pop(1)
0x14f: Push(Stack[-3])
0x150: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x151: GOTO 0x156

0x152: Push((int) 1)
0x153: @ Sleep(Stack[-1])
0x154: Pop(1)
0x155: GOTO 0x148

0x156: GOTO 0x158

0x157: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x158: PushEmpty(object, cvector)
0x159: Stack[-7] = Stack[-1]
0x15a: Call2 0x193

0x15b: Stack[-2] = Stack[-4]
0x15c: Pop(2)
0x15d: Pop(0); Push(( Stack[-2] != 0 )
0x15e: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x15f: @ RotatePath(Stack[-2], Stack[-1])
0x160: Pop(0)
0x161: Push(Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x163: PushEmpty(bool)
0x164: Call2 0x191

0x165: Pop(0)
0x166: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x167: Pop(1)
0x168: Stack[-2] = 0
0x169: Push(Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16b: PushEmpty()
0x16c: Push(-0, 0); TaskCall(2)
0x16d: Call2 0x23d

0x16e: Pop(-0, 0); TaskReturn
0x16f: Pop(0)
0x170: GOTO 0x174

0x171: Push((int) 1)
0x172: @ Sleep(Stack[-1])
0x173: Pop(1)
0x174: Stack[-2] = 0
0x175: GOTO 0x144

0x176: Return(); Pop(12)

0x177: PushEmpty(float, float)
0x178: @ GetCameraFarDistance(Stack[-1])
0x179: Pop(0)
0x17a: Stack[-1] = Stack[-3]
0x17b: Return(); Pop(2)

0x17c: PushEmpty()
0x17d: @ RequestClearPath(Stack[-1])
0x17e: Pop(0)
0x17f: Return(); Pop(0)

0x180: @ Stop()
0x181: Pop(0)
0x182: Return(); Pop(0)

0x183: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x184: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x185: @ Stop()
0x186: Pop(0)
0x187: @ StopGroup0()
0x188: Pop(0)
0x189: Return(); Pop(0)

0x18a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x18b: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x18c: @ Stop()
0x18d: Pop(0)
0x18e: @ StopGroup0()
0x18f: Pop(0)
0x190: Return(); Pop(0)

0x191: Stack[-1] = (bool) 0
0x192: Return(); Pop(0)

0x193: PushEmpty(object, object)
0x194: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x195: Pop(0)
0x196: Stack[-1] = Stack[-4]
0x197: Return(); Pop(2)

0x198: Stack[-1] = 0
0x199: PushEmpty(int, int)
0x19a: PushEmpty(int, object)
0x19b: Stack[-5] = Stack[-1]
0x19c: Call2 0x1431

0x19d: Stack[-2] = Stack[-3]
0x19e: Pop(2)
0x19f: Push((int) 0)
0x1a0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a2: Push((int) 1)
0x1a3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a5: PushEmpty()
0x1a6: Call2 0x28e

0x1a7: Pop(0)
0x1a8: PushEmpty(object)
0x1a9: Stack[-4] = Stack[-1]
0x1aa: Call2 0x1434

0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(int, int)
0x1ae: PushEmpty(object)
0x1af: Stack[-4] = Stack[-1]
0x1b0: Call2 0x136e

0x1b1: Pop(1)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-5] = Stack[-1]
0x1b4: Call2 0x13c1

0x1b5: Stack[-2] = Stack[-3]
0x1b6: Pop(2)
0x1b7: Push((int) 0)
0x1b8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1ba: Push((int) 1)
0x1bb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bd: PushEmpty()
0x1be: Call2 0x28e

0x1bf: Pop(0)
0x1c0: PushEmpty(object)
0x1c1: Stack[-4] = Stack[-1]
0x1c2: Call2 0x13cb

0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(int, int)
0x1c6: PushEmpty(bool, object, object, bool)
0x1c7: Stack[-9] = Stack[-3]
0x1c8: Stack[-8] = Stack[-2]
0x1c9: Stack[-7] = Stack[-1]
0x1ca: Call2 0x1658

0x1cb: Pop(3)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cd: PushEmpty(int, object, bool)
0x1ce: Stack[-8] = Stack[-2]
0x1cf: Stack[-6] = Stack[-1]
0x1d0: Call2 0x13d3

0x1d1: Stack[-3] = Stack[-4]
0x1d2: Pop(3)
0x1d3: Push((int) 0)
0x1d4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d6: Push((int) 1)
0x1d7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d9: PushEmpty()
0x1da: Call2 0x28e

0x1db: Pop(0)
0x1dc: PushEmpty(object)
0x1dd: Stack[-6] = Stack[-1]
0x1de: Call2 0x13dd

0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(int, int)
0x1e2: PushEmpty(int, object)
0x1e3: Stack[-5] = Stack[-1]
0x1e4: Call2 0x1427

0x1e5: Stack[-2] = Stack[-3]
0x1e6: Pop(2)
0x1e7: Push((int) 0)
0x1e8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ea: Push((int) 1)
0x1eb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ed: PushEmpty()
0x1ee: Call2 0x28e

0x1ef: Pop(0)
0x1f0: PushEmpty(object)
0x1f1: Stack[-4] = Stack[-1]
0x1f2: Call2 0x142a

0x1f3: Pop(1)
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(int, int)
0x1f6: PushEmpty(bool, object, string)
0x1f7: Stack[-7] = Stack[-2]
0x1f8: Stack[-6] = Stack[-1]
0x1f9: Call2 0x1318

0x1fa: Pop(2)
0x1fb: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x28e

0x1fe: Pop(0)
0x1ff: PushEmpty(object, string)
0x200: Stack[-6] = Stack[-2]
0x201: Stack[-5] = Stack[-1]
0x202: Call2 0x1338

0x203: Pop(2)
0x204: GOTO 0x219

0x205: PushEmpty(int, string, object)
0x206: Stack[-6] = Stack[-2]
0x207: Stack[-7] = Stack[-1]
0x208: Call2 0x142c

0x209: Stack[-3] = Stack[-4]
0x20a: Pop(3)
0x20b: Push((int) 0)
0x20c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x20e: Push((int) 1)
0x20f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x211: PushEmpty()
0x212: Call2 0x28e

0x213: Pop(0)
0x214: PushEmpty(string, object)
0x215: Stack[-5] = Stack[-2]
0x216: Stack[-6] = Stack[-1]
0x217: Call2 0x142f

0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, string)
0x21c: Stack[-3] = Stack[-1]
0x21d: Call2 0x137b

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x28e

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-2] = Stack[-1]
0x225: Call2 0x138b

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x28e

0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0x143a

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object)
0x231: Stack[-3] = Stack[-1]
0x232: Call2 0x1351

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x28e

0x237: Pop(0)
0x238: PushEmpty(object)
0x239: Stack[-2] = Stack[-1]
0x23a: Call2 0x1368

0x23b: Pop(1)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0x11eb

0x242: Pop(0)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(14)

0x246: PushEmpty(int)
0x247: Call2 0x139f

0x248: Stack[-1] = Stack[-8]
0x249: Pop(1)
0x24a: Stack[-6] = (int) 0
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push((int) 5)
0x24e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0x11eb

0x252: Pop(0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: Stack[-1] = (bool) 1
0x255: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x256: Push((int) 3)
0x257: @ irand(Stack[-6], Stack[-1])
0x258: Pop(1)
0x259: Push((int) 0)
0x25a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x25c: Push(Stack[-7])
0x25d: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x25e: @ irand(Stack[-4], Stack[-7])
0x25f: Pop(0)
0x260: Push("all") // @poff=16
0x261: PushEmpty(string, int)
0x262: Stack[-7] = Stack[-1]
0x263: Call2 0x1398

0x264: Pop(1)
0x265: @ PlayAnimation(Stack[-2], Stack[-1])
0x266: Pop(2)
0x267: @ WaitForAnimEnd(Stack[-3])
0x268: Pop(0)
0x269: Pop(0); Push((bool) Stack[-3] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x289

0x26c: GOTO 0x27e

0x26d: Push((int) 1)
0x26e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x270: Push((int) 4)
0x271: @ rand(Stack[-3], Stack[-1])
0x272: Pop(1)
0x273: Push((int) 1)
0x274: Pop(1); Push(Stack[-3] + Stack[-1]);
0x275: @ Sleep(Stack[-1], Stack[-2])
0x276: Pop(1)
0x277: Pop(0); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: GOTO 0x289

0x27a: GOTO 0x27e

0x27b: Push(Stack[-6])
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: GOTO 0x289

0x27e: PushEmpty(bool)
0x27f: Call2 0x28c

0x280: Pop(0)
0x281: Pop(1); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: GOTO 0x289

0x284: @ ResetAAS()
0x285: Pop(0)
0x286: Push((int) 1)
0x287: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x288: GOTO 0x24b

0x289: @ ResetAAS()
0x28a: Pop(0)
0x28b: Return(); Pop(14)

0x28c: Stack[-1] = (bool) 1
0x28d: Return(); Pop(0)

0x28e: @ StopAnimation()
0x28f: Pop(0)
0x290: @ StopGroup0()
0x291: Pop(0)
0x292: Return(); Pop(0)

0x293: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x294: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x295: PushEmpty()
0x296: Call2 0x2c6

0x297: Pop(0)
0x298: @ GetDirection(Stack[-3])
0x299: Pop(0)
0x29a: PushEmpty(cvector, object)
0x29b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29c: Call2 0x117f

0x29d: Stack[-2] = Stack[-4]
0x29e: Pop(2)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-6] = Stack[-2]
0x2a1: Stack[-5] = Stack[-1]
0x2a2: Call2 0x12e9

0x2a3: Pop(2)
0x2a4: Push((int) 0)
0x2a5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0x11e0

0x2aa: Pop(1)
0x2ab: Stack[-1] = (bool) 1
0x2ac: GOTO 0x2b0

0x2ad: Push((float)1.5)
0x2ae: @ Sleep(Stack[-1], Stack[-2])
0x2af: Pop(1)
0x2b0: Push(Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b2: PushEmpty(object)
0x2b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b4: Call2 0x11e0

0x2b5: Pop(1)
0x2b6: Push((int) 111)
0x2b7: Push((float)0.5)
0x2b8: @ SetTimer(Stack[-2], Stack[-1])
0x2b9: Pop(2)
0x2ba: Push((float)5.0)
0x2bb: @ Sleep(Stack[-1])
0x2bc: Pop(1)
0x2bd: Push((int) 111)
0x2be: @ KillTimer(Stack[-1])
0x2bf: Pop(1)
0x2c0: @ StopAsync()
0x2c1: Pop(0)
0x2c2: Push("head") // @poff=34
0x2c3: @ UnlookAsync(Stack[-1])
0x2c4: Pop(1)
0x2c5: Return(); Pop(6)

0x2c6: PushEmpty(object)
0x2c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c8: Call2 0x128d

0x2c9: Pop(1)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: PushEmpty(int, object)
0x2cd: Stack[-5] = Stack[-1]
0x2ce: Call2 0x1431

0x2cf: Stack[-2] = Stack[-3]
0x2d0: Pop(2)
0x2d1: Push((int) 0)
0x2d2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d4: Push((int) 1)
0x2d5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d7: PushEmpty()
0x2d8: Call2 0x35a

0x2d9: Pop(0)
0x2da: PushEmpty(object)
0x2db: Stack[-4] = Stack[-1]
0x2dc: Call2 0x1434

0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(int, int)
0x2e0: PushEmpty(object)
0x2e1: Stack[-4] = Stack[-1]
0x2e2: Call2 0x136e

0x2e3: Pop(1)
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-5] = Stack[-1]
0x2e6: Call2 0x13c1

0x2e7: Stack[-2] = Stack[-3]
0x2e8: Pop(2)
0x2e9: Push((int) 0)
0x2ea: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2ec: Push((int) 1)
0x2ed: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ef: PushEmpty()
0x2f0: Call2 0x35a

0x2f1: Pop(0)
0x2f2: PushEmpty(object)
0x2f3: Stack[-4] = Stack[-1]
0x2f4: Call2 0x13cb

0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int)
0x2f8: PushEmpty(bool, object, object, bool)
0x2f9: Stack[-9] = Stack[-3]
0x2fa: Stack[-8] = Stack[-2]
0x2fb: Stack[-7] = Stack[-1]
0x2fc: Call2 0x1658

0x2fd: Pop(3)
0x2fe: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2ff: PushEmpty(int, object, bool)
0x300: Stack[-8] = Stack[-2]
0x301: Stack[-6] = Stack[-1]
0x302: Call2 0x13d3

0x303: Stack[-3] = Stack[-4]
0x304: Pop(3)
0x305: Push((int) 0)
0x306: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x308: Push((int) 1)
0x309: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30b: PushEmpty()
0x30c: Call2 0x35a

0x30d: Pop(0)
0x30e: PushEmpty(object)
0x30f: Stack[-6] = Stack[-1]
0x310: Call2 0x13dd

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, object)
0x315: Stack[-5] = Stack[-1]
0x316: Call2 0x1427

0x317: Stack[-2] = Stack[-3]
0x318: Pop(2)
0x319: Push((int) 0)
0x31a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x31c: Push((int) 1)
0x31d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31f: PushEmpty()
0x320: Call2 0x35a

0x321: Pop(0)
0x322: PushEmpty(object)
0x323: Stack[-4] = Stack[-1]
0x324: Call2 0x142a

0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: PushEmpty(int, int)
0x328: PushEmpty(bool, object, string)
0x329: Stack[-7] = Stack[-2]
0x32a: Stack[-6] = Stack[-1]
0x32b: Call2 0x1318

0x32c: Pop(2)
0x32d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32e: PushEmpty()
0x32f: Call2 0x35a

0x330: Pop(0)
0x331: PushEmpty(object, string)
0x332: Stack[-6] = Stack[-2]
0x333: Stack[-5] = Stack[-1]
0x334: Call2 0x1338

0x335: Pop(2)
0x336: GOTO 0x34b

0x337: PushEmpty(int, string, object)
0x338: Stack[-6] = Stack[-2]
0x339: Stack[-7] = Stack[-1]
0x33a: Call2 0x142c

0x33b: Stack[-3] = Stack[-4]
0x33c: Pop(3)
0x33d: Push((int) 0)
0x33e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x340: Push((int) 1)
0x341: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x343: PushEmpty()
0x344: Call2 0x35a

0x345: Pop(0)
0x346: PushEmpty(string, object)
0x347: Stack[-5] = Stack[-2]
0x348: Stack[-6] = Stack[-1]
0x349: Call2 0x142f

0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty()
0x34d: PushEmpty(bool, string)
0x34e: Stack[-3] = Stack[-1]
0x34f: Call2 0x137b

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x352: PushEmpty()
0x353: Call2 0x35a

0x354: Pop(0)
0x355: PushEmpty(string)
0x356: Stack[-2] = Stack[-1]
0x357: Call2 0x138b

0x358: Pop(1)
0x359: Return(); Pop(0)

0x35a: @ StopGroup0()
0x35b: Pop(0)
0x35c: @ StopAsync()
0x35d: Pop(0)
0x35e: Push("head") // @poff=34
0x35f: @ UnlookAsync(Stack[-1])
0x360: Pop(1)
0x361: Push((int) 111)
0x362: @ KillTimer(Stack[-1])
0x363: Pop(1)
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: PushEmpty()
0x367: Call2 0x35a

0x368: Pop(0)
0x369: PushEmpty(object)
0x36a: Stack[-2] = Stack[-1]
0x36b: Call2 0x1312

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(cvector, cvector, cvector, cvector)
0x36f: Push((int) 111)
0x370: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(4)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call2 0x11c8

0x376: Pop(1)
0x377: Pop(1); Push((bool) Stack[-1] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x379: PushEmpty()
0x37a: Call2 0x35a

0x37b: Pop(0)
0x37c: Return(); Pop(4)

0x37d: @ GetDirection(Stack[-2])
0x37e: Pop(0)
0x37f: PushEmpty(cvector, object)
0x380: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x381: Call2 0x117f

0x382: Stack[-2] = Stack[-3]
0x383: Pop(2)
0x384: PushEmpty(float, cvector, cvector)
0x385: Stack[-5] = Stack[-2]
0x386: Stack[-4] = Stack[-1]
0x387: Call2 0x12e9

0x388: Pop(2)
0x389: Push((float)0.4999999701976776)
0x38a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0x11e0

0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty()
0x392: Call2 0x35a

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0x143a

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-3] = Stack[-1]
0x39b: Call2 0x1351

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39e: PushEmpty()
0x39f: Call2 0x35a

0x3a0: Pop(0)
0x3a1: PushEmpty(object)
0x3a2: Stack[-2] = Stack[-1]
0x3a3: Call2 0x1368

0x3a4: Pop(1)
0x3a5: Return(); Pop(0)

0x3a6: PushEmpty()
0x3a7: @ Face(Stack[-1])
0x3a8: Pop(0)
0x3a9: Push("all") // @poff=16
0x3aa: Push("attack_on") // @poff=44
0x3ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: @ WaitForAnimEnd()
0x3ae: Pop(0)
0x3af: Push("all") // @poff=16
0x3b0: Push("attack_stay") // @poff=64
0x3b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b2: Pop(2)
0x3b3: @ WaitForAnimEnd()
0x3b4: Pop(0)
0x3b5: Push("all") // @poff=16
0x3b6: Push("attack_off") // @poff=88
0x3b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: @ WaitForAnimEnd()
0x3ba: Pop(0)
0x3bb: @ StopAsync()
0x3bc: Pop(0)
0x3bd: PushEmpty(object)
0x3be: Stack[-2] = Stack[-1]
0x3bf: Call2 0x3e7

0x3c0: Pop(1)
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty()
0x3c3: Call2 0x464

0x3c4: Pop(0)
0x3c5: PushEmpty()
0x3c6: Call2 0x143a

0x3c7: Pop(0)
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x3ca: @ GetPosition(Stack[-6])
0x3cb: Pop(0)
0x3cc: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=110
0x3cd: Pop(0)
0x3ce: @ GetDirection(Stack[-4])
0x3cf: Pop(0)
0x3d0: PushEmpty(cvector, cvector)
0x3d1: PushEmpty(cvector, cvector)
0x3d2: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3d3: Call2 0x12bf

0x3d4: Pop(1)
0x3d5: Push((float)0.75)
0x3d6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Call2 0x12bf

0x3d9: Stack[-2] = Stack[-5]
0x3da: Pop(2)
0x3db: Push((int) 32)
0x3dc: Push((float)7000.0)
0x3dd: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x3de: Pop(2)
0x3df: Push((int) 100)
0x3e0: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x3e1: Push((int) 0)
0x3e2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e4: Stack[-1] = (int) 0
0x3e5: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x3e6: Return(); Pop(12)

0x3e7: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x3e8: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x3e9: PushEmpty(cvector, float)
0x3ea: Stack[-1] = (float) 1.7453293800354004
0x3eb: Call2 0x3c9

0x3ec: Stack[-2] = Stack[-7]
0x3ed: Pop(2)
0x3ee: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3ef: Push((float)2500.0)
0x3f0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f2: PushEmpty(cvector, float)
0x3f3: Stack[-1] = (float) 2.6179938316345215
0x3f4: Call2 0x3c9

0x3f5: Stack[-2] = Stack[-7]
0x3f6: Pop(2)
0x3f7: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3f8: Push((float)2500.0)
0x3f9: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3fb: Push("Can't retreat, distance: ") // @poff=122
0x3fc: Pop(0); Push(Sqrt(Stack[-5]))
0x3fd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3fe: @ Trace(Stack[-1])
0x3ff: Pop(1)
0x400: Push((float)0.5)
0x401: @ Sleep(Stack[-1])
0x402: Pop(1)
0x403: Return(); Pop(10)

0x404: Push(CvectorIndex(Stack[-5], 0))
0x405: Push(CvectorIndex(Stack[-6], 2))
0x406: @ Rotate(Stack[-2], Stack[-1])
0x407: Pop(2)
0x408: PushEmpty(cvector)
0x409: Call2 0x117a

0x40a: Pop(0)
0x40b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x40c: Push((int) 120)
0x40d: Push((float)0.5)
0x40e: @ SetTimer(Stack[-2], Stack[-1])
0x40f: Pop(2)
0x410: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x411: Push((int) 1)
0x412: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x413: Pop(1)
0x414: Push(Stack[-3])
0x415: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x416: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: GOTO 0x42f

0x419: GOTO 0x42d

0x41a: PushEmpty(cvector, float)
0x41b: Stack[-1] = (float) 2.6179938316345215
0x41c: Call2 0x3c9

0x41d: Stack[-2] = Stack[-4]
0x41e: Pop(2)
0x41f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x420: Push((float)2500.0)
0x421: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x423: PushEmpty(cvector)
0x424: Call2 0x117a

0x425: Pop(0)
0x426: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x427: Push((int) 120)
0x428: Push((float)0.5)
0x429: @ SetTimer(Stack[-2], Stack[-1])
0x42a: Pop(2)
0x42b: GOTO 0x42d

0x42c: GOTO 0x42f

0x42d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x42e: IF (Stack[-1] == 1) GOTO 0x411; Pop(1)

0x42f: Return(); Pop(10)

0x430: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x431: Push((int) 120)
0x432: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: Return(); Pop(8)

0x435: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x437: @ Stop()
0x438: Pop(0)
0x439: Push((int) 1)
0x43a: @ KillTimer(Stack[-1])
0x43b: Pop(1)
0x43c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x43d: GOTO 0x463

0x43e: @ GetDirection(Stack[-4])
0x43f: Pop(0)
0x440: Push((float)7000.0)
0x441: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x442: Pop(1)
0x443: PushEmpty(cvector, float)
0x444: Stack[-1] = (float) 1.7453293800354004
0x445: Call2 0x3c9

0x446: Stack[-2] = Stack[-4]
0x447: Pop(2)
0x448: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x449: PushEmpty(bool)
0x44a: Stack[-1] = (bool) 0
0x44b: Push((float)2500.0)
0x44c: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x44e: PushEmpty(bool)
0x44f: Stack[-1] = (bool) 1
0x450: Pop(0); Push(Stack[-5] * Stack[-5]);
0x451: Push((float)2.25)
0x452: Pop(2); Push(Stack[-2] * Stack[-1]);
0x453: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x454: IF (Stack[-1] == 1) GOTO 0x45a; Pop(1)

0x455: PushEmpty(bool)
0x456: Call2 0x474

0x457: Pop(0)
0x458: IF (Stack[-1] == 1) GOTO 0x45a; Pop(1)

0x459: Stack[-1] = (bool) 0
0x45a: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45b: Stack[-1] = (bool) 1
0x45c: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45d: @ Stop()
0x45e: Pop(0)
0x45f: PushEmpty(cvector)
0x460: Call2 0x117a

0x461: Pop(0)
0x462: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x463: Return(); Pop(8)

0x464: @ Stop()
0x465: Pop(0)
0x466: Push((int) 120)
0x467: @ KillTimer(Stack[-1])
0x468: Pop(1)
0x469: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x46a: Return(); Pop(0)

0x46b: PushEmpty()
0x46c: PushEmpty()
0x46d: Call2 0x464

0x46e: Pop(0)
0x46f: PushEmpty(object)
0x470: Stack[-2] = Stack[-1]
0x471: Call2 0x1312

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty(cvector, cvector, cvector, cvector)
0x475: @ GetDirection(Stack[-2])
0x476: Pop(0)
0x477: PushEmpty(cvector, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0x117f

0x47a: Stack[-2] = Stack[-3]
0x47b: Pop(2)
0x47c: PushEmpty(float, cvector, cvector)
0x47d: Stack[-5] = Stack[-2]
0x47e: Stack[-4] = Stack[-1]
0x47f: Call2 0x12ce

0x480: Pop(2)
0x481: Push((float)-0.3420201241970062)
0x482: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x483: Return(); Pop(4)

0x484: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x485: @ GetPosition(Stack[-6])
0x486: Pop(0)
0x487: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=110
0x488: Pop(0)
0x489: @ GetDirection(Stack[-4])
0x48a: Pop(0)
0x48b: PushEmpty(cvector, cvector)
0x48c: PushEmpty(cvector, cvector)
0x48d: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x48e: Call2 0x12bf

0x48f: Pop(1)
0x490: Push((float)0.75)
0x491: Pop(1); Push(Stack[-8] * Stack[-1]);
0x492: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Call2 0x12bf

0x494: Stack[-2] = Stack[-5]
0x495: Pop(2)
0x496: Push((int) 32)
0x497: Push((float)7000.0)
0x498: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x499: Pop(2)
0x49a: Push((int) 100)
0x49b: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x49c: Push((int) 0)
0x49d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: Stack[-1] = (int) 0
0x4a0: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x4a1: Return(); Pop(12)

0x4a2: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x4a3: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x4a4: PushEmpty(cvector, float)
0x4a5: Stack[-1] = (float) 1.7453293800354004
0x4a6: Call2 0x484

0x4a7: Stack[-2] = Stack[-7]
0x4a8: Pop(2)
0x4a9: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4aa: Push((float)2500.0)
0x4ab: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4ad: PushEmpty(cvector, float)
0x4ae: Stack[-1] = (float) 2.6179938316345215
0x4af: Call2 0x484

0x4b0: Stack[-2] = Stack[-7]
0x4b1: Pop(2)
0x4b2: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4b3: Push((float)2500.0)
0x4b4: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b6: Push("Can't retreat, distance: ") // @poff=122
0x4b7: Pop(0); Push(Sqrt(Stack[-5]))
0x4b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4b9: @ Trace(Stack[-1])
0x4ba: Pop(1)
0x4bb: Push((float)0.5)
0x4bc: @ Sleep(Stack[-1])
0x4bd: Pop(1)
0x4be: Return(); Pop(10)

0x4bf: Push(CvectorIndex(Stack[-5], 0))
0x4c0: Push(CvectorIndex(Stack[-6], 2))
0x4c1: @ Rotate(Stack[-2], Stack[-1])
0x4c2: Pop(2)
0x4c3: PushEmpty(cvector)
0x4c4: Call2 0x117a

0x4c5: Pop(0)
0x4c6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x4c7: Push((int) 120)
0x4c8: Push((float)0.5)
0x4c9: @ SetTimer(Stack[-2], Stack[-1])
0x4ca: Pop(2)
0x4cb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4cc: Push((int) 1)
0x4cd: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x4ce: Pop(1)
0x4cf: Push(Stack[-3])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4d1: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: GOTO 0x4ea

0x4d4: GOTO 0x4e8

0x4d5: PushEmpty(cvector, float)
0x4d6: Stack[-1] = (float) 2.6179938316345215
0x4d7: Call2 0x484

0x4d8: Stack[-2] = Stack[-4]
0x4d9: Pop(2)
0x4da: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4db: Push((float)2500.0)
0x4dc: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4de: PushEmpty(cvector)
0x4df: Call2 0x117a

0x4e0: Pop(0)
0x4e1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4e2: Push((int) 120)
0x4e3: Push((float)0.5)
0x4e4: @ SetTimer(Stack[-2], Stack[-1])
0x4e5: Pop(2)
0x4e6: GOTO 0x4e8

0x4e7: GOTO 0x4ea

0x4e8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4e9: IF (Stack[-1] == 1) GOTO 0x4cc; Pop(1)

0x4ea: Return(); Pop(10)

0x4eb: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4ec: Push((int) 120)
0x4ed: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ef: Return(); Pop(8)

0x4f0: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f2: @ Stop()
0x4f3: Pop(0)
0x4f4: Push((int) 1)
0x4f5: @ KillTimer(Stack[-1])
0x4f6: Pop(1)
0x4f7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4f8: GOTO 0x51e

0x4f9: @ GetDirection(Stack[-4])
0x4fa: Pop(0)
0x4fb: Push((float)7000.0)
0x4fc: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4fd: Pop(1)
0x4fe: PushEmpty(cvector, float)
0x4ff: Stack[-1] = (float) 1.7453293800354004
0x500: Call2 0x484

0x501: Stack[-2] = Stack[-4]
0x502: Pop(2)
0x503: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x504: PushEmpty(bool)
0x505: Stack[-1] = (bool) 0
0x506: Push((float)2500.0)
0x507: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x509: PushEmpty(bool)
0x50a: Stack[-1] = (bool) 1
0x50b: Pop(0); Push(Stack[-5] * Stack[-5]);
0x50c: Push((float)2.25)
0x50d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x50e: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x50f: IF (Stack[-1] == 1) GOTO 0x515; Pop(1)

0x510: PushEmpty(bool)
0x511: Call2 0x52f

0x512: Pop(0)
0x513: IF (Stack[-1] == 1) GOTO 0x515; Pop(1)

0x514: Stack[-1] = (bool) 0
0x515: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x516: Stack[-1] = (bool) 1
0x517: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x518: @ Stop()
0x519: Pop(0)
0x51a: PushEmpty(cvector)
0x51b: Call2 0x117a

0x51c: Pop(0)
0x51d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x51e: Return(); Pop(8)

0x51f: @ Stop()
0x520: Pop(0)
0x521: Push((int) 120)
0x522: @ KillTimer(Stack[-1])
0x523: Pop(1)
0x524: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x525: Return(); Pop(0)

0x526: PushEmpty()
0x527: PushEmpty()
0x528: Call2 0x51f

0x529: Pop(0)
0x52a: PushEmpty(object)
0x52b: Stack[-2] = Stack[-1]
0x52c: Call2 0x1312

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetDirection(Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(cvector, object)
0x533: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x534: Call2 0x117f

0x535: Stack[-2] = Stack[-3]
0x536: Pop(2)
0x537: PushEmpty(float, cvector, cvector)
0x538: Stack[-5] = Stack[-2]
0x539: Stack[-4] = Stack[-1]
0x53a: Call2 0x12ce

0x53b: Pop(2)
0x53c: Push((float)-0.3420201241970062)
0x53d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x53e: Return(); Pop(4)

0x53f: PushEmpty()
0x540: Call2 0x5e1

0x541: Pop(0)
0x542: PushEmpty()
0x543: Call2 0x143a

0x544: Pop(0)
0x545: Return(); Pop(0)

0x546: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x547: @ GetPosition(Stack[-6])
0x548: Pop(0)
0x549: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=110
0x54a: Pop(0)
0x54b: @ GetDirection(Stack[-4])
0x54c: Pop(0)
0x54d: PushEmpty(cvector, cvector)
0x54e: PushEmpty(cvector, cvector)
0x54f: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x550: Call2 0x12bf

0x551: Pop(1)
0x552: Push((float)0.75)
0x553: Pop(1); Push(Stack[-8] * Stack[-1]);
0x554: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Call2 0x12bf

0x556: Stack[-2] = Stack[-5]
0x557: Pop(2)
0x558: Push((int) 32)
0x559: Push((float)7000.0)
0x55a: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x55b: Pop(2)
0x55c: Push((int) 100)
0x55d: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x55e: Push((int) 0)
0x55f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x561: Stack[-1] = (int) 0
0x562: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x563: Return(); Pop(12)

0x564: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x565: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x566: PushEmpty(cvector, float)
0x567: Stack[-1] = (float) 1.7453293800354004
0x568: Call2 0x546

0x569: Stack[-2] = Stack[-7]
0x56a: Pop(2)
0x56b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x56c: Push((float)2500.0)
0x56d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x56f: PushEmpty(cvector, float)
0x570: Stack[-1] = (float) 2.6179938316345215
0x571: Call2 0x546

0x572: Stack[-2] = Stack[-7]
0x573: Pop(2)
0x574: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x575: Push((float)2500.0)
0x576: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x578: Push("Can't retreat, distance: ") // @poff=122
0x579: Pop(0); Push(Sqrt(Stack[-5]))
0x57a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x57b: @ Trace(Stack[-1])
0x57c: Pop(1)
0x57d: Push((float)0.5)
0x57e: @ Sleep(Stack[-1])
0x57f: Pop(1)
0x580: Return(); Pop(10)

0x581: Push(CvectorIndex(Stack[-5], 0))
0x582: Push(CvectorIndex(Stack[-6], 2))
0x583: @ Rotate(Stack[-2], Stack[-1])
0x584: Pop(2)
0x585: PushEmpty(cvector)
0x586: Call2 0x117a

0x587: Pop(0)
0x588: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x589: Push((int) 120)
0x58a: Push((float)0.5)
0x58b: @ SetTimer(Stack[-2], Stack[-1])
0x58c: Pop(2)
0x58d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x58e: Push((int) 1)
0x58f: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x590: Pop(1)
0x591: Push(Stack[-3])
0x592: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x593: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: GOTO 0x5ac

0x596: GOTO 0x5aa

0x597: PushEmpty(cvector, float)
0x598: Stack[-1] = (float) 2.6179938316345215
0x599: Call2 0x546

0x59a: Stack[-2] = Stack[-4]
0x59b: Pop(2)
0x59c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x59d: Push((float)2500.0)
0x59e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a0: PushEmpty(cvector)
0x5a1: Call2 0x117a

0x5a2: Pop(0)
0x5a3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5a4: Push((int) 120)
0x5a5: Push((float)0.5)
0x5a6: @ SetTimer(Stack[-2], Stack[-1])
0x5a7: Pop(2)
0x5a8: GOTO 0x5aa

0x5a9: GOTO 0x5ac

0x5aa: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x5ab: IF (Stack[-1] == 1) GOTO 0x58e; Pop(1)

0x5ac: Return(); Pop(10)

0x5ad: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x5ae: Push((int) 120)
0x5af: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b1: Return(); Pop(8)

0x5b2: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x5b3: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b4: @ Stop()
0x5b5: Pop(0)
0x5b6: Push((int) 1)
0x5b7: @ KillTimer(Stack[-1])
0x5b8: Pop(1)
0x5b9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5ba: GOTO 0x5e0

0x5bb: @ GetDirection(Stack[-4])
0x5bc: Pop(0)
0x5bd: Push((float)7000.0)
0x5be: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x5bf: Pop(1)
0x5c0: PushEmpty(cvector, float)
0x5c1: Stack[-1] = (float) 1.7453293800354004
0x5c2: Call2 0x546

0x5c3: Stack[-2] = Stack[-4]
0x5c4: Pop(2)
0x5c5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x5c6: PushEmpty(bool)
0x5c7: Stack[-1] = (bool) 0
0x5c8: Push((float)2500.0)
0x5c9: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5cb: PushEmpty(bool)
0x5cc: Stack[-1] = (bool) 1
0x5cd: Pop(0); Push(Stack[-5] * Stack[-5]);
0x5ce: Push((float)2.25)
0x5cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d0: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x5d1: IF (Stack[-1] == 1) GOTO 0x5d7; Pop(1)

0x5d2: PushEmpty(bool)
0x5d3: Call2 0x5f1

0x5d4: Pop(0)
0x5d5: IF (Stack[-1] == 1) GOTO 0x5d7; Pop(1)

0x5d6: Stack[-1] = (bool) 0
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: Stack[-1] = (bool) 1
0x5d9: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5da: @ Stop()
0x5db: Pop(0)
0x5dc: PushEmpty(cvector)
0x5dd: Call2 0x117a

0x5de: Pop(0)
0x5df: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5e0: Return(); Pop(8)

0x5e1: @ Stop()
0x5e2: Pop(0)
0x5e3: Push((int) 120)
0x5e4: @ KillTimer(Stack[-1])
0x5e5: Pop(1)
0x5e6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5e7: Return(); Pop(0)

0x5e8: PushEmpty()
0x5e9: PushEmpty()
0x5ea: Call2 0x5e1

0x5eb: Pop(0)
0x5ec: PushEmpty(object)
0x5ed: Stack[-2] = Stack[-1]
0x5ee: Call2 0x1312

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(cvector, cvector, cvector, cvector)
0x5f2: @ GetDirection(Stack[-2])
0x5f3: Pop(0)
0x5f4: PushEmpty(cvector, object)
0x5f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f6: Call2 0x117f

0x5f7: Stack[-2] = Stack[-3]
0x5f8: Pop(2)
0x5f9: PushEmpty(float, cvector, cvector)
0x5fa: Stack[-5] = Stack[-2]
0x5fb: Stack[-4] = Stack[-1]
0x5fc: Call2 0x12ce

0x5fd: Pop(2)
0x5fe: Push((float)-0.3420201241970062)
0x5ff: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x600: Return(); Pop(4)

0x601: PushEmpty()
0x602: Call2 0x6a3

0x603: Pop(0)
0x604: PushEmpty()
0x605: Call2 0x143a

0x606: Pop(0)
0x607: Return(); Pop(0)

0x608: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x609: @ GetPosition(Stack[-6])
0x60a: Pop(0)
0x60b: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=110
0x60c: Pop(0)
0x60d: @ GetDirection(Stack[-4])
0x60e: Pop(0)
0x60f: PushEmpty(cvector, cvector)
0x610: PushEmpty(cvector, cvector)
0x611: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x612: Call2 0x12bf

0x613: Pop(1)
0x614: Push((float)0.75)
0x615: Pop(1); Push(Stack[-8] * Stack[-1]);
0x616: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Call2 0x12bf

0x618: Stack[-2] = Stack[-5]
0x619: Pop(2)
0x61a: Push((int) 32)
0x61b: Push((float)7000.0)
0x61c: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x61d: Pop(2)
0x61e: Push((int) 100)
0x61f: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x620: Push((int) 0)
0x621: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x623: Stack[-1] = (int) 0
0x624: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x625: Return(); Pop(12)

0x626: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x627: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x628: PushEmpty(cvector, float)
0x629: Stack[-1] = (float) 1.7453293800354004
0x62a: Call2 0x608

0x62b: Stack[-2] = Stack[-7]
0x62c: Pop(2)
0x62d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x62e: Push((float)2500.0)
0x62f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x631: PushEmpty(cvector, float)
0x632: Stack[-1] = (float) 2.6179938316345215
0x633: Call2 0x608

0x634: Stack[-2] = Stack[-7]
0x635: Pop(2)
0x636: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x637: Push((float)2500.0)
0x638: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63a: Push("Can't retreat, distance: ") // @poff=122
0x63b: Pop(0); Push(Sqrt(Stack[-5]))
0x63c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x63d: @ Trace(Stack[-1])
0x63e: Pop(1)
0x63f: Push((float)0.5)
0x640: @ Sleep(Stack[-1])
0x641: Pop(1)
0x642: Return(); Pop(10)

0x643: Push(CvectorIndex(Stack[-5], 0))
0x644: Push(CvectorIndex(Stack[-6], 2))
0x645: @ Rotate(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: PushEmpty(cvector)
0x648: Call2 0x117a

0x649: Pop(0)
0x64a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x64b: Push((int) 120)
0x64c: Push((float)0.5)
0x64d: @ SetTimer(Stack[-2], Stack[-1])
0x64e: Pop(2)
0x64f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x650: Push((int) 1)
0x651: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x652: Pop(1)
0x653: Push(Stack[-3])
0x654: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x655: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x656: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x657: GOTO 0x66e

0x658: GOTO 0x66c

0x659: PushEmpty(cvector, float)
0x65a: Stack[-1] = (float) 2.6179938316345215
0x65b: Call2 0x608

0x65c: Stack[-2] = Stack[-4]
0x65d: Pop(2)
0x65e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x65f: Push((float)2500.0)
0x660: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x662: PushEmpty(cvector)
0x663: Call2 0x117a

0x664: Pop(0)
0x665: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x666: Push((int) 120)
0x667: Push((float)0.5)
0x668: @ SetTimer(Stack[-2], Stack[-1])
0x669: Pop(2)
0x66a: GOTO 0x66c

0x66b: GOTO 0x66e

0x66c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x66d: IF (Stack[-1] == 1) GOTO 0x650; Pop(1)

0x66e: Return(); Pop(10)

0x66f: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x670: Push((int) 120)
0x671: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x672: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x673: Return(); Pop(8)

0x674: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x675: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x676: @ Stop()
0x677: Pop(0)
0x678: Push((int) 1)
0x679: @ KillTimer(Stack[-1])
0x67a: Pop(1)
0x67b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x67c: GOTO 0x6a2

0x67d: @ GetDirection(Stack[-4])
0x67e: Pop(0)
0x67f: Push((float)7000.0)
0x680: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x681: Pop(1)
0x682: PushEmpty(cvector, float)
0x683: Stack[-1] = (float) 1.7453293800354004
0x684: Call2 0x608

0x685: Stack[-2] = Stack[-4]
0x686: Pop(2)
0x687: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x688: PushEmpty(bool)
0x689: Stack[-1] = (bool) 0
0x68a: Push((float)2500.0)
0x68b: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x68c: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x68d: PushEmpty(bool)
0x68e: Stack[-1] = (bool) 1
0x68f: Pop(0); Push(Stack[-5] * Stack[-5]);
0x690: Push((float)2.25)
0x691: Pop(2); Push(Stack[-2] * Stack[-1]);
0x692: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x693: IF (Stack[-1] == 1) GOTO 0x699; Pop(1)

0x694: PushEmpty(bool)
0x695: Call2 0x6b3

0x696: Pop(0)
0x697: IF (Stack[-1] == 1) GOTO 0x699; Pop(1)

0x698: Stack[-1] = (bool) 0
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: Stack[-1] = (bool) 1
0x69b: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69c: @ Stop()
0x69d: Pop(0)
0x69e: PushEmpty(cvector)
0x69f: Call2 0x117a

0x6a0: Pop(0)
0x6a1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x6a2: Return(); Pop(8)

0x6a3: @ Stop()
0x6a4: Pop(0)
0x6a5: Push((int) 120)
0x6a6: @ KillTimer(Stack[-1])
0x6a7: Pop(1)
0x6a8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x6a9: Return(); Pop(0)

0x6aa: PushEmpty()
0x6ab: PushEmpty()
0x6ac: Call2 0x6a3

0x6ad: Pop(0)
0x6ae: PushEmpty(object)
0x6af: Stack[-2] = Stack[-1]
0x6b0: Call2 0x1312

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty(cvector, cvector, cvector, cvector)
0x6b4: @ GetDirection(Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(cvector, object)
0x6b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b8: Call2 0x117f

0x6b9: Stack[-2] = Stack[-3]
0x6ba: Pop(2)
0x6bb: PushEmpty(float, cvector, cvector)
0x6bc: Stack[-5] = Stack[-2]
0x6bd: Stack[-4] = Stack[-1]
0x6be: Call2 0x12ce

0x6bf: Pop(2)
0x6c0: Push((float)-0.3420201241970062)
0x6c1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object, float)
0x6c6: Stack[-12] = Stack[-2]
0x6c7: Stack[-1] = (float) 70.0
0x6c8: Call2 0x11f0

0x6c9: Pop(2)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-10] = (int) -2
0x6cd: Return(); Pop(8)

0x6ce: @ CreateDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: PushEmpty(int)
0x6d1: Call2 0x161a

0x6d2: Pop(0)
0x6d3: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=174
0x6d4: Pop(1)
0x6d5: PushEmpty(int)
0x6d6: Call2 0x1618

0x6d7: Pop(0)
0x6d8: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=185
0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Call2 0x161c

0x6dc: Pop(0)
0x6dd: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=203
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0x161e

0x6e1: Pop(0)
0x6e2: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=212
0x6e3: Pop(1)
0x6e4: PushEmpty(int)
0x6e5: Call2 0x1582

0x6e6: Pop(0)
0x6e7: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=222
0x6e8: Pop(1)
0x6e9: Stack[-2] = (int) -1
0x6ea: @ IsOverrideActive(Stack[-3])
0x6eb: Pop(0)
0x6ec: Push(Stack[-3])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6ee: Stack[-10] = (int) -2
0x6ef: Return(); Pop(8)

0x6f0: @ DoDialog(Stack[-4])
0x6f1: Pop(0)
0x6f2: PushEmpty(object, object)
0x6f3: Stack[-11] = Stack[-2]
0x6f4: Stack[-6] = Stack[-1]
0x6f5: Push(-2, 4); TaskCall(9)
0x6f6: Call2 0x70d

0x6f7: Pop(-2, 4); TaskReturn
0x6f8: Pop(2)
0x6f9: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=236
0x6fa: Pop(0)
0x6fb: Pop(0); Push((bool) Stack[-1] == 0)
0x6fc: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6fd: @ sync()
0x6fe: Pop(0)
0x6ff: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=236
0x700: Pop(0)
0x701: GOTO 0x6fb

0x702: PushEmpty(object)
0x703: Stack[-10] = Stack[-1]
0x704: Call2 0x1234

0x705: Pop(1)
0x706: @ StopDialog(Stack[-4])
0x707: Pop(0)
0x708: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=248
0x709: Pop(0)
0x70a: Stack[-2] = Stack[-10]
0x70b: Return(); Pop(8)

0x70c: Stack[-4] = 0
0x70d: PushEmpty()
0x70e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x70f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x710: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x711: Push((int) 1)
0x712: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x713: PushEmpty(string)
0x714: Stack[-1] = "Neutral" // @poff=0
0x715: Call2 0x88d

0x716: Pop(1)
0x717: Push((int) 537240)
0x718: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x719: Pop(1)
0x71a: @@@ ClearReplies(); Obj=0 // @poff=274
0x71b: Pop(0)
0x71c: Push((int) 537241)
0x71d: Push((int) -1)
0x71e: Push((int) 39084)
0x71f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x720: Pop(3)
0x721: PushEmpty(bool)
0x722: Stack[-1] = (bool) 0
0x723: PushEmpty(bool, object)
0x724: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x725: Call2 0x1476

0x726: Pop(1)
0x727: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x728: PushEmpty(bool, object)
0x729: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72a: Call2 0x1482

0x72b: Pop(1)
0x72c: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x72d: Stack[-1] = (bool) 1
0x72e: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x72f: Push((int) 537242)
0x730: Push((int) 39086)
0x731: Push((int) 39085)
0x732: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x733: Pop(3)
0x734: PushEmpty(bool)
0x735: Stack[-1] = (bool) 0
0x736: PushEmpty(bool, object)
0x737: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x738: Call2 0x1476

0x739: Pop(1)
0x73a: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73b: PushEmpty(bool, object)
0x73c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73d: Call2 0x1482

0x73e: Pop(1)
0x73f: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x740: Stack[-1] = (bool) 1
0x741: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x742: Push((int) 537277)
0x743: Push((int) 39122)
0x744: Push((int) 39121)
0x745: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x746: Pop(3)
0x747: PushEmpty(bool)
0x748: Stack[-1] = (bool) 0
0x749: PushEmpty(bool, object)
0x74a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74b: Call2 0x1476

0x74c: Pop(1)
0x74d: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x74e: PushEmpty(bool, object)
0x74f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x750: Call2 0x148c

0x751: Pop(1)
0x752: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x753: Stack[-1] = (bool) 1
0x754: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x755: Push((int) 537329)
0x756: Push((int) 39176)
0x757: Push((int) 39175)
0x758: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x759: Pop(3)
0x75a: PushEmpty(bool)
0x75b: Stack[-1] = (bool) 0
0x75c: PushEmpty(bool)
0x75d: Stack[-1] = (bool) 0
0x75e: PushEmpty(bool, object)
0x75f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x760: Call2 0x1476

0x761: Pop(1)
0x762: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x763: PushEmpty(bool, object)
0x764: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x765: Call2 0x1496

0x766: Pop(1)
0x767: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x768: Stack[-1] = (bool) 1
0x769: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76a: PushEmpty(bool, object)
0x76b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76c: Call2 0x14fa

0x76d: Pop(1)
0x76e: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76f: Stack[-1] = (bool) 1
0x770: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x771: Push((int) 537352)
0x772: Push((int) 39199)
0x773: Push((int) 39198)
0x774: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x775: Pop(3)
0x776: PushEmpty(bool)
0x777: Stack[-1] = (bool) 0
0x778: PushEmpty(bool)
0x779: Stack[-1] = (bool) 0
0x77a: PushEmpty(bool, object)
0x77b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77c: Call2 0x1476

0x77d: Pop(1)
0x77e: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x77f: PushEmpty(bool, object)
0x780: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x781: Call2 0x1496

0x782: Pop(1)
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: Stack[-1] = (bool) 1
0x785: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x786: PushEmpty(bool, object)
0x787: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x788: Call2 0x1504

0x789: Pop(1)
0x78a: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x78b: Stack[-1] = (bool) 1
0x78c: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x78d: Push((int) 537359)
0x78e: Push((int) 39206)
0x78f: Push((int) 39205)
0x790: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x791: Pop(3)
0x792: PushEmpty(bool)
0x793: Stack[-1] = (bool) 0
0x794: PushEmpty(bool)
0x795: Stack[-1] = (bool) 0
0x796: PushEmpty(bool, object)
0x797: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x798: Call2 0x1476

0x799: Pop(1)
0x79a: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79b: PushEmpty(bool, object)
0x79c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79d: Call2 0x14a0

0x79e: Pop(1)
0x79f: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x7a0: Stack[-1] = (bool) 1
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a2: PushEmpty(bool, object)
0x7a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a4: Call2 0x14fa

0x7a5: Pop(1)
0x7a6: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a7: Stack[-1] = (bool) 1
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7a9: Push((int) 537380)
0x7aa: Push((int) 39227)
0x7ab: Push((int) 39226)
0x7ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x7ad: Pop(3)
0x7ae: PushEmpty(bool)
0x7af: Stack[-1] = (bool) 0
0x7b0: PushEmpty(bool)
0x7b1: Stack[-1] = (bool) 0
0x7b2: PushEmpty(bool, object)
0x7b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b4: Call2 0x1476

0x7b5: Pop(1)
0x7b6: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b7: PushEmpty(bool, object)
0x7b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b9: Call2 0x14a0

0x7ba: Pop(1)
0x7bb: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bc: Stack[-1] = (bool) 1
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c4; Pop(1)

0x7be: PushEmpty(bool, object)
0x7bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c0: Call2 0x1504

0x7c1: Pop(1)
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c4; Pop(1)

0x7c3: Stack[-1] = (bool) 1
0x7c4: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c5: Push((int) 537390)
0x7c6: Push((int) 39237)
0x7c7: Push((int) 39236)
0x7c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x7c9: Pop(3)
0x7ca: PushEmpty(bool)
0x7cb: Stack[-1] = (bool) 0
0x7cc: PushEmpty(bool, object)
0x7cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ce: Call2 0x1476

0x7cf: Pop(1)
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d1: PushEmpty(bool, object)
0x7d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d3: Call2 0x14aa

0x7d4: Pop(1)
0x7d5: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d6: Stack[-1] = (bool) 1
0x7d7: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7d8: Push((int) 537400)
0x7d9: Push((int) 39247)
0x7da: Push((int) 39246)
0x7db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x7dc: Pop(3)
0x7dd: PushEmpty(bool)
0x7de: Stack[-1] = (bool) 0
0x7df: PushEmpty(bool, object)
0x7e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e1: Call2 0x1476

0x7e2: Pop(1)
0x7e3: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e4: PushEmpty(bool, object)
0x7e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e6: Call2 0x14b4

0x7e7: Pop(1)
0x7e8: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e9: Stack[-1] = (bool) 1
0x7ea: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7eb: Push((int) 537423)
0x7ec: Push((int) 39270)
0x7ed: Push((int) 39269)
0x7ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x7ef: Pop(3)
0x7f0: PushEmpty(bool)
0x7f1: Stack[-1] = (bool) 0
0x7f2: PushEmpty(bool, object)
0x7f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f4: Call2 0x1476

0x7f5: Pop(1)
0x7f6: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7f7: PushEmpty(bool, object)
0x7f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f9: Call2 0x14be

0x7fa: Pop(1)
0x7fb: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7fc: Stack[-1] = (bool) 1
0x7fd: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7fe: Push((int) 537433)
0x7ff: Push((int) 39280)
0x800: Push((int) 39279)
0x801: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x802: Pop(3)
0x803: PushEmpty(bool)
0x804: Stack[-1] = (bool) 0
0x805: PushEmpty(bool, object)
0x806: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x807: Call2 0x1476

0x808: Pop(1)
0x809: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80a: PushEmpty(bool, object)
0x80b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80c: Call2 0x14c8

0x80d: Pop(1)
0x80e: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80f: Stack[-1] = (bool) 1
0x810: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x811: Push((int) 537451)
0x812: Push((int) 39299)
0x813: Push((int) 39298)
0x814: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x815: Pop(3)
0x816: PushEmpty(bool)
0x817: Stack[-1] = (bool) 0
0x818: PushEmpty(bool, object)
0x819: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81a: Call2 0x1476

0x81b: Pop(1)
0x81c: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x81d: PushEmpty(bool, object)
0x81e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81f: Call2 0x14d2

0x820: Pop(1)
0x821: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x822: Stack[-1] = (bool) 1
0x823: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x824: Push((int) 537460)
0x825: Push((int) 39308)
0x826: Push((int) 39307)
0x827: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x828: Pop(3)
0x829: PushEmpty(bool)
0x82a: Stack[-1] = (bool) 0
0x82b: PushEmpty(bool, object)
0x82c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82d: Call2 0x1476

0x82e: Pop(1)
0x82f: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x830: PushEmpty(bool, object)
0x831: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x832: Call2 0x14dc

0x833: Pop(1)
0x834: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x835: Stack[-1] = (bool) 1
0x836: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x837: Push((int) 537473)
0x838: Push((int) 39321)
0x839: Push((int) 39320)
0x83a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x83b: Pop(3)
0x83c: PushEmpty(bool)
0x83d: Stack[-1] = (bool) 0
0x83e: PushEmpty(bool, object)
0x83f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x840: Call2 0x1476

0x841: Pop(1)
0x842: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x843: PushEmpty(bool, object)
0x844: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x845: Call2 0x14e6

0x846: Pop(1)
0x847: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x848: Stack[-1] = (bool) 1
0x849: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84a: Push((int) 537483)
0x84b: Push((int) 39331)
0x84c: Push((int) 39330)
0x84d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x84e: Pop(3)
0x84f: PushEmpty(bool)
0x850: Stack[-1] = (bool) 0
0x851: PushEmpty(bool, object)
0x852: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x853: Call2 0x1476

0x854: Pop(1)
0x855: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x856: PushEmpty(bool, object)
0x857: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x858: Call2 0x14f0

0x859: Pop(1)
0x85a: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x85b: Stack[-1] = (bool) 1
0x85c: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x85d: Push((int) 537493)
0x85e: Push((int) 39341)
0x85f: Push((int) 39340)
0x860: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x861: Pop(3)
0x862: Push((int) 537503)
0x863: Push((int) -1)
0x864: Push((int) 39350)
0x865: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x866: Pop(3)
0x867: Push((int) 537504)
0x868: Push((int) -1)
0x869: Push((int) 39351)
0x86a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x86b: Pop(3)
0x86c: GOTO 0x86f

0x86d: Return(); Pop(0)

0x86e: GOTO 0x711

0x86f: PushEmpty(bool)
0x870: Call2 0x1620

0x871: Pop(0)
0x872: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x873: @ lshWaitForAnimEnd()
0x874: Pop(0)
0x875: Push( Stack[3 + Tasks[-1].StackPointer] )
0x876: IF (Stack[-1] == 0) GOTO 0x878; Pop(1)

0x877: GOTO 0x87d

0x878: PushEmpty(string)
0x879: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x87a: Call2 0x1280

0x87b: Pop(1)
0x87c: GOTO 0x873

0x87d: GOTO 0x88c

0x87e: Push("all") // @poff=16
0x87f: Push("idle") // @poff=24
0x880: @ PlayAnimation(Stack[-2], Stack[-1])
0x881: Pop(2)
0x882: @ WaitForAnimEnd()
0x883: Pop(0)
0x884: Push( Stack[3 + Tasks[-1].StackPointer] )
0x885: IF (Stack[-1] == 0) GOTO 0x887; Pop(1)

0x886: GOTO 0x88c

0x887: Push("all") // @poff=16
0x888: Push("idle") // @poff=24
0x889: @ PlayAnimation(Stack[-2], Stack[-1])
0x88a: Pop(2)
0x88b: GOTO 0x882

0x88c: Return(); Pop(0)

0x88d: PushEmpty()
0x88e: PushEmpty(bool)
0x88f: Call2 0x1620

0x890: Pop(0)
0x891: Pop(1); Push((bool) Stack[-1] == 0)
0x892: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x893: Return(); Pop(0)

0x894: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x895: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x896: Return(); Pop(0)

0x897: PushEmpty(string, bool)
0x898: Stack[-3] = Stack[-2]
0x899: Push("") // @poff=13
0x89a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x89b: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x89c: Stack[-1] = (bool) 0
0x89d: GOTO 0x89f

0x89e: Stack[-1] = (bool) 1
0x89f: Call2 0x1287

0x8a0: Pop(2)
0x8a1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8a2: Return(); Pop(0)

0x8a3: PushEmpty()
0x8a4: Push((int) 1)
0x8a5: IF (Stack[-1] == 0) GOTO 0x1179; Pop(1)

0x8a6: PushEmpty()
0x8a7: Call2 0x1298

0x8a8: Pop(0)
0x8a9: Push((int) 39084)
0x8aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ab: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8ac: PushEmpty(object, object)
0x8ad: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8af: Call2 0x1471

0x8b0: Pop(2)
0x8b1: Push((int) 39083)
0x8b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b3: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0x8b4: PushEmpty(string)
0x8b5: Stack[-1] = "Neutral" // @poff=0
0x8b6: Call2 0x88d

0x8b7: Pop(1)
0x8b8: Push((int) 537240)
0x8b9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x8ba: Pop(1)
0x8bb: @@@ ClearReplies(); Obj=0 // @poff=274
0x8bc: Pop(0)
0x8bd: Push((int) 537241)
0x8be: Push((int) -1)
0x8bf: Push((int) 39084)
0x8c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8c1: Pop(3)
0x8c2: PushEmpty(bool)
0x8c3: Stack[-1] = (bool) 0
0x8c4: PushEmpty(bool, object)
0x8c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c6: Call2 0x1476

0x8c7: Pop(1)
0x8c8: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8c9: PushEmpty(bool, object)
0x8ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8cb: Call2 0x1482

0x8cc: Pop(1)
0x8cd: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8ce: Stack[-1] = (bool) 1
0x8cf: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8d0: Push((int) 537242)
0x8d1: Push((int) 39086)
0x8d2: Push((int) 39085)
0x8d3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8d4: Pop(3)
0x8d5: PushEmpty(bool)
0x8d6: Stack[-1] = (bool) 0
0x8d7: PushEmpty(bool, object)
0x8d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d9: Call2 0x1476

0x8da: Pop(1)
0x8db: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8dc: PushEmpty(bool, object)
0x8dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8de: Call2 0x1482

0x8df: Pop(1)
0x8e0: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8e1: Stack[-1] = (bool) 1
0x8e2: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e3: Push((int) 537277)
0x8e4: Push((int) 39122)
0x8e5: Push((int) 39121)
0x8e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8e7: Pop(3)
0x8e8: PushEmpty(bool)
0x8e9: Stack[-1] = (bool) 0
0x8ea: PushEmpty(bool, object)
0x8eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ec: Call2 0x1476

0x8ed: Pop(1)
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8ef: PushEmpty(bool, object)
0x8f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f1: Call2 0x148c

0x8f2: Pop(1)
0x8f3: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8f4: Stack[-1] = (bool) 1
0x8f5: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f6: Push((int) 537329)
0x8f7: Push((int) 39176)
0x8f8: Push((int) 39175)
0x8f9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8fa: Pop(3)
0x8fb: PushEmpty(bool)
0x8fc: Stack[-1] = (bool) 0
0x8fd: PushEmpty(bool)
0x8fe: Stack[-1] = (bool) 0
0x8ff: PushEmpty(bool, object)
0x900: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x901: Call2 0x1476

0x902: Pop(1)
0x903: IF (Stack[-1] == 0) GOTO 0x90a; Pop(1)

0x904: PushEmpty(bool, object)
0x905: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x906: Call2 0x1496

0x907: Pop(1)
0x908: IF (Stack[-1] == 0) GOTO 0x90a; Pop(1)

0x909: Stack[-1] = (bool) 1
0x90a: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x90b: PushEmpty(bool, object)
0x90c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90d: Call2 0x14fa

0x90e: Pop(1)
0x90f: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x910: Stack[-1] = (bool) 1
0x911: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x912: Push((int) 537352)
0x913: Push((int) 39199)
0x914: Push((int) 39198)
0x915: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x916: Pop(3)
0x917: PushEmpty(bool)
0x918: Stack[-1] = (bool) 0
0x919: PushEmpty(bool)
0x91a: Stack[-1] = (bool) 0
0x91b: PushEmpty(bool, object)
0x91c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91d: Call2 0x1476

0x91e: Pop(1)
0x91f: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x920: PushEmpty(bool, object)
0x921: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x922: Call2 0x1496

0x923: Pop(1)
0x924: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x925: Stack[-1] = (bool) 1
0x926: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x927: PushEmpty(bool, object)
0x928: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x929: Call2 0x1504

0x92a: Pop(1)
0x92b: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x92c: Stack[-1] = (bool) 1
0x92d: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x92e: Push((int) 537359)
0x92f: Push((int) 39206)
0x930: Push((int) 39205)
0x931: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x932: Pop(3)
0x933: PushEmpty(bool)
0x934: Stack[-1] = (bool) 0
0x935: PushEmpty(bool)
0x936: Stack[-1] = (bool) 0
0x937: PushEmpty(bool, object)
0x938: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x939: Call2 0x1476

0x93a: Pop(1)
0x93b: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x93c: PushEmpty(bool, object)
0x93d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x93e: Call2 0x14a0

0x93f: Pop(1)
0x940: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x941: Stack[-1] = (bool) 1
0x942: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x943: PushEmpty(bool, object)
0x944: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x945: Call2 0x14fa

0x946: Pop(1)
0x947: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x948: Stack[-1] = (bool) 1
0x949: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x94a: Push((int) 537380)
0x94b: Push((int) 39227)
0x94c: Push((int) 39226)
0x94d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x94e: Pop(3)
0x94f: PushEmpty(bool)
0x950: Stack[-1] = (bool) 0
0x951: PushEmpty(bool)
0x952: Stack[-1] = (bool) 0
0x953: PushEmpty(bool, object)
0x954: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x955: Call2 0x1476

0x956: Pop(1)
0x957: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x958: PushEmpty(bool, object)
0x959: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95a: Call2 0x14a0

0x95b: Pop(1)
0x95c: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x95d: Stack[-1] = (bool) 1
0x95e: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x95f: PushEmpty(bool, object)
0x960: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x961: Call2 0x1504

0x962: Pop(1)
0x963: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x964: Stack[-1] = (bool) 1
0x965: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x966: Push((int) 537390)
0x967: Push((int) 39237)
0x968: Push((int) 39236)
0x969: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x96a: Pop(3)
0x96b: PushEmpty(bool)
0x96c: Stack[-1] = (bool) 0
0x96d: PushEmpty(bool, object)
0x96e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96f: Call2 0x1476

0x970: Pop(1)
0x971: IF (Stack[-1] == 0) GOTO 0x978; Pop(1)

0x972: PushEmpty(bool, object)
0x973: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x974: Call2 0x14aa

0x975: Pop(1)
0x976: IF (Stack[-1] == 0) GOTO 0x978; Pop(1)

0x977: Stack[-1] = (bool) 1
0x978: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x979: Push((int) 537400)
0x97a: Push((int) 39247)
0x97b: Push((int) 39246)
0x97c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x97d: Pop(3)
0x97e: PushEmpty(bool)
0x97f: Stack[-1] = (bool) 0
0x980: PushEmpty(bool, object)
0x981: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x982: Call2 0x1476

0x983: Pop(1)
0x984: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x985: PushEmpty(bool, object)
0x986: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x987: Call2 0x14b4

0x988: Pop(1)
0x989: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x98a: Stack[-1] = (bool) 1
0x98b: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x98c: Push((int) 537423)
0x98d: Push((int) 39270)
0x98e: Push((int) 39269)
0x98f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x990: Pop(3)
0x991: PushEmpty(bool)
0x992: Stack[-1] = (bool) 0
0x993: PushEmpty(bool, object)
0x994: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x995: Call2 0x1476

0x996: Pop(1)
0x997: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x998: PushEmpty(bool, object)
0x999: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x99a: Call2 0x14be

0x99b: Pop(1)
0x99c: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x99d: Stack[-1] = (bool) 1
0x99e: IF (Stack[-1] == 0) GOTO 0x9a4; Pop(1)

0x99f: Push((int) 537433)
0x9a0: Push((int) 39280)
0x9a1: Push((int) 39279)
0x9a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9a3: Pop(3)
0x9a4: PushEmpty(bool)
0x9a5: Stack[-1] = (bool) 0
0x9a6: PushEmpty(bool, object)
0x9a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a8: Call2 0x1476

0x9a9: Pop(1)
0x9aa: IF (Stack[-1] == 0) GOTO 0x9b1; Pop(1)

0x9ab: PushEmpty(bool, object)
0x9ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ad: Call2 0x14c8

0x9ae: Pop(1)
0x9af: IF (Stack[-1] == 0) GOTO 0x9b1; Pop(1)

0x9b0: Stack[-1] = (bool) 1
0x9b1: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b2: Push((int) 537451)
0x9b3: Push((int) 39299)
0x9b4: Push((int) 39298)
0x9b5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9b6: Pop(3)
0x9b7: PushEmpty(bool)
0x9b8: Stack[-1] = (bool) 0
0x9b9: PushEmpty(bool, object)
0x9ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9bb: Call2 0x1476

0x9bc: Pop(1)
0x9bd: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9be: PushEmpty(bool, object)
0x9bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c0: Call2 0x14d2

0x9c1: Pop(1)
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9c3: Stack[-1] = (bool) 1
0x9c4: IF (Stack[-1] == 0) GOTO 0x9ca; Pop(1)

0x9c5: Push((int) 537460)
0x9c6: Push((int) 39308)
0x9c7: Push((int) 39307)
0x9c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9c9: Pop(3)
0x9ca: PushEmpty(bool)
0x9cb: Stack[-1] = (bool) 0
0x9cc: PushEmpty(bool, object)
0x9cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ce: Call2 0x1476

0x9cf: Pop(1)
0x9d0: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d1: PushEmpty(bool, object)
0x9d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d3: Call2 0x14dc

0x9d4: Pop(1)
0x9d5: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d6: Stack[-1] = (bool) 1
0x9d7: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9d8: Push((int) 537473)
0x9d9: Push((int) 39321)
0x9da: Push((int) 39320)
0x9db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9dc: Pop(3)
0x9dd: PushEmpty(bool)
0x9de: Stack[-1] = (bool) 0
0x9df: PushEmpty(bool, object)
0x9e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e1: Call2 0x1476

0x9e2: Pop(1)
0x9e3: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e4: PushEmpty(bool, object)
0x9e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e6: Call2 0x14e6

0x9e7: Pop(1)
0x9e8: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e9: Stack[-1] = (bool) 1
0x9ea: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9eb: Push((int) 537483)
0x9ec: Push((int) 39331)
0x9ed: Push((int) 39330)
0x9ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9ef: Pop(3)
0x9f0: PushEmpty(bool)
0x9f1: Stack[-1] = (bool) 0
0x9f2: PushEmpty(bool, object)
0x9f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f4: Call2 0x1476

0x9f5: Pop(1)
0x9f6: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9f7: PushEmpty(bool, object)
0x9f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f9: Call2 0x14f0

0x9fa: Pop(1)
0x9fb: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9fc: Stack[-1] = (bool) 1
0x9fd: IF (Stack[-1] == 0) GOTO 0xa03; Pop(1)

0x9fe: Push((int) 537493)
0x9ff: Push((int) 39341)
0xa00: Push((int) 39340)
0xa01: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa02: Pop(3)
0xa03: Push((int) 537503)
0xa04: Push((int) -1)
0xa05: Push((int) 39350)
0xa06: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa07: Pop(3)
0xa08: Push((int) 537504)
0xa09: Push((int) -1)
0xa0a: Push((int) 39351)
0xa0b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa0c: Pop(3)
0xa0d: Return(); Pop(0)

0xa0e: Push((int) 39341)
0xa0f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa10: IF (Stack[-1] == 0) GOTO 0xa25; Pop(1)

0xa11: PushEmpty(string)
0xa12: Stack[-1] = "Neutral" // @poff=0
0xa13: Call2 0x88d

0xa14: Pop(1)
0xa15: Push((int) 537494)
0xa16: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xa17: Pop(1)
0xa18: @@@ ClearReplies(); Obj=0 // @poff=274
0xa19: Pop(0)
0xa1a: Push((int) 537495)
0xa1b: Push((int) 39343)
0xa1c: Push((int) 39342)
0xa1d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa1e: Pop(3)
0xa1f: Push((int) 537499)
0xa20: Push((int) 39347)
0xa21: Push((int) 39346)
0xa22: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa23: Pop(3)
0xa24: Return(); Pop(0)

0xa25: Push((int) 39347)
0xa26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa27: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa28: PushEmpty(string)
0xa29: Stack[-1] = "Neutral" // @poff=0
0xa2a: Call2 0x88d

0xa2b: Pop(1)
0xa2c: Push((int) 537500)
0xa2d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xa2e: Pop(1)
0xa2f: @@@ ClearReplies(); Obj=0 // @poff=274
0xa30: Pop(0)
0xa31: Push((int) 537501)
0xa32: Push((int) -1)
0xa33: Push((int) 39348)
0xa34: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa35: Pop(3)
0xa36: Push((int) 537502)
0xa37: Push((int) -1)
0xa38: Push((int) 39349)
0xa39: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa3a: Pop(3)
0xa3b: Return(); Pop(0)

0xa3c: Push((int) 39343)
0xa3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3e: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa3f: PushEmpty(string)
0xa40: Stack[-1] = "Neutral" // @poff=0
0xa41: Call2 0x88d

0xa42: Pop(1)
0xa43: Push((int) 537496)
0xa44: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xa45: Pop(1)
0xa46: @@@ ClearReplies(); Obj=0 // @poff=274
0xa47: Pop(0)
0xa48: Push((int) 537497)
0xa49: Push((int) -1)
0xa4a: Push((int) 39344)
0xa4b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa4c: Pop(3)
0xa4d: Push((int) 537498)
0xa4e: Push((int) -1)
0xa4f: Push((int) 39345)
0xa50: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa51: Pop(3)
0xa52: Return(); Pop(0)

0xa53: Push((int) 39331)
0xa54: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa55: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa56: PushEmpty(string)
0xa57: Stack[-1] = "Neutral" // @poff=0
0xa58: Call2 0x88d

0xa59: Pop(1)
0xa5a: Push((int) 537484)
0xa5b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xa5c: Pop(1)
0xa5d: @@@ ClearReplies(); Obj=0 // @poff=274
0xa5e: Pop(0)
0xa5f: Push((int) 537485)
0xa60: Push((int) 39333)
0xa61: Push((int) 39332)
0xa62: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa63: Pop(3)
0xa64: Push((int) 537492)
0xa65: Push((int) -1)
0xa66: Push((int) 39339)
0xa67: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa68: Pop(3)
0xa69: Return(); Pop(0)

0xa6a: Push((int) 39333)
0xa6b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6c: IF (Stack[-1] == 0) GOTO 0xa81; Pop(1)

0xa6d: PushEmpty(string)
0xa6e: Stack[-1] = "Neutral" // @poff=0
0xa6f: Call2 0x88d

0xa70: Pop(1)
0xa71: Push((int) 537486)
0xa72: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xa73: Pop(1)
0xa74: @@@ ClearReplies(); Obj=0 // @poff=274
0xa75: Pop(0)
0xa76: Push((int) 537487)
0xa77: Push((int) 39335)
0xa78: Push((int) 39334)
0xa79: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa7a: Pop(3)
0xa7b: Push((int) 537491)
0xa7c: Push((int) -1)
0xa7d: Push((int) 39338)
0xa7e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa7f: Pop(3)
0xa80: Return(); Pop(0)

0xa81: Push((int) 39335)
0xa82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa83: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa84: PushEmpty(string)
0xa85: Stack[-1] = "Neutral" // @poff=0
0xa86: Call2 0x88d

0xa87: Pop(1)
0xa88: Push((int) 537488)
0xa89: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xa8a: Pop(1)
0xa8b: @@@ ClearReplies(); Obj=0 // @poff=274
0xa8c: Pop(0)
0xa8d: Push((int) 537489)
0xa8e: Push((int) -1)
0xa8f: Push((int) 39336)
0xa90: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa91: Pop(3)
0xa92: Push((int) 537490)
0xa93: Push((int) -1)
0xa94: Push((int) 39337)
0xa95: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa96: Pop(3)
0xa97: Return(); Pop(0)

0xa98: Push((int) 39321)
0xa99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9a: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xa9b: PushEmpty(string)
0xa9c: Stack[-1] = "Neutral" // @poff=0
0xa9d: Call2 0x88d

0xa9e: Pop(1)
0xa9f: Push((int) 537474)
0xaa0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xaa1: Pop(1)
0xaa2: @@@ ClearReplies(); Obj=0 // @poff=274
0xaa3: Pop(0)
0xaa4: Push((int) 537475)
0xaa5: Push((int) 39323)
0xaa6: Push((int) 39322)
0xaa7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xaa8: Pop(3)
0xaa9: Push((int) 537482)
0xaaa: Push((int) -1)
0xaab: Push((int) 39329)
0xaac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xaad: Pop(3)
0xaae: Return(); Pop(0)

0xaaf: Push((int) 39323)
0xab0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab1: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xab2: PushEmpty(string)
0xab3: Stack[-1] = "Neutral" // @poff=0
0xab4: Call2 0x88d

0xab5: Pop(1)
0xab6: Push((int) 537476)
0xab7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xab8: Pop(1)
0xab9: @@@ ClearReplies(); Obj=0 // @poff=274
0xaba: Pop(0)
0xabb: Push((int) 537477)
0xabc: Push((int) 39325)
0xabd: Push((int) 39324)
0xabe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xabf: Pop(3)
0xac0: Push((int) 537481)
0xac1: Push((int) -1)
0xac2: Push((int) 39328)
0xac3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xac4: Pop(3)
0xac5: Return(); Pop(0)

0xac6: Push((int) 39325)
0xac7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac8: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xac9: PushEmpty(string)
0xaca: Stack[-1] = "Neutral" // @poff=0
0xacb: Call2 0x88d

0xacc: Pop(1)
0xacd: Push((int) 537478)
0xace: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xacf: Pop(1)
0xad0: @@@ ClearReplies(); Obj=0 // @poff=274
0xad1: Pop(0)
0xad2: Push((int) 537479)
0xad3: Push((int) -1)
0xad4: Push((int) 39326)
0xad5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xad6: Pop(3)
0xad7: Push((int) 537480)
0xad8: Push((int) -1)
0xad9: Push((int) 39327)
0xada: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xadb: Pop(3)
0xadc: Return(); Pop(0)

0xadd: Push((int) 39308)
0xade: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xadf: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xae0: PushEmpty(string)
0xae1: Stack[-1] = "Neutral" // @poff=0
0xae2: Call2 0x88d

0xae3: Pop(1)
0xae4: Push((int) 537461)
0xae5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xae6: Pop(1)
0xae7: @@@ ClearReplies(); Obj=0 // @poff=274
0xae8: Pop(0)
0xae9: Push((int) 537462)
0xaea: Push((int) 39310)
0xaeb: Push((int) 39309)
0xaec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xaed: Pop(3)
0xaee: Push((int) 537472)
0xaef: Push((int) -1)
0xaf0: Push((int) 39319)
0xaf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xaf2: Pop(3)
0xaf3: Return(); Pop(0)

0xaf4: Push((int) 39310)
0xaf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf6: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xaf7: PushEmpty(string)
0xaf8: Stack[-1] = "Neutral" // @poff=0
0xaf9: Call2 0x88d

0xafa: Pop(1)
0xafb: Push((int) 537463)
0xafc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xafd: Pop(1)
0xafe: @@@ ClearReplies(); Obj=0 // @poff=274
0xaff: Pop(0)
0xb00: Push((int) 537464)
0xb01: Push((int) 39312)
0xb02: Push((int) 39311)
0xb03: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb04: Pop(3)
0xb05: Push((int) 537471)
0xb06: Push((int) -1)
0xb07: Push((int) 39318)
0xb08: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb09: Pop(3)
0xb0a: Return(); Pop(0)

0xb0b: Push((int) 39312)
0xb0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0d: IF (Stack[-1] == 0) GOTO 0xb22; Pop(1)

0xb0e: PushEmpty(string)
0xb0f: Stack[-1] = "Neutral" // @poff=0
0xb10: Call2 0x88d

0xb11: Pop(1)
0xb12: Push((int) 537465)
0xb13: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb14: Pop(1)
0xb15: @@@ ClearReplies(); Obj=0 // @poff=274
0xb16: Pop(0)
0xb17: Push((int) 537466)
0xb18: Push((int) 39314)
0xb19: Push((int) 39313)
0xb1a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb1b: Pop(3)
0xb1c: Push((int) 537470)
0xb1d: Push((int) -1)
0xb1e: Push((int) 39317)
0xb1f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb20: Pop(3)
0xb21: Return(); Pop(0)

0xb22: Push((int) 39314)
0xb23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb24: IF (Stack[-1] == 0) GOTO 0xb39; Pop(1)

0xb25: PushEmpty(string)
0xb26: Stack[-1] = "Neutral" // @poff=0
0xb27: Call2 0x88d

0xb28: Pop(1)
0xb29: Push((int) 537467)
0xb2a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb2b: Pop(1)
0xb2c: @@@ ClearReplies(); Obj=0 // @poff=274
0xb2d: Pop(0)
0xb2e: Push((int) 537468)
0xb2f: Push((int) -1)
0xb30: Push((int) 39315)
0xb31: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb32: Pop(3)
0xb33: Push((int) 537469)
0xb34: Push((int) -1)
0xb35: Push((int) 39316)
0xb36: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb37: Pop(3)
0xb38: Return(); Pop(0)

0xb39: Push((int) 39299)
0xb3a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3b: IF (Stack[-1] == 0) GOTO 0xb50; Pop(1)

0xb3c: PushEmpty(string)
0xb3d: Stack[-1] = "Neutral" // @poff=0
0xb3e: Call2 0x88d

0xb3f: Pop(1)
0xb40: Push((int) 537452)
0xb41: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb42: Pop(1)
0xb43: @@@ ClearReplies(); Obj=0 // @poff=274
0xb44: Pop(0)
0xb45: Push((int) 537453)
0xb46: Push((int) 39301)
0xb47: Push((int) 39300)
0xb48: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb49: Pop(3)
0xb4a: Push((int) 537459)
0xb4b: Push((int) -1)
0xb4c: Push((int) 39306)
0xb4d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb4e: Pop(3)
0xb4f: Return(); Pop(0)

0xb50: Push((int) 39301)
0xb51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb52: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb53: PushEmpty(string)
0xb54: Stack[-1] = "Neutral" // @poff=0
0xb55: Call2 0x88d

0xb56: Pop(1)
0xb57: Push((int) 537454)
0xb58: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb59: Pop(1)
0xb5a: @@@ ClearReplies(); Obj=0 // @poff=274
0xb5b: Pop(0)
0xb5c: Push((int) 537455)
0xb5d: Push((int) 39303)
0xb5e: Push((int) 39302)
0xb5f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb60: Pop(3)
0xb61: Return(); Pop(0)

0xb62: Push((int) 39303)
0xb63: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb64: IF (Stack[-1] == 0) GOTO 0xb79; Pop(1)

0xb65: PushEmpty(string)
0xb66: Stack[-1] = "Neutral" // @poff=0
0xb67: Call2 0x88d

0xb68: Pop(1)
0xb69: Push((int) 537456)
0xb6a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb6b: Pop(1)
0xb6c: @@@ ClearReplies(); Obj=0 // @poff=274
0xb6d: Pop(0)
0xb6e: Push((int) 537457)
0xb6f: Push((int) -1)
0xb70: Push((int) 39304)
0xb71: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb72: Pop(3)
0xb73: Push((int) 537458)
0xb74: Push((int) -1)
0xb75: Push((int) 39305)
0xb76: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb77: Pop(3)
0xb78: Return(); Pop(0)

0xb79: Push((int) 39280)
0xb7a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb7b: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb7c: PushEmpty(string)
0xb7d: Stack[-1] = "Neutral" // @poff=0
0xb7e: Call2 0x88d

0xb7f: Pop(1)
0xb80: Push((int) 537434)
0xb81: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb82: Pop(1)
0xb83: @@@ ClearReplies(); Obj=0 // @poff=274
0xb84: Pop(0)
0xb85: Push((int) 537435)
0xb86: Push((int) 39282)
0xb87: Push((int) 39281)
0xb88: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb89: Pop(3)
0xb8a: Push((int) 537447)
0xb8b: Push((int) 39294)
0xb8c: Push((int) 39293)
0xb8d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb8e: Pop(3)
0xb8f: Return(); Pop(0)

0xb90: Push((int) 39294)
0xb91: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb92: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xb93: PushEmpty(string)
0xb94: Stack[-1] = "Neutral" // @poff=0
0xb95: Call2 0x88d

0xb96: Pop(1)
0xb97: Push((int) 537448)
0xb98: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb99: Pop(1)
0xb9a: @@@ ClearReplies(); Obj=0 // @poff=274
0xb9b: Pop(0)
0xb9c: Push((int) 537449)
0xb9d: Push((int) 39284)
0xb9e: Push((int) 39295)
0xb9f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xba0: Pop(3)
0xba1: Push((int) 537450)
0xba2: Push((int) -1)
0xba3: Push((int) 39297)
0xba4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xba5: Pop(3)
0xba6: Return(); Pop(0)

0xba7: Push((int) 39282)
0xba8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xbaa: PushEmpty(string)
0xbab: Stack[-1] = "Neutral" // @poff=0
0xbac: Call2 0x88d

0xbad: Pop(1)
0xbae: Push((int) 537436)
0xbaf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xbb0: Pop(1)
0xbb1: @@@ ClearReplies(); Obj=0 // @poff=274
0xbb2: Pop(0)
0xbb3: Push((int) 537437)
0xbb4: Push((int) 39284)
0xbb5: Push((int) 39283)
0xbb6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xbb7: Pop(3)
0xbb8: Return(); Pop(0)

0xbb9: Push((int) 39284)
0xbba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbbb: IF (Stack[-1] == 0) GOTO 0xbd0; Pop(1)

0xbbc: PushEmpty(string)
0xbbd: Stack[-1] = "Neutral" // @poff=0
0xbbe: Call2 0x88d

0xbbf: Pop(1)
0xbc0: Push((int) 537438)
0xbc1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xbc2: Pop(1)
0xbc3: @@@ ClearReplies(); Obj=0 // @poff=274
0xbc4: Pop(0)
0xbc5: Push((int) 537439)
0xbc6: Push((int) 39286)
0xbc7: Push((int) 39285)
0xbc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xbc9: Pop(3)
0xbca: Push((int) 537442)
0xbcb: Push((int) 39289)
0xbcc: Push((int) 39288)
0xbcd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xbce: Pop(3)
0xbcf: Return(); Pop(0)

0xbd0: Push((int) 39289)
0xbd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd2: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbd3: PushEmpty(string)
0xbd4: Stack[-1] = "Neutral" // @poff=0
0xbd5: Call2 0x88d

0xbd6: Pop(1)
0xbd7: Push((int) 537443)
0xbd8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xbd9: Pop(1)
0xbda: @@@ ClearReplies(); Obj=0 // @poff=274
0xbdb: Pop(0)
0xbdc: Push((int) 537444)
0xbdd: Push((int) 39291)
0xbde: Push((int) 39290)
0xbdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xbe0: Pop(3)
0xbe1: Return(); Pop(0)

0xbe2: Push((int) 39291)
0xbe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe4: IF (Stack[-1] == 0) GOTO 0xbf4; Pop(1)

0xbe5: PushEmpty(string)
0xbe6: Stack[-1] = "Neutral" // @poff=0
0xbe7: Call2 0x88d

0xbe8: Pop(1)
0xbe9: Push((int) 537445)
0xbea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xbeb: Pop(1)
0xbec: @@@ ClearReplies(); Obj=0 // @poff=274
0xbed: Pop(0)
0xbee: Push((int) 537446)
0xbef: Push((int) -1)
0xbf0: Push((int) 39292)
0xbf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xbf2: Pop(3)
0xbf3: Return(); Pop(0)

0xbf4: Push((int) 39286)
0xbf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf6: IF (Stack[-1] == 0) GOTO 0xc06; Pop(1)

0xbf7: PushEmpty(string)
0xbf8: Stack[-1] = "Neutral" // @poff=0
0xbf9: Call2 0x88d

0xbfa: Pop(1)
0xbfb: Push((int) 537440)
0xbfc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xbfd: Pop(1)
0xbfe: @@@ ClearReplies(); Obj=0 // @poff=274
0xbff: Pop(0)
0xc00: Push((int) 537441)
0xc01: Push((int) -1)
0xc02: Push((int) 39287)
0xc03: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc04: Pop(3)
0xc05: Return(); Pop(0)

0xc06: Push((int) 39270)
0xc07: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc08: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc09: PushEmpty(string)
0xc0a: Stack[-1] = "Neutral" // @poff=0
0xc0b: Call2 0x88d

0xc0c: Pop(1)
0xc0d: Push((int) 537424)
0xc0e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc0f: Pop(1)
0xc10: @@@ ClearReplies(); Obj=0 // @poff=274
0xc11: Pop(0)
0xc12: Push((int) 537425)
0xc13: Push((int) 39272)
0xc14: Push((int) 39271)
0xc15: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc16: Pop(3)
0xc17: Push((int) 537432)
0xc18: Push((int) -1)
0xc19: Push((int) 39278)
0xc1a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc1b: Pop(3)
0xc1c: Return(); Pop(0)

0xc1d: Push((int) 39272)
0xc1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1f: IF (Stack[-1] == 0) GOTO 0xc34; Pop(1)

0xc20: PushEmpty(string)
0xc21: Stack[-1] = "Neutral" // @poff=0
0xc22: Call2 0x88d

0xc23: Pop(1)
0xc24: Push((int) 537426)
0xc25: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc26: Pop(1)
0xc27: @@@ ClearReplies(); Obj=0 // @poff=274
0xc28: Pop(0)
0xc29: Push((int) 537427)
0xc2a: Push((int) 39274)
0xc2b: Push((int) 39273)
0xc2c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc2d: Pop(3)
0xc2e: Push((int) 537431)
0xc2f: Push((int) -1)
0xc30: Push((int) 39277)
0xc31: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc32: Pop(3)
0xc33: Return(); Pop(0)

0xc34: Push((int) 39274)
0xc35: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc36: IF (Stack[-1] == 0) GOTO 0xc4b; Pop(1)

0xc37: PushEmpty(string)
0xc38: Stack[-1] = "Neutral" // @poff=0
0xc39: Call2 0x88d

0xc3a: Pop(1)
0xc3b: Push((int) 537428)
0xc3c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc3d: Pop(1)
0xc3e: @@@ ClearReplies(); Obj=0 // @poff=274
0xc3f: Pop(0)
0xc40: Push((int) 537429)
0xc41: Push((int) -1)
0xc42: Push((int) 39275)
0xc43: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc44: Pop(3)
0xc45: Push((int) 537430)
0xc46: Push((int) -1)
0xc47: Push((int) 39276)
0xc48: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc49: Pop(3)
0xc4a: Return(); Pop(0)

0xc4b: Push((int) 39247)
0xc4c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc4d: IF (Stack[-1] == 0) GOTO 0xc67; Pop(1)

0xc4e: PushEmpty(string)
0xc4f: Stack[-1] = "Neutral" // @poff=0
0xc50: Call2 0x88d

0xc51: Pop(1)
0xc52: Push((int) 537401)
0xc53: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc54: Pop(1)
0xc55: @@@ ClearReplies(); Obj=0 // @poff=274
0xc56: Pop(0)
0xc57: Push((int) 537402)
0xc58: Push((int) 39249)
0xc59: Push((int) 39248)
0xc5a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc5b: Pop(3)
0xc5c: Push((int) 537418)
0xc5d: Push((int) 39265)
0xc5e: Push((int) 39264)
0xc5f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc60: Pop(3)
0xc61: Push((int) 537422)
0xc62: Push((int) -1)
0xc63: Push((int) 39268)
0xc64: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc65: Pop(3)
0xc66: Return(); Pop(0)

0xc67: Push((int) 39265)
0xc68: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc69: IF (Stack[-1] == 0) GOTO 0xc7e; Pop(1)

0xc6a: PushEmpty(string)
0xc6b: Stack[-1] = "Neutral" // @poff=0
0xc6c: Call2 0x88d

0xc6d: Pop(1)
0xc6e: Push((int) 537419)
0xc6f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc70: Pop(1)
0xc71: @@@ ClearReplies(); Obj=0 // @poff=274
0xc72: Pop(0)
0xc73: Push((int) 537420)
0xc74: Push((int) -1)
0xc75: Push((int) 39266)
0xc76: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc77: Pop(3)
0xc78: Push((int) 537421)
0xc79: Push((int) -1)
0xc7a: Push((int) 39267)
0xc7b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc7c: Pop(3)
0xc7d: Return(); Pop(0)

0xc7e: Push((int) 39249)
0xc7f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc80: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc81: PushEmpty(string)
0xc82: Stack[-1] = "Neutral" // @poff=0
0xc83: Call2 0x88d

0xc84: Pop(1)
0xc85: Push((int) 537403)
0xc86: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc87: Pop(1)
0xc88: @@@ ClearReplies(); Obj=0 // @poff=274
0xc89: Pop(0)
0xc8a: Push((int) 537404)
0xc8b: Push((int) 39251)
0xc8c: Push((int) 39250)
0xc8d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc8e: Pop(3)
0xc8f: Push((int) 537417)
0xc90: Push((int) -1)
0xc91: Push((int) 39263)
0xc92: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc93: Pop(3)
0xc94: Return(); Pop(0)

0xc95: Push((int) 39251)
0xc96: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc97: IF (Stack[-1] == 0) GOTO 0xcac; Pop(1)

0xc98: PushEmpty(string)
0xc99: Stack[-1] = "Neutral" // @poff=0
0xc9a: Call2 0x88d

0xc9b: Pop(1)
0xc9c: Push((int) 537405)
0xc9d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc9e: Pop(1)
0xc9f: @@@ ClearReplies(); Obj=0 // @poff=274
0xca0: Pop(0)
0xca1: Push((int) 537406)
0xca2: Push((int) 39253)
0xca3: Push((int) 39252)
0xca4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xca5: Pop(3)
0xca6: Push((int) 537416)
0xca7: Push((int) -1)
0xca8: Push((int) 39262)
0xca9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcaa: Pop(3)
0xcab: Return(); Pop(0)

0xcac: Push((int) 39253)
0xcad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcae: IF (Stack[-1] == 0) GOTO 0xcc3; Pop(1)

0xcaf: PushEmpty(string)
0xcb0: Stack[-1] = "Neutral" // @poff=0
0xcb1: Call2 0x88d

0xcb2: Pop(1)
0xcb3: Push((int) 537407)
0xcb4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xcb5: Pop(1)
0xcb6: @@@ ClearReplies(); Obj=0 // @poff=274
0xcb7: Pop(0)
0xcb8: Push((int) 537408)
0xcb9: Push((int) 39255)
0xcba: Push((int) 39254)
0xcbb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcbc: Pop(3)
0xcbd: Push((int) 537415)
0xcbe: Push((int) -1)
0xcbf: Push((int) 39261)
0xcc0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcc1: Pop(3)
0xcc2: Return(); Pop(0)

0xcc3: Push((int) 39255)
0xcc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc5: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcc6: PushEmpty(string)
0xcc7: Stack[-1] = "Neutral" // @poff=0
0xcc8: Call2 0x88d

0xcc9: Pop(1)
0xcca: Push((int) 537409)
0xccb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xccc: Pop(1)
0xccd: @@@ ClearReplies(); Obj=0 // @poff=274
0xcce: Pop(0)
0xccf: Push((int) 537410)
0xcd0: Push((int) 39257)
0xcd1: Push((int) 39256)
0xcd2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcd3: Pop(3)
0xcd4: Push((int) 537414)
0xcd5: Push((int) -1)
0xcd6: Push((int) 39260)
0xcd7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcd8: Pop(3)
0xcd9: Return(); Pop(0)

0xcda: Push((int) 39257)
0xcdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcdc: IF (Stack[-1] == 0) GOTO 0xcf1; Pop(1)

0xcdd: PushEmpty(string)
0xcde: Stack[-1] = "Neutral" // @poff=0
0xcdf: Call2 0x88d

0xce0: Pop(1)
0xce1: Push((int) 537411)
0xce2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xce3: Pop(1)
0xce4: @@@ ClearReplies(); Obj=0 // @poff=274
0xce5: Pop(0)
0xce6: Push((int) 537412)
0xce7: Push((int) -1)
0xce8: Push((int) 39258)
0xce9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcea: Pop(3)
0xceb: Push((int) 537413)
0xcec: Push((int) -1)
0xced: Push((int) 39259)
0xcee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcef: Pop(3)
0xcf0: Return(); Pop(0)

0xcf1: Push((int) 39237)
0xcf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf3: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xcf4: PushEmpty(string)
0xcf5: Stack[-1] = "Neutral" // @poff=0
0xcf6: Call2 0x88d

0xcf7: Pop(1)
0xcf8: Push((int) 537391)
0xcf9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xcfa: Pop(1)
0xcfb: @@@ ClearReplies(); Obj=0 // @poff=274
0xcfc: Pop(0)
0xcfd: Push((int) 537392)
0xcfe: Push((int) 39239)
0xcff: Push((int) 39238)
0xd00: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd01: Pop(3)
0xd02: Push((int) 537397)
0xd03: Push((int) 39244)
0xd04: Push((int) 39243)
0xd05: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd06: Pop(3)
0xd07: Return(); Pop(0)

0xd08: Push((int) 39244)
0xd09: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0a: IF (Stack[-1] == 0) GOTO 0xd1a; Pop(1)

0xd0b: PushEmpty(string)
0xd0c: Stack[-1] = "Neutral" // @poff=0
0xd0d: Call2 0x88d

0xd0e: Pop(1)
0xd0f: Push((int) 537398)
0xd10: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd11: Pop(1)
0xd12: @@@ ClearReplies(); Obj=0 // @poff=274
0xd13: Pop(0)
0xd14: Push((int) 537399)
0xd15: Push((int) -1)
0xd16: Push((int) 39245)
0xd17: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd18: Pop(3)
0xd19: Return(); Pop(0)

0xd1a: Push((int) 39239)
0xd1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1c: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd1d: PushEmpty(string)
0xd1e: Stack[-1] = "Neutral" // @poff=0
0xd1f: Call2 0x88d

0xd20: Pop(1)
0xd21: Push((int) 537393)
0xd22: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd23: Pop(1)
0xd24: @@@ ClearReplies(); Obj=0 // @poff=274
0xd25: Pop(0)
0xd26: Push((int) 537394)
0xd27: Push((int) 39241)
0xd28: Push((int) 39240)
0xd29: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd2a: Pop(3)
0xd2b: Return(); Pop(0)

0xd2c: Push((int) 39241)
0xd2d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2e: IF (Stack[-1] == 0) GOTO 0xd3e; Pop(1)

0xd2f: PushEmpty(string)
0xd30: Stack[-1] = "Neutral" // @poff=0
0xd31: Call2 0x88d

0xd32: Pop(1)
0xd33: Push((int) 537395)
0xd34: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd35: Pop(1)
0xd36: @@@ ClearReplies(); Obj=0 // @poff=274
0xd37: Pop(0)
0xd38: Push((int) 537396)
0xd39: Push((int) -1)
0xd3a: Push((int) 39242)
0xd3b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd3c: Pop(3)
0xd3d: Return(); Pop(0)

0xd3e: Push((int) 39227)
0xd3f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd40: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd41: PushEmpty(string)
0xd42: Stack[-1] = "Neutral" // @poff=0
0xd43: Call2 0x88d

0xd44: Pop(1)
0xd45: Push((int) 537381)
0xd46: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd47: Pop(1)
0xd48: @@@ ClearReplies(); Obj=0 // @poff=274
0xd49: Pop(0)
0xd4a: Push((int) 537382)
0xd4b: Push((int) 39229)
0xd4c: Push((int) 39228)
0xd4d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd4e: Pop(3)
0xd4f: Push((int) 537386)
0xd50: Push((int) 39233)
0xd51: Push((int) 39232)
0xd52: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd53: Pop(3)
0xd54: Push((int) 537389)
0xd55: Push((int) -1)
0xd56: Push((int) 39235)
0xd57: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd58: Pop(3)
0xd59: Return(); Pop(0)

0xd5a: Push((int) 39233)
0xd5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5c: IF (Stack[-1] == 0) GOTO 0xd6c; Pop(1)

0xd5d: PushEmpty(string)
0xd5e: Stack[-1] = "Neutral" // @poff=0
0xd5f: Call2 0x88d

0xd60: Pop(1)
0xd61: Push((int) 537387)
0xd62: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd63: Pop(1)
0xd64: @@@ ClearReplies(); Obj=0 // @poff=274
0xd65: Pop(0)
0xd66: Push((int) 537388)
0xd67: Push((int) -1)
0xd68: Push((int) 39234)
0xd69: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd6a: Pop(3)
0xd6b: Return(); Pop(0)

0xd6c: Push((int) 39229)
0xd6d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6e: IF (Stack[-1] == 0) GOTO 0xd83; Pop(1)

0xd6f: PushEmpty(string)
0xd70: Stack[-1] = "Neutral" // @poff=0
0xd71: Call2 0x88d

0xd72: Pop(1)
0xd73: Push((int) 537383)
0xd74: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd75: Pop(1)
0xd76: @@@ ClearReplies(); Obj=0 // @poff=274
0xd77: Pop(0)
0xd78: Push((int) 537384)
0xd79: Push((int) -1)
0xd7a: Push((int) 39230)
0xd7b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd7c: Pop(3)
0xd7d: Push((int) 537385)
0xd7e: Push((int) -1)
0xd7f: Push((int) 39231)
0xd80: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd81: Pop(3)
0xd82: Return(); Pop(0)

0xd83: Push((int) 39206)
0xd84: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd85: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd86: PushEmpty(string)
0xd87: Stack[-1] = "Neutral" // @poff=0
0xd88: Call2 0x88d

0xd89: Pop(1)
0xd8a: Push((int) 537360)
0xd8b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd8c: Pop(1)
0xd8d: @@@ ClearReplies(); Obj=0 // @poff=274
0xd8e: Pop(0)
0xd8f: Push((int) 537361)
0xd90: Push((int) 39208)
0xd91: Push((int) 39207)
0xd92: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd93: Pop(3)
0xd94: Push((int) 537376)
0xd95: Push((int) 39223)
0xd96: Push((int) 39222)
0xd97: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd98: Pop(3)
0xd99: Push((int) 537379)
0xd9a: Push((int) -1)
0xd9b: Push((int) 39225)
0xd9c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd9d: Pop(3)
0xd9e: Return(); Pop(0)

0xd9f: Push((int) 39223)
0xda0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda1: IF (Stack[-1] == 0) GOTO 0xdb1; Pop(1)

0xda2: PushEmpty(string)
0xda3: Stack[-1] = "Neutral" // @poff=0
0xda4: Call2 0x88d

0xda5: Pop(1)
0xda6: Push((int) 537377)
0xda7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xda8: Pop(1)
0xda9: @@@ ClearReplies(); Obj=0 // @poff=274
0xdaa: Pop(0)
0xdab: Push((int) 537378)
0xdac: Push((int) -1)
0xdad: Push((int) 39224)
0xdae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xdaf: Pop(3)
0xdb0: Return(); Pop(0)

0xdb1: Push((int) 39208)
0xdb2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb3: IF (Stack[-1] == 0) GOTO 0xdc8; Pop(1)

0xdb4: PushEmpty(string)
0xdb5: Stack[-1] = "Neutral" // @poff=0
0xdb6: Call2 0x88d

0xdb7: Pop(1)
0xdb8: Push((int) 537362)
0xdb9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xdba: Pop(1)
0xdbb: @@@ ClearReplies(); Obj=0 // @poff=274
0xdbc: Pop(0)
0xdbd: Push((int) 537363)
0xdbe: Push((int) 39210)
0xdbf: Push((int) 39209)
0xdc0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xdc1: Pop(3)
0xdc2: Push((int) 537369)
0xdc3: Push((int) 39216)
0xdc4: Push((int) 39215)
0xdc5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xdc6: Pop(3)
0xdc7: Return(); Pop(0)

0xdc8: Push((int) 39216)
0xdc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdca: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xdcb: PushEmpty(string)
0xdcc: Stack[-1] = "Neutral" // @poff=0
0xdcd: Call2 0x88d

0xdce: Pop(1)
0xdcf: Push((int) 537370)
0xdd0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xdd1: Pop(1)
0xdd2: @@@ ClearReplies(); Obj=0 // @poff=274
0xdd3: Pop(0)
0xdd4: Push((int) 537371)
0xdd5: Push((int) 39218)
0xdd6: Push((int) 39217)
0xdd7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xdd8: Pop(3)
0xdd9: Push((int) 537375)
0xdda: Push((int) -1)
0xddb: Push((int) 39221)
0xddc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xddd: Pop(3)
0xdde: Return(); Pop(0)

0xddf: Push((int) 39218)
0xde0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde1: IF (Stack[-1] == 0) GOTO 0xdf6; Pop(1)

0xde2: PushEmpty(string)
0xde3: Stack[-1] = "Neutral" // @poff=0
0xde4: Call2 0x88d

0xde5: Pop(1)
0xde6: Push((int) 537372)
0xde7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xde8: Pop(1)
0xde9: @@@ ClearReplies(); Obj=0 // @poff=274
0xdea: Pop(0)
0xdeb: Push((int) 537373)
0xdec: Push((int) -1)
0xded: Push((int) 39219)
0xdee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xdef: Pop(3)
0xdf0: Push((int) 537374)
0xdf1: Push((int) -1)
0xdf2: Push((int) 39220)
0xdf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xdf4: Pop(3)
0xdf5: Return(); Pop(0)

0xdf6: Push((int) 39210)
0xdf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf8: IF (Stack[-1] == 0) GOTO 0xe08; Pop(1)

0xdf9: PushEmpty(string)
0xdfa: Stack[-1] = "Neutral" // @poff=0
0xdfb: Call2 0x88d

0xdfc: Pop(1)
0xdfd: Push((int) 537364)
0xdfe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xdff: Pop(1)
0xe00: @@@ ClearReplies(); Obj=0 // @poff=274
0xe01: Pop(0)
0xe02: Push((int) 537365)
0xe03: Push((int) 39212)
0xe04: Push((int) 39211)
0xe05: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe06: Pop(3)
0xe07: Return(); Pop(0)

0xe08: Push((int) 39212)
0xe09: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0a: IF (Stack[-1] == 0) GOTO 0xe1f; Pop(1)

0xe0b: PushEmpty(string)
0xe0c: Stack[-1] = "Neutral" // @poff=0
0xe0d: Call2 0x88d

0xe0e: Pop(1)
0xe0f: Push((int) 537366)
0xe10: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe11: Pop(1)
0xe12: @@@ ClearReplies(); Obj=0 // @poff=274
0xe13: Pop(0)
0xe14: Push((int) 537367)
0xe15: Push((int) -1)
0xe16: Push((int) 39213)
0xe17: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe18: Pop(3)
0xe19: Push((int) 537368)
0xe1a: Push((int) -1)
0xe1b: Push((int) 39214)
0xe1c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe1d: Pop(3)
0xe1e: Return(); Pop(0)

0xe1f: Push((int) 39199)
0xe20: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe21: IF (Stack[-1] == 0) GOTO 0xe36; Pop(1)

0xe22: PushEmpty(string)
0xe23: Stack[-1] = "Neutral" // @poff=0
0xe24: Call2 0x88d

0xe25: Pop(1)
0xe26: Push((int) 537353)
0xe27: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe28: Pop(1)
0xe29: @@@ ClearReplies(); Obj=0 // @poff=274
0xe2a: Pop(0)
0xe2b: Push((int) 537354)
0xe2c: Push((int) 39201)
0xe2d: Push((int) 39200)
0xe2e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe2f: Pop(3)
0xe30: Push((int) 537358)
0xe31: Push((int) -1)
0xe32: Push((int) 39204)
0xe33: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe34: Pop(3)
0xe35: Return(); Pop(0)

0xe36: Push((int) 39201)
0xe37: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe38: IF (Stack[-1] == 0) GOTO 0xe4d; Pop(1)

0xe39: PushEmpty(string)
0xe3a: Stack[-1] = "Neutral" // @poff=0
0xe3b: Call2 0x88d

0xe3c: Pop(1)
0xe3d: Push((int) 537355)
0xe3e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe3f: Pop(1)
0xe40: @@@ ClearReplies(); Obj=0 // @poff=274
0xe41: Pop(0)
0xe42: Push((int) 537356)
0xe43: Push((int) -1)
0xe44: Push((int) 39202)
0xe45: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe46: Pop(3)
0xe47: Push((int) 537357)
0xe48: Push((int) -1)
0xe49: Push((int) 39203)
0xe4a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe4b: Pop(3)
0xe4c: Return(); Pop(0)

0xe4d: Push((int) 39176)
0xe4e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4f: IF (Stack[-1] == 0) GOTO 0xe69; Pop(1)

0xe50: PushEmpty(string)
0xe51: Stack[-1] = "Neutral" // @poff=0
0xe52: Call2 0x88d

0xe53: Pop(1)
0xe54: Push((int) 537330)
0xe55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe56: Pop(1)
0xe57: @@@ ClearReplies(); Obj=0 // @poff=274
0xe58: Pop(0)
0xe59: Push((int) 537331)
0xe5a: Push((int) 39178)
0xe5b: Push((int) 39177)
0xe5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe5d: Pop(3)
0xe5e: Push((int) 537341)
0xe5f: Push((int) 39188)
0xe60: Push((int) 39187)
0xe61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe62: Pop(3)
0xe63: Push((int) 537351)
0xe64: Push((int) -1)
0xe65: Push((int) 39197)
0xe66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe67: Pop(3)
0xe68: Return(); Pop(0)

0xe69: Push((int) 39188)
0xe6a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe6b: IF (Stack[-1] == 0) GOTO 0xe80; Pop(1)

0xe6c: PushEmpty(string)
0xe6d: Stack[-1] = "Neutral" // @poff=0
0xe6e: Call2 0x88d

0xe6f: Pop(1)
0xe70: Push((int) 537342)
0xe71: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe72: Pop(1)
0xe73: @@@ ClearReplies(); Obj=0 // @poff=274
0xe74: Pop(0)
0xe75: Push((int) 537343)
0xe76: Push((int) 39190)
0xe77: Push((int) 39189)
0xe78: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe79: Pop(3)
0xe7a: Push((int) 537349)
0xe7b: Push((int) -1)
0xe7c: Push((int) 39195)
0xe7d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe7e: Pop(3)
0xe7f: Return(); Pop(0)

0xe80: Push((int) 39190)
0xe81: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe82: IF (Stack[-1] == 0) GOTO 0xe97; Pop(1)

0xe83: PushEmpty(string)
0xe84: Stack[-1] = "Neutral" // @poff=0
0xe85: Call2 0x88d

0xe86: Pop(1)
0xe87: Push((int) 537344)
0xe88: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe89: Pop(1)
0xe8a: @@@ ClearReplies(); Obj=0 // @poff=274
0xe8b: Pop(0)
0xe8c: Push((int) 537345)
0xe8d: Push((int) 39192)
0xe8e: Push((int) 39191)
0xe8f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe90: Pop(3)
0xe91: Push((int) 537348)
0xe92: Push((int) -1)
0xe93: Push((int) 39194)
0xe94: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe95: Pop(3)
0xe96: Return(); Pop(0)

0xe97: Push((int) 39192)
0xe98: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe99: IF (Stack[-1] == 0) GOTO 0xea9; Pop(1)

0xe9a: PushEmpty(string)
0xe9b: Stack[-1] = "Neutral" // @poff=0
0xe9c: Call2 0x88d

0xe9d: Pop(1)
0xe9e: Push((int) 537346)
0xe9f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xea0: Pop(1)
0xea1: @@@ ClearReplies(); Obj=0 // @poff=274
0xea2: Pop(0)
0xea3: Push((int) 537347)
0xea4: Push((int) -1)
0xea5: Push((int) 39193)
0xea6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xea7: Pop(3)
0xea8: Return(); Pop(0)

0xea9: Push((int) 39178)
0xeaa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeab: IF (Stack[-1] == 0) GOTO 0xec0; Pop(1)

0xeac: PushEmpty(string)
0xead: Stack[-1] = "Neutral" // @poff=0
0xeae: Call2 0x88d

0xeaf: Pop(1)
0xeb0: Push((int) 537332)
0xeb1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xeb2: Pop(1)
0xeb3: @@@ ClearReplies(); Obj=0 // @poff=274
0xeb4: Pop(0)
0xeb5: Push((int) 537333)
0xeb6: Push((int) 39180)
0xeb7: Push((int) 39179)
0xeb8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xeb9: Pop(3)
0xeba: Push((int) 537336)
0xebb: Push((int) 39183)
0xebc: Push((int) 39182)
0xebd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xebe: Pop(3)
0xebf: Return(); Pop(0)

0xec0: Push((int) 39183)
0xec1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec2: IF (Stack[-1] == 0) GOTO 0xed2; Pop(1)

0xec3: PushEmpty(string)
0xec4: Stack[-1] = "Neutral" // @poff=0
0xec5: Call2 0x88d

0xec6: Pop(1)
0xec7: Push((int) 537337)
0xec8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xec9: Pop(1)
0xeca: @@@ ClearReplies(); Obj=0 // @poff=274
0xecb: Pop(0)
0xecc: Push((int) 537338)
0xecd: Push((int) 39185)
0xece: Push((int) 39184)
0xecf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xed0: Pop(3)
0xed1: Return(); Pop(0)

0xed2: Push((int) 39185)
0xed3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed4: IF (Stack[-1] == 0) GOTO 0xee4; Pop(1)

0xed5: PushEmpty(string)
0xed6: Stack[-1] = "Neutral" // @poff=0
0xed7: Call2 0x88d

0xed8: Pop(1)
0xed9: Push((int) 537339)
0xeda: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xedb: Pop(1)
0xedc: @@@ ClearReplies(); Obj=0 // @poff=274
0xedd: Pop(0)
0xede: Push((int) 537340)
0xedf: Push((int) -1)
0xee0: Push((int) 39186)
0xee1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xee2: Pop(3)
0xee3: Return(); Pop(0)

0xee4: Push((int) 39180)
0xee5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee6: IF (Stack[-1] == 0) GOTO 0xef6; Pop(1)

0xee7: PushEmpty(string)
0xee8: Stack[-1] = "Neutral" // @poff=0
0xee9: Call2 0x88d

0xeea: Pop(1)
0xeeb: Push((int) 537334)
0xeec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xeed: Pop(1)
0xeee: @@@ ClearReplies(); Obj=0 // @poff=274
0xeef: Pop(0)
0xef0: Push((int) 537335)
0xef1: Push((int) -1)
0xef2: Push((int) 39181)
0xef3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xef4: Pop(3)
0xef5: Return(); Pop(0)

0xef6: Push((int) 39122)
0xef7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef8: IF (Stack[-1] == 0) GOTO 0xf1c; Pop(1)

0xef9: PushEmpty(string)
0xefa: Stack[-1] = "Neutral" // @poff=0
0xefb: Call2 0x88d

0xefc: Pop(1)
0xefd: Push((int) 537278)
0xefe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xeff: Pop(1)
0xf00: @@@ ClearReplies(); Obj=0 // @poff=274
0xf01: Pop(0)
0xf02: Push((int) 537279)
0xf03: Push((int) 39124)
0xf04: Push((int) 39123)
0xf05: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf06: Pop(3)
0xf07: Push((int) 537292)
0xf08: Push((int) 39124)
0xf09: Push((int) 39137)
0xf0a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf0b: Pop(3)
0xf0c: Push((int) 537293)
0xf0d: Push((int) 39140)
0xf0e: Push((int) 39139)
0xf0f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf10: Pop(3)
0xf11: Push((int) 537304)
0xf12: Push((int) 39151)
0xf13: Push((int) 39150)
0xf14: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf15: Pop(3)
0xf16: Push((int) 537328)
0xf17: Push((int) -1)
0xf18: Push((int) 39174)
0xf19: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf1a: Pop(3)
0xf1b: Return(); Pop(0)

0xf1c: Push((int) 39151)
0xf1d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1e: IF (Stack[-1] == 0) GOTO 0xf33; Pop(1)

0xf1f: PushEmpty(string)
0xf20: Stack[-1] = "Neutral" // @poff=0
0xf21: Call2 0x88d

0xf22: Pop(1)
0xf23: Push((int) 537305)
0xf24: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf25: Pop(1)
0xf26: @@@ ClearReplies(); Obj=0 // @poff=274
0xf27: Pop(0)
0xf28: Push((int) 537306)
0xf29: Push((int) 39153)
0xf2a: Push((int) 39152)
0xf2b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf2c: Pop(3)
0xf2d: Push((int) 537318)
0xf2e: Push((int) 39165)
0xf2f: Push((int) 39164)
0xf30: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf31: Pop(3)
0xf32: Return(); Pop(0)

0xf33: Push((int) 39165)
0xf34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf35: IF (Stack[-1] == 0) GOTO 0xf4a; Pop(1)

0xf36: PushEmpty(string)
0xf37: Stack[-1] = "Neutral" // @poff=0
0xf38: Call2 0x88d

0xf39: Pop(1)
0xf3a: Push((int) 537319)
0xf3b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf3c: Pop(1)
0xf3d: @@@ ClearReplies(); Obj=0 // @poff=274
0xf3e: Pop(0)
0xf3f: Push((int) 537320)
0xf40: Push((int) -1)
0xf41: Push((int) 39166)
0xf42: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf43: Pop(3)
0xf44: Push((int) 537321)
0xf45: Push((int) 39168)
0xf46: Push((int) 39167)
0xf47: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf48: Pop(3)
0xf49: Return(); Pop(0)

0xf4a: Push((int) 39168)
0xf4b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4c: IF (Stack[-1] == 0) GOTO 0xf61; Pop(1)

0xf4d: PushEmpty(string)
0xf4e: Stack[-1] = "Neutral" // @poff=0
0xf4f: Call2 0x88d

0xf50: Pop(1)
0xf51: Push((int) 537322)
0xf52: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf53: Pop(1)
0xf54: @@@ ClearReplies(); Obj=0 // @poff=274
0xf55: Pop(0)
0xf56: Push((int) 537323)
0xf57: Push((int) -1)
0xf58: Push((int) 39169)
0xf59: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf5a: Pop(3)
0xf5b: Push((int) 537324)
0xf5c: Push((int) 39171)
0xf5d: Push((int) 39170)
0xf5e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf5f: Pop(3)
0xf60: Return(); Pop(0)

0xf61: Push((int) 39171)
0xf62: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf63: IF (Stack[-1] == 0) GOTO 0xf73; Pop(1)

0xf64: PushEmpty(string)
0xf65: Stack[-1] = "Neutral" // @poff=0
0xf66: Call2 0x88d

0xf67: Pop(1)
0xf68: Push((int) 537325)
0xf69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf6a: Pop(1)
0xf6b: @@@ ClearReplies(); Obj=0 // @poff=274
0xf6c: Pop(0)
0xf6d: Push((int) 537326)
0xf6e: Push((int) -1)
0xf6f: Push((int) 39172)
0xf70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf71: Pop(3)
0xf72: Return(); Pop(0)

0xf73: Push((int) 39153)
0xf74: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf75: IF (Stack[-1] == 0) GOTO 0xf8a; Pop(1)

0xf76: PushEmpty(string)
0xf77: Stack[-1] = "Neutral" // @poff=0
0xf78: Call2 0x88d

0xf79: Pop(1)
0xf7a: Push((int) 537307)
0xf7b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf7c: Pop(1)
0xf7d: @@@ ClearReplies(); Obj=0 // @poff=274
0xf7e: Pop(0)
0xf7f: Push((int) 537308)
0xf80: Push((int) 39155)
0xf81: Push((int) 39154)
0xf82: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf83: Pop(3)
0xf84: Push((int) 537317)
0xf85: Push((int) -1)
0xf86: Push((int) 39163)
0xf87: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf88: Pop(3)
0xf89: Return(); Pop(0)

0xf8a: Push((int) 39155)
0xf8b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8c: IF (Stack[-1] == 0) GOTO 0xfa1; Pop(1)

0xf8d: PushEmpty(string)
0xf8e: Stack[-1] = "Neutral" // @poff=0
0xf8f: Call2 0x88d

0xf90: Pop(1)
0xf91: Push((int) 537309)
0xf92: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf93: Pop(1)
0xf94: @@@ ClearReplies(); Obj=0 // @poff=274
0xf95: Pop(0)
0xf96: Push((int) 537310)
0xf97: Push((int) 39157)
0xf98: Push((int) 39156)
0xf99: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf9a: Pop(3)
0xf9b: Push((int) 537313)
0xf9c: Push((int) 39160)
0xf9d: Push((int) 39159)
0xf9e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf9f: Pop(3)
0xfa0: Return(); Pop(0)

0xfa1: Push((int) 39160)
0xfa2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa3: IF (Stack[-1] == 0) GOTO 0xfb8; Pop(1)

0xfa4: PushEmpty(string)
0xfa5: Stack[-1] = "Neutral" // @poff=0
0xfa6: Call2 0x88d

0xfa7: Pop(1)
0xfa8: Push((int) 537314)
0xfa9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xfaa: Pop(1)
0xfab: @@@ ClearReplies(); Obj=0 // @poff=274
0xfac: Pop(0)
0xfad: Push((int) 537315)
0xfae: Push((int) -1)
0xfaf: Push((int) 39161)
0xfb0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xfb1: Pop(3)
0xfb2: Push((int) 537316)
0xfb3: Push((int) -1)
0xfb4: Push((int) 39162)
0xfb5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xfb6: Pop(3)
0xfb7: Return(); Pop(0)

0xfb8: Push((int) 39157)
0xfb9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfba: IF (Stack[-1] == 0) GOTO 0xfca; Pop(1)

0xfbb: PushEmpty(string)
0xfbc: Stack[-1] = "Neutral" // @poff=0
0xfbd: Call2 0x88d

0xfbe: Pop(1)
0xfbf: Push((int) 537311)
0xfc0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xfc1: Pop(1)
0xfc2: @@@ ClearReplies(); Obj=0 // @poff=274
0xfc3: Pop(0)
0xfc4: Push((int) 537312)
0xfc5: Push((int) -1)
0xfc6: Push((int) 39158)
0xfc7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xfc8: Pop(3)
0xfc9: Return(); Pop(0)

0xfca: Push((int) 39140)
0xfcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfcc: IF (Stack[-1] == 0) GOTO 0xfe1; Pop(1)

0xfcd: PushEmpty(string)
0xfce: Stack[-1] = "Neutral" // @poff=0
0xfcf: Call2 0x88d

0xfd0: Pop(1)
0xfd1: Push((int) 537294)
0xfd2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xfd3: Pop(1)
0xfd4: @@@ ClearReplies(); Obj=0 // @poff=274
0xfd5: Pop(0)
0xfd6: Push((int) 537295)
0xfd7: Push((int) 39142)
0xfd8: Push((int) 39141)
0xfd9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xfda: Pop(3)
0xfdb: Push((int) 537301)
0xfdc: Push((int) 39148)
0xfdd: Push((int) 39147)
0xfde: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xfdf: Pop(3)
0xfe0: Return(); Pop(0)

0xfe1: Push((int) 39148)
0xfe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe3: IF (Stack[-1] == 0) GOTO 0xff3; Pop(1)

0xfe4: PushEmpty(string)
0xfe5: Stack[-1] = "Neutral" // @poff=0
0xfe6: Call2 0x88d

0xfe7: Pop(1)
0xfe8: Push((int) 537302)
0xfe9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xfea: Pop(1)
0xfeb: @@@ ClearReplies(); Obj=0 // @poff=274
0xfec: Pop(0)
0xfed: Push((int) 537303)
0xfee: Push((int) -1)
0xfef: Push((int) 39149)
0xff0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xff1: Pop(3)
0xff2: Return(); Pop(0)

0xff3: Push((int) 39142)
0xff4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff5: IF (Stack[-1] == 0) GOTO 0x1005; Pop(1)

0xff6: PushEmpty(string)
0xff7: Stack[-1] = "Neutral" // @poff=0
0xff8: Call2 0x88d

0xff9: Pop(1)
0xffa: Push((int) 537296)
0xffb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xffc: Pop(1)
0xffd: @@@ ClearReplies(); Obj=0 // @poff=274
0xffe: Pop(0)
0xfff: Push((int) 537297)
0x1000: Push((int) 39144)
0x1001: Push((int) 39143)
0x1002: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1003: Pop(3)
0x1004: Return(); Pop(0)

0x1005: Push((int) 39144)
0x1006: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1007: IF (Stack[-1] == 0) GOTO 0x101c; Pop(1)

0x1008: PushEmpty(string)
0x1009: Stack[-1] = "Neutral" // @poff=0
0x100a: Call2 0x88d

0x100b: Pop(1)
0x100c: Push((int) 537298)
0x100d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x100e: Pop(1)
0x100f: @@@ ClearReplies(); Obj=0 // @poff=274
0x1010: Pop(0)
0x1011: Push((int) 537299)
0x1012: Push((int) -1)
0x1013: Push((int) 39145)
0x1014: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1015: Pop(3)
0x1016: Push((int) 537300)
0x1017: Push((int) -1)
0x1018: Push((int) 39146)
0x1019: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x101a: Pop(3)
0x101b: Return(); Pop(0)

0x101c: Push((int) 39124)
0x101d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101e: IF (Stack[-1] == 0) GOTO 0x1033; Pop(1)

0x101f: PushEmpty(string)
0x1020: Stack[-1] = "Neutral" // @poff=0
0x1021: Call2 0x88d

0x1022: Pop(1)
0x1023: Push((int) 537280)
0x1024: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x1025: Pop(1)
0x1026: @@@ ClearReplies(); Obj=0 // @poff=274
0x1027: Pop(0)
0x1028: Push((int) 537281)
0x1029: Push((int) 39126)
0x102a: Push((int) 39125)
0x102b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x102c: Pop(3)
0x102d: Push((int) 537288)
0x102e: Push((int) 39133)
0x102f: Push((int) 39132)
0x1030: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1031: Pop(3)
0x1032: Return(); Pop(0)

0x1033: Push((int) 39133)
0x1034: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1035: IF (Stack[-1] == 0) GOTO 0x104a; Pop(1)

0x1036: PushEmpty(string)
0x1037: Stack[-1] = "Neutral" // @poff=0
0x1038: Call2 0x88d

0x1039: Pop(1)
0x103a: Push((int) 537289)
0x103b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x103c: Pop(1)
0x103d: @@@ ClearReplies(); Obj=0 // @poff=274
0x103e: Pop(0)
0x103f: Push((int) 537290)
0x1040: Push((int) 39126)
0x1041: Push((int) 39134)
0x1042: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1043: Pop(3)
0x1044: Push((int) 537291)
0x1045: Push((int) -1)
0x1046: Push((int) 39136)
0x1047: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1048: Pop(3)
0x1049: Return(); Pop(0)

0x104a: Push((int) 39126)
0x104b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104c: IF (Stack[-1] == 0) GOTO 0x1061; Pop(1)

0x104d: PushEmpty(string)
0x104e: Stack[-1] = "Neutral" // @poff=0
0x104f: Call2 0x88d

0x1050: Pop(1)
0x1051: Push((int) 537282)
0x1052: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x1053: Pop(1)
0x1054: @@@ ClearReplies(); Obj=0 // @poff=274
0x1055: Pop(0)
0x1056: Push((int) 537283)
0x1057: Push((int) 39128)
0x1058: Push((int) 39127)
0x1059: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x105a: Pop(3)
0x105b: Push((int) 537287)
0x105c: Push((int) -1)
0x105d: Push((int) 39131)
0x105e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x105f: Pop(3)
0x1060: Return(); Pop(0)

0x1061: Push((int) 39128)
0x1062: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1063: IF (Stack[-1] == 0) GOTO 0x1078; Pop(1)

0x1064: PushEmpty(string)
0x1065: Stack[-1] = "Neutral" // @poff=0
0x1066: Call2 0x88d

0x1067: Pop(1)
0x1068: Push((int) 537284)
0x1069: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x106a: Pop(1)
0x106b: @@@ ClearReplies(); Obj=0 // @poff=274
0x106c: Pop(0)
0x106d: Push((int) 537285)
0x106e: Push((int) -1)
0x106f: Push((int) 39129)
0x1070: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1071: Pop(3)
0x1072: Push((int) 537286)
0x1073: Push((int) -1)
0x1074: Push((int) 39130)
0x1075: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1076: Pop(3)
0x1077: Return(); Pop(0)

0x1078: Push((int) 39086)
0x1079: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107a: IF (Stack[-1] == 0) GOTO 0x109e; Pop(1)

0x107b: PushEmpty(string)
0x107c: Stack[-1] = "Neutral" // @poff=0
0x107d: Call2 0x88d

0x107e: Pop(1)
0x107f: Push((int) 537243)
0x1080: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x1081: Pop(1)
0x1082: @@@ ClearReplies(); Obj=0 // @poff=274
0x1083: Pop(0)
0x1084: Push((int) 537244)
0x1085: Push((int) 39088)
0x1086: Push((int) 39087)
0x1087: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1088: Pop(3)
0x1089: Push((int) 537254)
0x108a: Push((int) 39099)
0x108b: Push((int) 39098)
0x108c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x108d: Pop(3)
0x108e: Push((int) 537264)
0x108f: Push((int) 39109)
0x1090: Push((int) 39108)
0x1091: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1092: Pop(3)
0x1093: Push((int) 537275)
0x1094: Push((int) -1)
0x1095: Push((int) 39119)
0x1096: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1097: Pop(3)
0x1098: Push((int) 537276)
0x1099: Push((int) -1)
0x109a: Push((int) 39120)
0x109b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x109c: Pop(3)
0x109d: Return(); Pop(0)

0x109e: Push((int) 39109)
0x109f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a0: IF (Stack[-1] == 0) GOTO 0x10b5; Pop(1)

0x10a1: PushEmpty(string)
0x10a2: Stack[-1] = "Neutral" // @poff=0
0x10a3: Call2 0x88d

0x10a4: Pop(1)
0x10a5: Push((int) 537265)
0x10a6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x10a7: Pop(1)
0x10a8: @@@ ClearReplies(); Obj=0 // @poff=274
0x10a9: Pop(0)
0x10aa: Push((int) 537266)
0x10ab: Push((int) -1)
0x10ac: Push((int) 39110)
0x10ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x10ae: Pop(3)
0x10af: Push((int) 537267)
0x10b0: Push((int) 39112)
0x10b1: Push((int) 39111)
0x10b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x10b3: Pop(3)
0x10b4: Return(); Pop(0)

0x10b5: Push((int) 39112)
0x10b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b7: IF (Stack[-1] == 0) GOTO 0x10cc; Pop(1)

0x10b8: PushEmpty(string)
0x10b9: Stack[-1] = "Neutral" // @poff=0
0x10ba: Call2 0x88d

0x10bb: Pop(1)
0x10bc: Push((int) 537268)
0x10bd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x10be: Pop(1)
0x10bf: @@@ ClearReplies(); Obj=0 // @poff=274
0x10c0: Pop(0)
0x10c1: Push((int) 537269)
0x10c2: Push((int) 39114)
0x10c3: Push((int) 39113)
0x10c4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x10c5: Pop(3)
0x10c6: Push((int) 537273)
0x10c7: Push((int) -1)
0x10c8: Push((int) 39117)
0x10c9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x10ca: Pop(3)
0x10cb: Return(); Pop(0)

0x10cc: Push((int) 39114)
0x10cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ce: IF (Stack[-1] == 0) GOTO 0x10e3; Pop(1)

0x10cf: PushEmpty(string)
0x10d0: Stack[-1] = "Neutral" // @poff=0
0x10d1: Call2 0x88d

0x10d2: Pop(1)
0x10d3: Push((int) 537270)
0x10d4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x10d5: Pop(1)
0x10d6: @@@ ClearReplies(); Obj=0 // @poff=274
0x10d7: Pop(0)
0x10d8: Push((int) 537271)
0x10d9: Push((int) -1)
0x10da: Push((int) 39115)
0x10db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x10dc: Pop(3)
0x10dd: Push((int) 537272)
0x10de: Push((int) -1)
0x10df: Push((int) 39116)
0x10e0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x10e1: Pop(3)
0x10e2: Return(); Pop(0)

0x10e3: Push((int) 39099)
0x10e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e5: IF (Stack[-1] == 0) GOTO 0x10fa; Pop(1)

0x10e6: PushEmpty(string)
0x10e7: Stack[-1] = "Neutral" // @poff=0
0x10e8: Call2 0x88d

0x10e9: Pop(1)
0x10ea: Push((int) 537255)
0x10eb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x10ec: Pop(1)
0x10ed: @@@ ClearReplies(); Obj=0 // @poff=274
0x10ee: Pop(0)
0x10ef: Push((int) 537256)
0x10f0: Push((int) 39101)
0x10f1: Push((int) 39100)
0x10f2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x10f3: Pop(3)
0x10f4: Push((int) 537260)
0x10f5: Push((int) 39105)
0x10f6: Push((int) 39104)
0x10f7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x10f8: Pop(3)
0x10f9: Return(); Pop(0)

0x10fa: Push((int) 39105)
0x10fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10fc: IF (Stack[-1] == 0) GOTO 0x1111; Pop(1)

0x10fd: PushEmpty(string)
0x10fe: Stack[-1] = "Neutral" // @poff=0
0x10ff: Call2 0x88d

0x1100: Pop(1)
0x1101: Push((int) 537261)
0x1102: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x1103: Pop(1)
0x1104: @@@ ClearReplies(); Obj=0 // @poff=274
0x1105: Pop(0)
0x1106: Push((int) 537262)
0x1107: Push((int) -1)
0x1108: Push((int) 39106)
0x1109: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x110a: Pop(3)
0x110b: Push((int) 537263)
0x110c: Push((int) -1)
0x110d: Push((int) 39107)
0x110e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x110f: Pop(3)
0x1110: Return(); Pop(0)

0x1111: Push((int) 39101)
0x1112: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1113: IF (Stack[-1] == 0) GOTO 0x1128; Pop(1)

0x1114: PushEmpty(string)
0x1115: Stack[-1] = "Neutral" // @poff=0
0x1116: Call2 0x88d

0x1117: Pop(1)
0x1118: Push((int) 537257)
0x1119: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x111a: Pop(1)
0x111b: @@@ ClearReplies(); Obj=0 // @poff=274
0x111c: Pop(0)
0x111d: Push((int) 537258)
0x111e: Push((int) -1)
0x111f: Push((int) 39102)
0x1120: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1121: Pop(3)
0x1122: Push((int) 537259)
0x1123: Push((int) -1)
0x1124: Push((int) 39103)
0x1125: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1126: Pop(3)
0x1127: Return(); Pop(0)

0x1128: Push((int) 39088)
0x1129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112a: IF (Stack[-1] == 0) GOTO 0x113f; Pop(1)

0x112b: PushEmpty(string)
0x112c: Stack[-1] = "Neutral" // @poff=0
0x112d: Call2 0x88d

0x112e: Pop(1)
0x112f: Push((int) 537245)
0x1130: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x1131: Pop(1)
0x1132: @@@ ClearReplies(); Obj=0 // @poff=274
0x1133: Pop(0)
0x1134: Push((int) 537246)
0x1135: Push((int) 39090)
0x1136: Push((int) 39089)
0x1137: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1138: Pop(3)
0x1139: Push((int) 537253)
0x113a: Push((int) 39090)
0x113b: Push((int) 39096)
0x113c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x113d: Pop(3)
0x113e: Return(); Pop(0)

0x113f: Push((int) 39090)
0x1140: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1141: IF (Stack[-1] == 0) GOTO 0x1156; Pop(1)

0x1142: PushEmpty(string)
0x1143: Stack[-1] = "Neutral" // @poff=0
0x1144: Call2 0x88d

0x1145: Pop(1)
0x1146: Push((int) 537247)
0x1147: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x1148: Pop(1)
0x1149: @@@ ClearReplies(); Obj=0 // @poff=274
0x114a: Pop(0)
0x114b: Push((int) 537248)
0x114c: Push((int) 39092)
0x114d: Push((int) 39091)
0x114e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x114f: Pop(3)
0x1150: Push((int) 537252)
0x1151: Push((int) -1)
0x1152: Push((int) 39095)
0x1153: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1154: Pop(3)
0x1155: Return(); Pop(0)

0x1156: Push((int) 39092)
0x1157: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1158: IF (Stack[-1] == 0) GOTO 0x116d; Pop(1)

0x1159: PushEmpty(string)
0x115a: Stack[-1] = "Neutral" // @poff=0
0x115b: Call2 0x88d

0x115c: Pop(1)
0x115d: Push((int) 537249)
0x115e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x115f: Pop(1)
0x1160: @@@ ClearReplies(); Obj=0 // @poff=274
0x1161: Pop(0)
0x1162: Push((int) 537250)
0x1163: Push((int) -1)
0x1164: Push((int) 39093)
0x1165: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1166: Pop(3)
0x1167: Push((int) 537251)
0x1168: Push((int) -1)
0x1169: Push((int) 39094)
0x116a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x116b: Pop(3)
0x116c: Return(); Pop(0)

0x116d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x116e: PushEmpty(bool)
0x116f: Call2 0x1620

0x1170: Pop(0)
0x1171: IF (Stack[-1] == 0) GOTO 0x1175; Pop(1)

0x1172: @ lshStopAnimation()
0x1173: Pop(0)
0x1174: GOTO 0x1177

0x1175: @ StopAnimation()
0x1176: Pop(0)
0x1177: Return(); Pop(0)

0x1178: GOTO 0x8a4

0x1179: Return(); Pop(0)

0x117a: PushEmpty(cvector, cvector)
0x117b: @ GetPosition(Stack[-1])
0x117c: Pop(0)
0x117d: Stack[-1] = Stack[-3]
0x117e: Return(); Pop(2)

0x117f: PushEmpty(cvector, cvector, cvector, cvector)
0x1180: @ GetPosition(Stack[-2])
0x1181: Pop(0)
0x1182: @@ GetPosition(Stack[-1]); Obj=5 // @poff=110
0x1183: Pop(0)
0x1184: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x1185: Return(); Pop(4)

0x1186: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1187: @ GetPosition(Stack[-3])
0x1188: Pop(0)
0x1189: @@ GetPosition(Stack[-2]); Obj=7 // @poff=110
0x118a: Pop(0)
0x118b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x118c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x118d: Return(); Pop(6)

0x118e: PushEmpty(bool, bool)
0x118f: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1190: Pop(0)
0x1191: Stack[-1] = Stack[-4]
0x1192: Return(); Pop(2)

0x1193: PushEmpty(bool, bool)
0x1194: Push("HasProperty") // @poff=296
0x1195: Push((int) 2)
0x1196: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1197: Pop(1); Push((bool) Stack[-1] == 0)
0x1198: IF (Stack[-1] == 0) GOTO 0x119b; Pop(1)

0x1199: Stack[-5] = (bool) 0
0x119a: Return(); Pop(2)

0x119b: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=320
0x119c: Pop(0)
0x119d: Stack[-1] = Stack[-5]
0x119e: Return(); Pop(2)

0x119f: PushEmpty(bool, bool)
0x11a0: @@ IsDead(Stack[-1]); Obj=3 // @poff=332
0x11a1: Pop(0)
0x11a2: Stack[-1] = Stack[-4]
0x11a3: Return(); Pop(2)

0x11a4: PushEmpty(object, object, object, object)
0x11a5: Pop(0); PushNull((bool) Stack[-5] == 0)
0x11a6: IF (Stack[-1] == 0) GOTO 0x11a9; Pop(1)

0x11a7: Stack[-6] = (bool) 0
0x11a8: Return(); Pop(4)

0x11a9: PushEmpty(bool)
0x11aa: Stack[-1] = (bool) 0
0x11ab: Push("IsDead") // @poff=339
0x11ac: Push((int) 1)
0x11ad: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x11ae: IF (Stack[-1] == 0) GOTO 0x11b5; Pop(1)

0x11af: PushEmpty(bool, object)
0x11b0: Stack[-8] = Stack[-1]
0x11b1: Call2 0x119f

0x11b2: Pop(1)
0x11b3: IF (Stack[-1] == 0) GOTO 0x11b5; Pop(1)

0x11b4: Stack[-1] = (bool) 1
0x11b5: IF (Stack[-1] == 0) GOTO 0x11b8; Pop(1)

0x11b6: Stack[-6] = (bool) 0
0x11b7: Return(); Pop(4)

0x11b8: @ GetScene(Stack[-2])
0x11b9: Pop(0)
0x11ba: Pop(0); PushNull((bool) Stack[-2] == 0)
0x11bb: IF (Stack[-1] == 0) GOTO 0x11be; Pop(1)

0x11bc: Stack[-6] = (bool) 0
0x11bd: Return(); Pop(4)

0x11be: @@ GetScene(Stack[-1]); Obj=5 // @poff=353
0x11bf: Pop(0)
0x11c0: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x11c1: IF (Stack[-1] == 0) GOTO 0x11c4; Pop(1)

0x11c2: Stack[-6] = (bool) 0
0x11c3: Return(); Pop(4)

0x11c4: Stack[-6] = (bool) 1
0x11c5: Return(); Pop(4)

0x11c6: Stack[-1] = 0
0x11c7: Stack[-2] = 0
0x11c8: PushEmpty(int, int)
0x11c9: PushEmpty(bool, object)
0x11ca: Stack[-5] = Stack[-1]
0x11cb: Call2 0x11a4

0x11cc: Pop(1)
0x11cd: Pop(1); Push((bool) Stack[-1] == 0)
0x11ce: IF (Stack[-1] == 0) GOTO 0x11d1; Pop(1)

0x11cf: Stack[-4] = (bool) 0
0x11d0: Return(); Pop(2)

0x11d1: PushEmpty(bool, object, string)
0x11d2: Stack[-6] = Stack[-2]
0x11d3: Stack[-1] = "noaccess" // @poff=362
0x11d4: Call2 0x1193

0x11d5: Pop(2)
0x11d6: Pop(1); Push((bool) Stack[-1] == 0)
0x11d7: IF (Stack[-1] == 0) GOTO 0x11da; Pop(1)

0x11d8: Stack[-4] = (bool) 1
0x11d9: Return(); Pop(2)

0x11da: Push("noaccess") // @poff=362
0x11db: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=380
0x11dc: Pop(1)
0x11dd: Push((int) 0)
0x11de: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x11df: Return(); Pop(2)

0x11e0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x11e1: @@ GetPosition(Stack[-3]); Obj=7 // @poff=110
0x11e2: Pop(0)
0x11e3: @ GetPosition(Stack[-2])
0x11e4: Pop(0)
0x11e5: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x11e6: Push(CvectorIndex(Stack[-1], 0))
0x11e7: Push(CvectorIndex(Stack[-2], 2))
0x11e8: @ RotateAsync(Stack[-2], Stack[-1])
0x11e9: Pop(2)
0x11ea: Return(); Pop(6)

0x11eb: PushEmpty(bool, bool)
0x11ec: @ IsLoaded(Stack[-1])
0x11ed: Pop(0)
0x11ee: Stack[-1] = Stack[-3]
0x11ef: Return(); Pop(2)

0x11f0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x11f1: @@ GetPosition(Stack[-8]); Obj=20 // @poff=110
0x11f2: Pop(0)
0x11f3: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=392
0x11f4: Pop(0)
0x11f5: Push(CvectorIndex(Stack[-8], 1))
0x11f6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x11f7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x11f8: @ GetPosition(Stack[-7])
0x11f9: Pop(0)
0x11fa: @ GetEyesHeight(Stack[-9])
0x11fb: Pop(0)
0x11fc: Push(CvectorIndex(Stack[-7], 1))
0x11fd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x11fe: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x11ff: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1200: Push(CvectorIndex(Stack[-6], 1))
0x1201: Stack[-1] = (int) 0
0x1202: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1203: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1204: Pop(1); Push(Sqrt(Stack[-1]))
0x1205: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1206: Stack[-5] = -Stack[-6]; Pop(0);
0x1207: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1208: PushEmpty(cvector, cvector)
0x1209: Push([0.0, 1.0, 0.0])
0x120a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x120b: Call2 0x12bf

0x120c: Pop(1)
0x120d: Push((int) 25)
0x120e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x120f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1210: Push([0.0, 10.0, 0.0])
0x1211: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1212: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1213: @ IsOverrideActive(Stack[-2])
0x1214: Pop(0)
0x1215: Push(Stack[-2])
0x1216: IF (Stack[-1] == 0) GOTO 0x1219; Pop(1)

0x1217: Stack[-21] = (bool) 0
0x1218: Return(); Pop(18)

0x1219: @ StopWorld()
0x121a: Pop(0)
0x121b: @ CameraTransit(Stack[-3], Stack[-5])
0x121c: Pop(0)
0x121d: Push(CvectorIndex(Stack[-4], 0))
0x121e: Push(CvectorIndex(Stack[-5], 2))
0x121f: @ Rotate(Stack[-2], Stack[-1])
0x1220: Pop(2)
0x1221: PushEmpty(bool)
0x1222: Call2 0x1620

0x1223: Pop(0)
0x1224: IF (Stack[-1] == 0) GOTO 0x1226; Pop(1)

0x1225: GOTO 0x122e

0x1226: Push("head") // @poff=34
0x1227: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1228: Pop(1)
0x1229: Push(Stack[-1])
0x122a: IF (Stack[-1] == 0) GOTO 0x122e; Pop(1)

0x122b: Push("head") // @poff=34
0x122c: @ LookAsyncCamera(Stack[-1])
0x122d: Pop(1)
0x122e: @ CameraWaitForPlayFinish()
0x122f: Pop(0)
0x1230: @ ResumeWorld()
0x1231: Pop(0)
0x1232: Stack[-21] = (bool) 1
0x1233: Return(); Pop(18)

0x1234: PushEmpty(bool, bool)
0x1235: @ CameraSwitchToNormal()
0x1236: Pop(0)
0x1237: PushEmpty(bool)
0x1238: Call2 0x1620

0x1239: Pop(0)
0x123a: IF (Stack[-1] == 0) GOTO 0x123c; Pop(1)

0x123b: GOTO 0x1244

0x123c: Push("head") // @poff=34
0x123d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x123e: Pop(1)
0x123f: Push(Stack[-1])
0x1240: IF (Stack[-1] == 0) GOTO 0x1244; Pop(1)

0x1241: Push("head") // @poff=34
0x1242: @ UnlookAsync(Stack[-1])
0x1243: Pop(1)
0x1244: Return(); Pop(2)

0x1245: PushEmpty()
0x1246: PushEmpty(bool, object, float)
0x1247: Stack[-4] = Stack[-2]
0x1248: Stack[-1] = (int) 70
0x1249: Call2 0x124d

0x124a: Stack[-3] = Stack[-5]
0x124b: Pop(3)
0x124c: Return(); Pop(0)

0x124d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x124e: @@ GetPosition(Stack[-7]); Obj=18 // @poff=110
0x124f: Pop(0)
0x1250: @@ GetEyesHeight(Stack[-8]); Obj=18 // @poff=392
0x1251: Pop(0)
0x1252: Push(CvectorIndex(Stack[-7], 1))
0x1253: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1254: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1255: @ GetPosition(Stack[-6])
0x1256: Pop(0)
0x1257: @ GetEyesHeight(Stack[-8])
0x1258: Pop(0)
0x1259: Push(CvectorIndex(Stack[-6], 1))
0x125a: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x125b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x125c: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x125d: Push(CvectorIndex(Stack[-5], 1))
0x125e: Stack[-1] = (int) 0
0x125f: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1260: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1261: Pop(1); Push(Sqrt(Stack[-1]))
0x1262: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1263: Stack[-4] = -Stack[-5]; Pop(0);
0x1264: Pop(0); Push(Stack[-5] * Stack[-17]);
0x1265: Push([0.0, 10.0, 0.0])
0x1266: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1267: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1268: @ IsOverrideActive(Stack[-1])
0x1269: Pop(0)
0x126a: Push(Stack[-1])
0x126b: IF (Stack[-1] == 0) GOTO 0x126e; Pop(1)

0x126c: Stack[-19] = (bool) 0
0x126d: Return(); Pop(16)

0x126e: @ StopWorld()
0x126f: Pop(0)
0x1270: @ CameraTransit(Stack[-2], Stack[-4])
0x1271: Pop(0)
0x1272: Push(CvectorIndex(Stack[-3], 0))
0x1273: Push(CvectorIndex(Stack[-4], 2))
0x1274: @ Rotate(Stack[-2], Stack[-1])
0x1275: Pop(2)
0x1276: @ CameraWaitForPlayFinish()
0x1277: Pop(0)
0x1278: @ ResumeWorld()
0x1279: Pop(0)
0x127a: Stack[-19] = (bool) 1
0x127b: Return(); Pop(16)

0x127c: PushEmpty()
0x127d: @ CameraSwitchToNormal()
0x127e: Pop(0)
0x127f: Return(); Pop(0)

0x1280: PushEmpty(float, float, float, float)
0x1281: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1282: Pop(0)
0x1283: Push((bool) 0)
0x1284: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1285: Pop(1)
0x1286: Return(); Pop(4)

0x1287: PushEmpty(float, float, float, float)
0x1288: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x1289: Pop(0)
0x128a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x128b: Pop(0)
0x128c: Return(); Pop(4)

0x128d: PushEmpty(float, cvector, float, cvector)
0x128e: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=392
0x128f: Pop(0)
0x1290: Stack[-1] = [0.0, 0.0, 0.0]
0x1291: Push(CvectorIndex(Stack[-1], 1))
0x1292: Stack[-3] = Stack[-1]
0x1293: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1294: Push("head") // @poff=34
0x1295: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x1296: Pop(1)
0x1297: Return(); Pop(4)

0x1298: PushEmpty(bool)
0x1299: Call2 0x1620

0x129a: Pop(0)
0x129b: IF (Stack[-1] == 0) GOTO 0x129e; Pop(1)

0x129c: @ lshStopSpeech()
0x129d: Pop(0)
0x129e: Return(); Pop(0)

0x129f: PushEmpty(bool, bool)
0x12a0: PushEmpty(bool, int, int)
0x12a1: Stack[-7] = Stack[-2]
0x12a2: Stack[-6] = Stack[-1]
0x12a3: Call2 0x12c9

0x12a4: Pop(2)
0x12a5: IF (Stack[-1] == 0) GOTO 0x12a9; Pop(1)

0x12a6: Push((int) 0)
0x12a7: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x12a8: Pop(1)
0x12a9: Return(); Pop(2)

0x12aa: PushEmpty(int, bool, int, bool)
0x12ab: PushEmpty(bool, int, int)
0x12ac: Stack[-10] = Stack[-2]
0x12ad: Stack[-9] = Stack[-1]
0x12ae: Call2 0x12c9

0x12af: Pop(2)
0x12b0: IF (Stack[-1] == 0) GOTO 0x12b8; Pop(1)

0x12b1: @ irand(Stack[-2], Stack[-5])
0x12b2: Pop(0)
0x12b3: Push((int) 0)
0x12b4: Push((int) 1)
0x12b5: Pop(1); Push(Stack[-4] + Stack[-1]);
0x12b6: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x12b7: Pop(2)
0x12b8: Return(); Pop(4)

0x12b9: PushEmpty(object, object)
0x12ba: @ self(Stack[-1])
0x12bb: Pop(0)
0x12bc: Stack[-1] = Stack[-3]
0x12bd: Return(); Pop(2)

0x12be: Stack[-1] = 0
0x12bf: PushEmpty(float, float)
0x12c0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12c1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x12c2: Push((float)9.999999974752427e-07)
0x12c3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12c4: IF (Stack[-1] == 0) GOTO 0x12c7; Pop(1)

0x12c5: Stack[-4] = [0.0, 0.0, 0.0]
0x12c6: Return(); Pop(2)

0x12c7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x12c8: Return(); Pop(2)

0x12c9: PushEmpty(int, int)
0x12ca: @ irand(Stack[-1], Stack[-3])
0x12cb: Pop(0)
0x12cc: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x12cd: Return(); Pop(2)

0x12ce: PushEmpty()
0x12cf: Pop(0); Push(Stack[-2] | Stack[-1]);
0x12d0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12d1: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12d2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12d3: Pop(1); Push(Sqrt(Stack[-1]))
0x12d4: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x12d5: Return(); Pop(0)

0x12d6: PushEmpty()
0x12d7: Push(CvectorIndex(Stack[-2], 0))
0x12d8: Push(CvectorIndex(Stack[-2], 0))
0x12d9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12da: Push(CvectorIndex(Stack[-3], 2))
0x12db: Push(CvectorIndex(Stack[-3], 2))
0x12dc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12dd: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12de: Return(); Pop(0)

0x12df: PushEmpty()
0x12e0: Push(CvectorIndex(Stack[-1], 0))
0x12e1: Push(CvectorIndex(Stack[-2], 0))
0x12e2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12e3: Push(CvectorIndex(Stack[-2], 2))
0x12e4: Push(CvectorIndex(Stack[-3], 2))
0x12e5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12e6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12e7: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x12e8: Return(); Pop(0)

0x12e9: PushEmpty()
0x12ea: PushEmpty(float, cvector, cvector)
0x12eb: Stack[-5] = Stack[-2]
0x12ec: Stack[-4] = Stack[-1]
0x12ed: Call2 0x12d6

0x12ee: Pop(2)
0x12ef: PushEmpty(float, cvector)
0x12f0: Stack[-5] = Stack[-1]
0x12f1: Call2 0x12df

0x12f2: Pop(1)
0x12f3: PushEmpty(float, cvector)
0x12f4: Stack[-5] = Stack[-1]
0x12f5: Call2 0x12df

0x12f6: Pop(1)
0x12f7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12f8: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x12f9: Return(); Pop(0)

0x12fa: PushEmpty(int, int)
0x12fb: @ GetVariable(Stack[-3], Stack[-1])
0x12fc: Pop(0)
0x12fd: Stack[-1] = Stack[-4]
0x12fe: Return(); Pop(2)

0x12ff: PushEmpty(float, float)
0x1300: @ GetGameTime(Stack[-1])
0x1301: Pop(0)
0x1302: Push((int) 1)
0x1303: PushEmpty(int)
0x1304: Push((int) 24)
0x1305: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1306: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1307: Return(); Pop(2)

0x1308: PushEmpty(float, float)
0x1309: @ GetGameTime(Stack[-1])
0x130a: Pop(0)
0x130b: PushEmpty(int)
0x130c: Stack[-2] = Stack[-1]
0x130d: Push((int) 24)
0x130e: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x130f: Return(); Pop(2)

0x1310: PushEmpty()
0x1311: Return(); Pop(0)

0x1312: PushEmpty()
0x1313: Return(); Pop(0)

0x1314: PushEmpty()
0x1315: Return(); Pop(0)

0x1316: PushEmpty()
0x1317: Return(); Pop(0)

0x1318: PushEmpty()
0x1319: Push("unholster") // @poff=406
0x131a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x131b: IF (Stack[-1] == 0) GOTO 0x1323; Pop(1)

0x131c: PushEmpty(bool, object)
0x131d: Stack[-4] = Stack[-1]
0x131e: Call2 0x143b

0x131f: Stack[-2] = Stack[-5]
0x1320: Pop(2)
0x1321: Return(); Pop(0)

0x1322: GOTO 0x1336

0x1323: Push("player_shot") // @poff=426
0x1324: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1325: IF (Stack[-1] == 0) GOTO 0x132d; Pop(1)

0x1326: PushEmpty(bool, object)
0x1327: Stack[-4] = Stack[-1]
0x1328: Call2 0x1448

0x1329: Stack[-2] = Stack[-5]
0x132a: Pop(2)
0x132b: Return(); Pop(0)

0x132c: GOTO 0x1336

0x132d: Push("battle") // @poff=450
0x132e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x132f: IF (Stack[-1] == 0) GOTO 0x1336; Pop(1)

0x1330: PushEmpty(bool, object)
0x1331: Stack[-4] = Stack[-1]
0x1332: Call2 0x145f

0x1333: Stack[-2] = Stack[-5]
0x1334: Pop(2)
0x1335: Return(); Pop(0)

0x1336: Stack[-3] = (bool) 0
0x1337: Return(); Pop(0)

0x1338: PushEmpty()
0x1339: Push("unholster") // @poff=406
0x133a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x133b: IF (Stack[-1] == 0) GOTO 0x1341; Pop(1)

0x133c: PushEmpty(object)
0x133d: Stack[-3] = Stack[-1]
0x133e: Call2 0x1440

0x133f: Pop(1)
0x1340: GOTO 0x1350

0x1341: Push("player_shot") // @poff=426
0x1342: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1343: IF (Stack[-1] == 0) GOTO 0x1349; Pop(1)

0x1344: PushEmpty(object)
0x1345: Stack[-3] = Stack[-1]
0x1346: Call2 0x1457

0x1347: Pop(1)
0x1348: GOTO 0x1350

0x1349: Push("battle") // @poff=450
0x134a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x134b: IF (Stack[-1] == 0) GOTO 0x1350; Pop(1)

0x134c: PushEmpty(object)
0x134d: Stack[-3] = Stack[-1]
0x134e: Call2 0x1466

0x134f: Pop(1)
0x1350: Return(); Pop(0)

0x1351: PushEmpty(bool, bool)
0x1352: PushEmpty(bool)
0x1353: Stack[-1] = (bool) 0
0x1354: PushEmpty(bool, object)
0x1355: Stack[-6] = Stack[-1]
0x1356: Call2 0x143b

0x1357: Pop(1)
0x1358: IF (Stack[-1] == 0) GOTO 0x135f; Pop(1)

0x1359: PushEmpty(bool, object)
0x135a: Stack[-6] = Stack[-1]
0x135b: Call2 0x118e

0x135c: Pop(1)
0x135d: IF (Stack[-1] == 0) GOTO 0x135f; Pop(1)

0x135e: Stack[-1] = (bool) 1
0x135f: IF (Stack[-1] == 0) GOTO 0x1366; Pop(1)

0x1360: @@ IsWeaponHolstered(Stack[-1]); Obj=3 // @poff=464
0x1361: Pop(0)
0x1362: Pop(0); Push((bool) Stack[-1] == 0)
0x1363: IF (Stack[-1] == 0) GOTO 0x1366; Pop(1)

0x1364: Stack[-4] = (bool) 1
0x1365: Return(); Pop(2)

0x1366: Stack[-4] = (bool) 0
0x1367: Return(); Pop(2)

0x1368: PushEmpty()
0x1369: PushEmpty(object)
0x136a: Stack[-2] = Stack[-1]
0x136b: Call2 0x1440

0x136c: Pop(1)
0x136d: Return(); Pop(0)

0x136e: PushEmpty()
0x136f: PushEmpty(bool, object)
0x1370: Stack[-3] = Stack[-1]
0x1371: Call2 0x118e

0x1372: Pop(1)
0x1373: IF (Stack[-1] == 0) GOTO 0x137a; Pop(1)

0x1374: PushEmpty(object)
0x1375: Call2 0x12b9

0x1376: Pop(0)
0x1377: Push((float)-0.05000000074505806)
0x1378: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1379: Pop(2)
0x137a: Return(); Pop(0)

0x137b: PushEmpty(object, object)
0x137c: Push("heal") // @poff=482
0x137d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x137e: IF (Stack[-1] == 0) GOTO 0x1389; Pop(1)

0x137f: Push("player") // @poff=492
0x1380: @ FindActor(Stack[-2], Stack[-1])
0x1381: Pop(1)
0x1382: PushEmpty(bool, object)
0x1383: Stack[-3] = Stack[-1]
0x1384: Call2 0x146c

0x1385: Stack[-2] = Stack[-6]
0x1386: Pop(2)
0x1387: Return(); Pop(2)

0x1388: Stack[-1] = 0
0x1389: Stack[-4] = (bool) 0
0x138a: Return(); Pop(2)

0x138b: PushEmpty(object, object)
0x138c: Push("heal") // @poff=482
0x138d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x138e: IF (Stack[-1] == 0) GOTO 0x1397; Pop(1)

0x138f: Push("player") // @poff=492
0x1390: @ FindActor(Stack[-2], Stack[-1])
0x1391: Pop(1)
0x1392: PushEmpty(object)
0x1393: Stack[-2] = Stack[-1]
0x1394: Call2 0x146f

0x1395: Pop(1)
0x1396: Stack[-1] = 0
0x1397: Return(); Pop(2)

0x1398: PushEmpty(string, string)
0x1399: Stack[-1] = "idle" // @poff=24
0x139a: Push(Stack[-3])
0x139b: IF (Stack[-1] == 0) GOTO 0x139d; Pop(1)

0x139c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x139d: Stack[-1] = Stack[-4]
0x139e: Return(); Pop(2)

0x139f: PushEmpty(int, bool, int, bool)
0x13a0: Stack[-2] = (int) 0
0x13a1: Push("all") // @poff=16
0x13a2: PushEmpty(string, int)
0x13a3: Stack[-5] = Stack[-1]
0x13a4: Call2 0x1398

0x13a5: Pop(1)
0x13a6: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x13a7: Pop(2)
0x13a8: Pop(0); Push((bool) Stack[-1] == 0)
0x13a9: IF (Stack[-1] == 0) GOTO 0x13ab; Pop(1)

0x13aa: GOTO 0x13ae

0x13ab: Push((int) 1)
0x13ac: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13ad: GOTO 0x13a1

0x13ae: Stack[-2] = Stack[-5]
0x13af: Return(); Pop(4)

0x13b0: PushEmpty()
0x13b1: PushEmpty(bool)
0x13b2: Call2 0x1652

0x13b3: Pop(0)
0x13b4: IF (Stack[-1] == 0) GOTO 0x13b7; Pop(1)

0x13b5: Stack[-2] = (int) 2
0x13b6: GOTO 0x13b8

0x13b7: Stack[-2] = (int) 0
0x13b8: Return(); Pop(0)

0x13b9: PushEmpty()
0x13ba: PushEmpty(object)
0x13bb: Stack[-2] = Stack[-1]
0x13bc: Push(-1, 1); TaskCall(3)
0x13bd: Call2 0x293

0x13be: Pop(-1, 1); TaskReturn
0x13bf: Pop(1)
0x13c0: Return(); Pop(0)

0x13c1: PushEmpty()
0x13c2: PushEmpty(bool, object)
0x13c3: Stack[-3] = Stack[-1]
0x13c4: Call2 0x11c8

0x13c5: Pop(1)
0x13c6: IF (Stack[-1] == 0) GOTO 0x13c9; Pop(1)

0x13c7: Stack[-2] = (int) 2
0x13c8: GOTO 0x13ca

0x13c9: Stack[-2] = (int) 0
0x13ca: Return(); Pop(0)

0x13cb: PushEmpty()
0x13cc: PushEmpty(object)
0x13cd: Stack[-2] = Stack[-1]
0x13ce: Push(-1, 3); TaskCall(4)
0x13cf: Call2 0x3a6

0x13d0: Pop(-1, 3); TaskReturn
0x13d1: Pop(1)
0x13d2: Return(); Pop(0)

0x13d3: PushEmpty()
0x13d4: PushEmpty(bool, object)
0x13d5: Stack[-4] = Stack[-1]
0x13d6: Call2 0x11c8

0x13d7: Pop(1)
0x13d8: IF (Stack[-1] == 0) GOTO 0x13db; Pop(1)

0x13d9: Stack[-3] = (int) 2
0x13da: GOTO 0x13dc

0x13db: Stack[-3] = (int) 0
0x13dc: Return(); Pop(0)

0x13dd: PushEmpty()
0x13de: PushEmpty(object)
0x13df: Stack[-2] = Stack[-1]
0x13e0: Push(-1, 3); TaskCall(5)
0x13e1: Call2 0x4a2

0x13e2: Pop(-1, 3); TaskReturn
0x13e3: Pop(1)
0x13e4: Return(); Pop(0)

0x13e5: PushEmpty(string, bool, string, bool)
0x13e6: PushEmpty(bool, object, string)
0x13e7: Stack[-9] = Stack[-2]
0x13e8: Stack[-1] = "class" // @poff=506
0x13e9: Call2 0x1193

0x13ea: Pop(2)
0x13eb: Pop(1); Push((bool) Stack[-1] == 0)
0x13ec: IF (Stack[-1] == 0) GOTO 0x13ef; Pop(1)

0x13ed: Stack[-8] = (bool) 0
0x13ee: Return(); Pop(4)

0x13ef: Push("class") // @poff=506
0x13f0: @@ GetProperty(Stack[-1], Stack[-3]); Obj=7 // @poff=380
0x13f1: Pop(1)
0x13f2: Push("rat") // @poff=518
0x13f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13f4: IF (Stack[-1] == 0) GOTO 0x13f8; Pop(1)

0x13f5: Stack[-8] = (bool) 0
0x13f6: Return(); Pop(4)

0x13f7: GOTO 0x1403

0x13f8: Push("rat_big") // @poff=526
0x13f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13fa: IF (Stack[-1] == 0) GOTO 0x13fe; Pop(1)

0x13fb: Stack[-8] = (bool) 0
0x13fc: Return(); Pop(4)

0x13fd: GOTO 0x1403

0x13fe: Push("dog") // @poff=542
0x13ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1400: IF (Stack[-1] == 0) GOTO 0x1403; Pop(1)

0x1401: Stack[-8] = (bool) 0
0x1402: Return(); Pop(4)

0x1403: @ CanSee(Stack[-1], Stack[-7])
0x1404: Pop(0)
0x1405: PushEmpty(bool)
0x1406: Stack[-1] = (bool) 1
0x1407: Push(Stack[-2])
0x1408: IF (Stack[-1] == 1) GOTO 0x1411; Pop(1)

0x1409: PushEmpty(float, object)
0x140a: Stack[-10] = Stack[-1]
0x140b: Call2 0x1186

0x140c: Pop(1)
0x140d: Pop(0); Push(Stack[-7] * Stack[-7]);
0x140e: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x140f: IF (Stack[-1] == 1) GOTO 0x1411; Pop(1)

0x1410: Stack[-1] = (bool) 0
0x1411: IF (Stack[-1] == 0) GOTO 0x1414; Pop(1)

0x1412: Stack[-8] = (bool) 1
0x1413: Return(); Pop(4)

0x1414: @ CanSee(Stack[-1], Stack[-6])
0x1415: Pop(0)
0x1416: PushEmpty(bool)
0x1417: Stack[-1] = (bool) 1
0x1418: Push(Stack[-2])
0x1419: IF (Stack[-1] == 1) GOTO 0x1422; Pop(1)

0x141a: PushEmpty(float, object)
0x141b: Stack[-9] = Stack[-1]
0x141c: Call2 0x1186

0x141d: Pop(1)
0x141e: Pop(0); Push(Stack[-7] * Stack[-7]);
0x141f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1420: IF (Stack[-1] == 1) GOTO 0x1422; Pop(1)

0x1421: Stack[-1] = (bool) 0
0x1422: IF (Stack[-1] == 0) GOTO 0x1425; Pop(1)

0x1423: Stack[-8] = (bool) 1
0x1424: Return(); Pop(4)

0x1425: Stack[-8] = (bool) 0
0x1426: Return(); Pop(4)

0x1427: PushEmpty()
0x1428: Stack[-2] = (int) 0
0x1429: Return(); Pop(0)

0x142a: PushEmpty()
0x142b: Return(); Pop(0)

0x142c: PushEmpty()
0x142d: Stack[-3] = (int) 0
0x142e: Return(); Pop(0)

0x142f: PushEmpty()
0x1430: Return(); Pop(0)

0x1431: PushEmpty()
0x1432: Stack[-2] = (int) 2
0x1433: Return(); Pop(0)

0x1434: PushEmpty()
0x1435: PushEmpty(object)
0x1436: Stack[-2] = Stack[-1]
0x1437: Call2 0x162a

0x1438: Pop(1)
0x1439: Return(); Pop(0)

0x143a: Return(); Pop(0)

0x143b: PushEmpty(bool, bool)
0x143c: @ CanSee(Stack[-1], Stack[-3])
0x143d: Pop(0)
0x143e: Stack[-1] = Stack[-4]
0x143f: Return(); Pop(2)

0x1440: PushEmpty()
0x1441: PushEmpty(object)
0x1442: Stack[-2] = Stack[-1]
0x1443: Push(-1, 3); TaskCall(6)
0x1444: Call2 0x564

0x1445: Pop(-1, 3); TaskReturn
0x1446: Pop(1)
0x1447: Return(); Pop(0)

0x1448: PushEmpty(bool, bool)
0x1449: @ CanSee(Stack[-1], Stack[-3])
0x144a: Pop(0)
0x144b: Stack[-4] = (bool) 1
0x144c: Push(Stack[-1])
0x144d: IF (Stack[-1] == 1) GOTO 0x1456; Pop(1)

0x144e: PushEmpty(float, object)
0x144f: Stack[-5] = Stack[-1]
0x1450: Call2 0x1186

0x1451: Pop(1)
0x1452: Push((int) 4000000)
0x1453: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1454: IF (Stack[-1] == 1) GOTO 0x1456; Pop(1)

0x1455: Stack[-4] = (bool) 0
0x1456: Return(); Pop(2)

0x1457: PushEmpty()
0x1458: PushEmpty(object)
0x1459: Stack[-2] = Stack[-1]
0x145a: Push(-1, 3); TaskCall(7)
0x145b: Call2 0x626

0x145c: Pop(-1, 3); TaskReturn
0x145d: Pop(1)
0x145e: Return(); Pop(0)

0x145f: PushEmpty()
0x1460: PushEmpty(bool, object)
0x1461: Stack[-3] = Stack[-1]
0x1462: Call2 0x1448

0x1463: Stack[-2] = Stack[-4]
0x1464: Pop(2)
0x1465: Return(); Pop(0)

0x1466: PushEmpty()
0x1467: PushEmpty(object)
0x1468: Stack[-2] = Stack[-1]
0x1469: Call2 0x1457

0x146a: Pop(1)
0x146b: Return(); Pop(0)

0x146c: PushEmpty()
0x146d: Stack[-2] = (bool) 0
0x146e: Return(); Pop(0)

0x146f: PushEmpty()
0x1470: Return(); Pop(0)

0x1471: PushEmpty()
0x1472: Push((int) 1000)
0x1473: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=550
0x1474: Pop(1)
0x1475: Return(); Pop(0)

0x1476: PushEmpty()
0x1477: PushEmpty(int, string)
0x1478: Stack[-1] = "branch" // @poff=565
0x1479: Call2 0x12fa

0x147a: Pop(1)
0x147b: Push((int) 0)
0x147c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x147d: IF (Stack[-1] == 0) GOTO 0x1480; Pop(1)

0x147e: Stack[-2] = (bool) 1
0x147f: Return(); Pop(0)

0x1480: Stack[-2] = (bool) 0
0x1481: Return(); Pop(0)

0x1482: PushEmpty()
0x1483: PushEmpty(bool, object)
0x1484: Stack[-3] = Stack[-1]
0x1485: Call2 0x150e

0x1486: Pop(1)
0x1487: IF (Stack[-1] == 0) GOTO 0x148a; Pop(1)

0x1488: Stack[-2] = (bool) 1
0x1489: Return(); Pop(0)

0x148a: Stack[-2] = (bool) 0
0x148b: Return(); Pop(0)

0x148c: PushEmpty()
0x148d: PushEmpty(bool, object)
0x148e: Stack[-3] = Stack[-1]
0x148f: Call2 0x1515

0x1490: Pop(1)
0x1491: IF (Stack[-1] == 0) GOTO 0x1494; Pop(1)

0x1492: Stack[-2] = (bool) 1
0x1493: Return(); Pop(0)

0x1494: Stack[-2] = (bool) 0
0x1495: Return(); Pop(0)

0x1496: PushEmpty()
0x1497: PushEmpty(bool, object)
0x1498: Stack[-3] = Stack[-1]
0x1499: Call2 0x151c

0x149a: Pop(1)
0x149b: IF (Stack[-1] == 0) GOTO 0x149e; Pop(1)

0x149c: Stack[-2] = (bool) 1
0x149d: Return(); Pop(0)

0x149e: Stack[-2] = (bool) 0
0x149f: Return(); Pop(0)

0x14a0: PushEmpty()
0x14a1: PushEmpty(bool, object)
0x14a2: Stack[-3] = Stack[-1]
0x14a3: Call2 0x1523

0x14a4: Pop(1)
0x14a5: IF (Stack[-1] == 0) GOTO 0x14a8; Pop(1)

0x14a6: Stack[-2] = (bool) 1
0x14a7: Return(); Pop(0)

0x14a8: Stack[-2] = (bool) 0
0x14a9: Return(); Pop(0)

0x14aa: PushEmpty()
0x14ab: PushEmpty(bool, object)
0x14ac: Stack[-3] = Stack[-1]
0x14ad: Call2 0x152a

0x14ae: Pop(1)
0x14af: IF (Stack[-1] == 0) GOTO 0x14b2; Pop(1)

0x14b0: Stack[-2] = (bool) 1
0x14b1: Return(); Pop(0)

0x14b2: Stack[-2] = (bool) 0
0x14b3: Return(); Pop(0)

0x14b4: PushEmpty()
0x14b5: PushEmpty(bool, object)
0x14b6: Stack[-3] = Stack[-1]
0x14b7: Call2 0x1531

0x14b8: Pop(1)
0x14b9: IF (Stack[-1] == 0) GOTO 0x14bc; Pop(1)

0x14ba: Stack[-2] = (bool) 1
0x14bb: Return(); Pop(0)

0x14bc: Stack[-2] = (bool) 0
0x14bd: Return(); Pop(0)

0x14be: PushEmpty()
0x14bf: PushEmpty(bool, object)
0x14c0: Stack[-3] = Stack[-1]
0x14c1: Call2 0x1538

0x14c2: Pop(1)
0x14c3: IF (Stack[-1] == 0) GOTO 0x14c6; Pop(1)

0x14c4: Stack[-2] = (bool) 1
0x14c5: Return(); Pop(0)

0x14c6: Stack[-2] = (bool) 0
0x14c7: Return(); Pop(0)

0x14c8: PushEmpty()
0x14c9: PushEmpty(bool, object)
0x14ca: Stack[-3] = Stack[-1]
0x14cb: Call2 0x153f

0x14cc: Pop(1)
0x14cd: IF (Stack[-1] == 0) GOTO 0x14d0; Pop(1)

0x14ce: Stack[-2] = (bool) 1
0x14cf: Return(); Pop(0)

0x14d0: Stack[-2] = (bool) 0
0x14d1: Return(); Pop(0)

0x14d2: PushEmpty()
0x14d3: PushEmpty(bool, object)
0x14d4: Stack[-3] = Stack[-1]
0x14d5: Call2 0x1546

0x14d6: Pop(1)
0x14d7: IF (Stack[-1] == 0) GOTO 0x14da; Pop(1)

0x14d8: Stack[-2] = (bool) 1
0x14d9: Return(); Pop(0)

0x14da: Stack[-2] = (bool) 0
0x14db: Return(); Pop(0)

0x14dc: PushEmpty()
0x14dd: PushEmpty(bool, object)
0x14de: Stack[-3] = Stack[-1]
0x14df: Call2 0x154d

0x14e0: Pop(1)
0x14e1: IF (Stack[-1] == 0) GOTO 0x14e4; Pop(1)

0x14e2: Stack[-2] = (bool) 1
0x14e3: Return(); Pop(0)

0x14e4: Stack[-2] = (bool) 0
0x14e5: Return(); Pop(0)

0x14e6: PushEmpty()
0x14e7: PushEmpty(bool, object)
0x14e8: Stack[-3] = Stack[-1]
0x14e9: Call2 0x1554

0x14ea: Pop(1)
0x14eb: IF (Stack[-1] == 0) GOTO 0x14ee; Pop(1)

0x14ec: Stack[-2] = (bool) 1
0x14ed: Return(); Pop(0)

0x14ee: Stack[-2] = (bool) 0
0x14ef: Return(); Pop(0)

0x14f0: PushEmpty()
0x14f1: PushEmpty(bool, object)
0x14f2: Stack[-3] = Stack[-1]
0x14f3: Call2 0x155b

0x14f4: Pop(1)
0x14f5: IF (Stack[-1] == 0) GOTO 0x14f8; Pop(1)

0x14f6: Stack[-2] = (bool) 1
0x14f7: Return(); Pop(0)

0x14f8: Stack[-2] = (bool) 0
0x14f9: Return(); Pop(0)

0x14fa: PushEmpty()
0x14fb: PushEmpty(bool, object)
0x14fc: Stack[-3] = Stack[-1]
0x14fd: Call2 0x1562

0x14fe: Pop(1)
0x14ff: IF (Stack[-1] == 0) GOTO 0x1502; Pop(1)

0x1500: Stack[-2] = (bool) 1
0x1501: Return(); Pop(0)

0x1502: Stack[-2] = (bool) 0
0x1503: Return(); Pop(0)

0x1504: PushEmpty()
0x1505: PushEmpty(bool, object)
0x1506: Stack[-3] = Stack[-1]
0x1507: Call2 0x1577

0x1508: Pop(1)
0x1509: IF (Stack[-1] == 0) GOTO 0x150c; Pop(1)

0x150a: Stack[-2] = (bool) 1
0x150b: Return(); Pop(0)

0x150c: Stack[-2] = (bool) 0
0x150d: Return(); Pop(0)

0x150e: PushEmpty()
0x150f: PushEmpty(int)
0x1510: Call2 0x12ff

0x1511: Pop(0)
0x1512: Push((int) 1)
0x1513: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1514: Return(); Pop(0)

0x1515: PushEmpty()
0x1516: PushEmpty(int)
0x1517: Call2 0x12ff

0x1518: Pop(0)
0x1519: Push((int) 2)
0x151a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x151b: Return(); Pop(0)

0x151c: PushEmpty()
0x151d: PushEmpty(int)
0x151e: Call2 0x12ff

0x151f: Pop(0)
0x1520: Push((int) 3)
0x1521: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1522: Return(); Pop(0)

0x1523: PushEmpty()
0x1524: PushEmpty(int)
0x1525: Call2 0x12ff

0x1526: Pop(0)
0x1527: Push((int) 4)
0x1528: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1529: Return(); Pop(0)

0x152a: PushEmpty()
0x152b: PushEmpty(int)
0x152c: Call2 0x12ff

0x152d: Pop(0)
0x152e: Push((int) 5)
0x152f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1530: Return(); Pop(0)

0x1531: PushEmpty()
0x1532: PushEmpty(int)
0x1533: Call2 0x12ff

0x1534: Pop(0)
0x1535: Push((int) 6)
0x1536: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1537: Return(); Pop(0)

0x1538: PushEmpty()
0x1539: PushEmpty(int)
0x153a: Call2 0x12ff

0x153b: Pop(0)
0x153c: Push((int) 7)
0x153d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x153e: Return(); Pop(0)

0x153f: PushEmpty()
0x1540: PushEmpty(int)
0x1541: Call2 0x12ff

0x1542: Pop(0)
0x1543: Push((int) 8)
0x1544: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1545: Return(); Pop(0)

0x1546: PushEmpty()
0x1547: PushEmpty(int)
0x1548: Call2 0x12ff

0x1549: Pop(0)
0x154a: Push((int) 9)
0x154b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x154c: Return(); Pop(0)

0x154d: PushEmpty()
0x154e: PushEmpty(int)
0x154f: Call2 0x12ff

0x1550: Pop(0)
0x1551: Push((int) 10)
0x1552: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1553: Return(); Pop(0)

0x1554: PushEmpty()
0x1555: PushEmpty(int)
0x1556: Call2 0x12ff

0x1557: Pop(0)
0x1558: Push((int) 11)
0x1559: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x155a: Return(); Pop(0)

0x155b: PushEmpty()
0x155c: PushEmpty(int)
0x155d: Call2 0x12ff

0x155e: Pop(0)
0x155f: Push((int) 12)
0x1560: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1561: Return(); Pop(0)

0x1562: PushEmpty()
0x1563: PushEmpty(bool)
0x1564: Stack[-1] = (bool) 0
0x1565: PushEmpty(int)
0x1566: Call2 0x1308

0x1567: Pop(0)
0x1568: Push((int) 0)
0x1569: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x156a: IF (Stack[-1] == 0) GOTO 0x1572; Pop(1)

0x156b: PushEmpty(int)
0x156c: Call2 0x1308

0x156d: Pop(0)
0x156e: Push((int) 12)
0x156f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1570: IF (Stack[-1] == 0) GOTO 0x1572; Pop(1)

0x1571: Stack[-1] = (bool) 1
0x1572: IF (Stack[-1] == 0) GOTO 0x1575; Pop(1)

0x1573: Stack[-2] = (bool) 1
0x1574: Return(); Pop(0)

0x1575: Stack[-2] = (bool) 0
0x1576: Return(); Pop(0)

0x1577: PushEmpty()
0x1578: PushEmpty(int)
0x1579: Call2 0x1308

0x157a: Pop(0)
0x157b: Push((int) 12)
0x157c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x157d: IF (Stack[-1] == 0) GOTO 0x1580; Pop(1)

0x157e: Stack[-2] = (bool) 1
0x157f: Return(); Pop(0)

0x1580: Stack[-2] = (bool) 0
0x1581: Return(); Pop(0)

0x1582: PushEmpty(int, int)
0x1583: Push("branch") // @poff=565
0x1584: @ GetVariable(Stack[-1], Stack[-2])
0x1585: Pop(1)
0x1586: Push((int) 0)
0x1587: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1588: IF (Stack[-1] == 0) GOTO 0x158c; Pop(1)

0x1589: Stack[-3] = (int) 1
0x158a: Return(); Pop(2)

0x158b: GOTO 0x1591

0x158c: Push((int) 1)
0x158d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x158e: IF (Stack[-1] == 0) GOTO 0x1591; Pop(1)

0x158f: Stack[-3] = (int) 2
0x1590: Return(); Pop(2)

0x1591: Stack[-3] = (int) 3
0x1592: Return(); Pop(2)

0x1593: PushEmpty(int, int)
0x1594: Push("branch") // @poff=565
0x1595: @ GetVariable(Stack[-1], Stack[-2])
0x1596: Pop(1)
0x1597: Stack[-1] = Stack[-3]
0x1598: Return(); Pop(2)

0x1599: PushEmpty(object, float, object, float)
0x159a: Push("player") // @poff=492
0x159b: @ FindActor(Stack[-3], Stack[-1])
0x159c: Pop(1)
0x159d: Pop(0); Push((bool) Stack[-2] == 0)
0x159e: IF (Stack[-1] == 0) GOTO 0x15a1; Pop(1)

0x159f: Stack[-5] = (int) 0
0x15a0: Return(); Pop(4)

0x15a1: Push("reputation") // @poff=579
0x15a2: @@ GetProperty(Stack[-1], Stack[-2]); Obj=3 // @poff=380
0x15a3: Pop(1)
0x15a4: Stack[-1] = Stack[-5]
0x15a5: Return(); Pop(4)

0x15a6: Stack[-2] = 0
0x15a7: PushEmpty()
0x15a8: PushEmpty(int)
0x15a9: Call2 0x1593

0x15aa: Pop(0)
0x15ab: Push((int) 1)
0x15ac: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15ad: IF (Stack[-1] == 0) GOTO 0x15b1; Pop(1)

0x15ae: @ WorkWithCorpse(Stack[-1])
0x15af: Pop(0)
0x15b0: GOTO 0x15b3

0x15b1: @ Barter(Stack[-1])
0x15b2: Pop(0)
0x15b3: Return(); Pop(0)

0x15b4: PushEmpty(int, bool, int, int, bool, int)
0x15b5: Push((int) 0)
0x15b6: @ ClearSubContainer(Stack[-1])
0x15b7: Pop(1)
0x15b8: PushEmpty(int)
0x15b9: Call2 0x12ff

0x15ba: Stack[-1] = Stack[-2]
0x15bb: Pop(1)
0x15bc: Push(Stack[-7])
0x15bd: IF (Stack[-1] == 0) GOTO 0x15ea; Pop(1)

0x15be: PushEmpty(string, int, int, int)
0x15bf: Stack[-4] = "alpha_pills" // @poff=601
0x15c0: Stack[-3] = (int) 1
0x15c1: Stack[-2] = (int) 2
0x15c2: Stack[-1] = (int) 4
0x15c3: Call2 0x12aa

0x15c4: Pop(4)
0x15c5: PushEmpty(string, int, int, int)
0x15c6: Stack[-4] = "meradorm" // @poff=625
0x15c7: Stack[-3] = (int) 2
0x15c8: Stack[-2] = (int) 3
0x15c9: Stack[-1] = (int) 3
0x15ca: Call2 0x12aa

0x15cb: Pop(4)
0x15cc: Push((int) 3)
0x15cd: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x15ce: IF (Stack[-1] == 0) GOTO 0x15d5; Pop(1)

0x15cf: PushEmpty(string, int, int)
0x15d0: Stack[-3] = "beta_pills" // @poff=643
0x15d1: Stack[-2] = (int) 1
0x15d2: Stack[-1] = (int) 4
0x15d3: Call2 0x129f

0x15d4: Pop(3)
0x15d5: Push((int) 8)
0x15d6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x15d7: IF (Stack[-1] == 0) GOTO 0x15e0; Pop(1)

0x15d8: PushEmpty(string, int, int, int)
0x15d9: Stack[-4] = "monomicin" // @poff=665
0x15da: Stack[-3] = (int) 1
0x15db: Stack[-2] = (int) 2
0x15dc: Stack[-1] = (int) 2
0x15dd: Call2 0x12aa

0x15de: Pop(4)
0x15df: GOTO 0x15e9

0x15e0: Push((int) 4)
0x15e1: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x15e2: IF (Stack[-1] == 0) GOTO 0x15e9; Pop(1)

0x15e3: PushEmpty(string, int, int)
0x15e4: Stack[-3] = "monomicin" // @poff=665
0x15e5: Stack[-2] = (int) 1
0x15e6: Stack[-1] = (int) 2
0x15e7: Call2 0x129f

0x15e8: Pop(3)
0x15e9: GOTO 0x1617

0x15ea: PushEmpty(string, int, int)
0x15eb: Stack[-3] = "lockpick" // @poff=685
0x15ec: Stack[-2] = (int) 1
0x15ed: Stack[-1] = (int) 4
0x15ee: Call2 0x129f

0x15ef: Pop(3)
0x15f0: PushEmpty(string, int, int)
0x15f1: Stack[-3] = "rifle_ammo" // @poff=703
0x15f2: Stack[-2] = (int) 1
0x15f3: Stack[-1] = (int) 2
0x15f4: Call2 0x129f

0x15f5: Pop(3)
0x15f6: PushEmpty(string, int, int)
0x15f7: Stack[-3] = "revolver_ammo" // @poff=725
0x15f8: Stack[-2] = (int) 1
0x15f9: Stack[-1] = (int) 2
0x15fa: Call2 0x129f

0x15fb: Pop(3)
0x15fc: PushEmpty(string, int, int, int)
0x15fd: Stack[-4] = "samopal_ammo" // @poff=753
0x15fe: Stack[-3] = (int) 1
0x15ff: Stack[-2] = (int) 2
0x1600: Stack[-1] = (int) 2
0x1601: Call2 0x12aa

0x1602: Pop(4)
0x1603: Push((int) 8)
0x1604: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1605: IF (Stack[-1] == 0) GOTO 0x160e; Pop(1)

0x1606: PushEmpty(string, int, int, int)
0x1607: Stack[-4] = "monomicin" // @poff=665
0x1608: Stack[-3] = (int) 1
0x1609: Stack[-2] = (int) 2
0x160a: Stack[-1] = (int) 2
0x160b: Call2 0x12aa

0x160c: Pop(4)
0x160d: GOTO 0x1617

0x160e: Push((int) 4)
0x160f: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1610: IF (Stack[-1] == 0) GOTO 0x1617; Pop(1)

0x1611: PushEmpty(string, int, int)
0x1612: Stack[-3] = "monomicin" // @poff=665
0x1613: Stack[-2] = (int) 1
0x1614: Stack[-1] = (int) 2
0x1615: Call2 0x129f

0x1616: Pop(3)
0x1617: Return(); Pop(6)

0x1618: Stack[-1] = (int) 515559
0x1619: Return(); Pop(0)

0x161a: Stack[-1] = (int) 503344
0x161b: Return(); Pop(0)

0x161c: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=779
0x161d: Return(); Pop(0)

0x161e: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=819
0x161f: Return(); Pop(0)

0x1620: Stack[-1] = (bool) 0
0x1621: Return(); Pop(0)

0x1622: Push(GlobalVars[0])
0x1623: Stack[-1] = (bool) 0
0x1624: GlobalVars[0] = Stack[-1]; Pop(1)
0x1625: PushEmpty(bool)
0x1626: Stack[-1] = (bool) 0
0x1627: Call2 0x15b4

0x1628: Pop(1)
0x1629: Return(); Pop(0)

0x162a: PushEmpty(bool, bool)
0x162b: Push(GlobalVars[0])
0x162c: IF (Stack[-1] == 0) GOTO 0x1637; Pop(1)

0x162d: @ IsOverrideActive(Stack[-1])
0x162e: Pop(0)
0x162f: Pop(0); Push((bool) Stack[-1] == 0)
0x1630: IF (Stack[-1] == 0) GOTO 0x1635; Pop(1)

0x1631: PushEmpty(object)
0x1632: Stack[-4] = Stack[-1]
0x1633: Call2 0x15a7

0x1634: Pop(1)
0x1635: Return(); Pop(2)

0x1636: GOTO 0x1651

0x1637: Push((int) 1000)
0x1638: PushEmpty(int, object)
0x1639: Stack[-6] = Stack[-1]
0x163a: Push(-2, 1); TaskCall(8)
0x163b: Call2 0x6c3

0x163c: Pop(-2, 1); TaskReturn
0x163d: Pop(1)
0x163e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x163f: IF (Stack[-1] == 0) GOTO 0x1651; Pop(1)

0x1640: PushEmpty(bool, object)
0x1641: Stack[-5] = Stack[-1]
0x1642: Call2 0x1245

0x1643: Pop(1)
0x1644: Pop(1); Push((bool) Stack[-1] == 0)
0x1645: IF (Stack[-1] == 0) GOTO 0x1647; Pop(1)

0x1646: Return(); Pop(2)

0x1647: PushEmpty(object)
0x1648: Stack[-4] = Stack[-1]
0x1649: Push(-1, 1); TaskCall(0)
0x164a: Call2 0x0

0x164b: Pop(-1, 1); TaskReturn
0x164c: Pop(1)
0x164d: PushEmpty(object)
0x164e: Stack[-4] = Stack[-1]
0x164f: Call2 0x127c

0x1650: Pop(1)
0x1651: Return(); Pop(2)

0x1652: PushEmpty(float)
0x1653: Call2 0x1599

0x1654: Pop(0)
0x1655: Push((float)0.6000000238418579)
0x1656: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x1657: Return(); Pop(0)

0x1658: PushEmpty()
0x1659: PushEmpty(bool, object, object, float)
0x165a: Stack[-7] = Stack[-3]
0x165b: Stack[-6] = Stack[-2]
0x165c: Stack[-1] = (float) 700.0
0x165d: Call2 0x13e5

0x165e: Stack[-4] = Stack[-8]
0x165f: Pop(4)
0x1660: Return(); Pop(0)

