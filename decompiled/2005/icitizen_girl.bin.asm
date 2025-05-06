GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	Neutral
	all
	idle
	head
	attack_on
	attack_stay
	attack_off
	GetPosition
	Can't retreat, distance: 
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	GetEyesHeight
	Can't find lsh animation : 
	unholster
	player_shot
	battle
	IsWeaponHolstered
	heal
	player
	class
	rat
	rat_big
	dog
	Received steal
	SetReturnValue
	branch
	alpha_pills
	meradorm
	beta_pills
	monomicin
	lockpick
	rifle_ammo
	revolver_ammo
	samopal_ammo
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	ToDie

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
	lshHasAnimation (2 args)
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
	SetProperty (2 args)

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
		EVENT_11 Op = 0x8ac Vars = (int, int)

Events:
EVENT_16 Op = 0x12db Vars = (object, string)
EVENT_41 Op = 0x12dd Vars = (object)
EVENT_22 Op = 0x12df Vars = (object, int, float, float)
EVENT_43 Op = 0x12e1 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x15e5

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x1239

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all")
0x12: Push("idle")
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x15e5

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
0x2c: Call2 0x15e7

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
0x38: Call2 0x11a4

0x39: Pop(0)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x13fb

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: PushEmpty(int, object)
0x42: Stack[-1] = Stack[-5]
0x43: Call2 0x13f2

0x44: Stack[-3] = Stack[-2]
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
0x50: Stack[-1] = Stack[-4]
0x51: Call2 0x13f5

0x52: Pop(1)
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: PushEmpty(object)
0x56: Stack[-1] = Stack[-4]
0x57: Call2 0x1339

0x58: Pop(1)
0x59: PushEmpty(int, object)
0x5a: Stack[-1] = Stack[-5]
0x5b: Call2 0x138c

0x5c: Stack[-3] = Stack[-2]
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
0x68: Stack[-1] = Stack[-4]
0x69: Call2 0x1396

0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: PushEmpty(bool, object, object, bool)
0x6e: Stack[-3] = Stack[-9]
0x6f: Stack[-2] = Stack[-8]
0x70: Stack[-1] = Stack[-7]
0x71: Call2 0x1619

0x72: Pop(3)
0x73: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x74: PushEmpty(int, object, bool)
0x75: Stack[-2] = Stack[-8]
0x76: Stack[-1] = Stack[-6]
0x77: Call2 0x139e

0x78: Stack[-4] = Stack[-3]
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
0x84: Stack[-1] = Stack[-6]
0x85: Call2 0x13a8

0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int)
0x89: PushEmpty(int, object)
0x8a: Stack[-1] = Stack[-5]
0x8b: Call2 0x13fc

0x8c: Stack[-3] = Stack[-2]
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
0x98: Stack[-1] = Stack[-4]
0x99: Call2 0x140c

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-2] = Stack[-7]
0x9f: Stack[-1] = Stack[-6]
0xa0: Call2 0x12e3

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0xfb

0xa5: Pop(0)
0xa6: PushEmpty(object, string)
0xa7: Stack[-2] = Stack[-6]
0xa8: Stack[-1] = Stack[-5]
0xa9: Call2 0x1303

0xaa: Pop(2)
0xab: GOTO 0xc0

0xac: PushEmpty(int, string, object)
0xad: Stack[-2] = Stack[-6]
0xae: Stack[-1] = Stack[-7]
0xaf: Call2 0x1412

0xb0: Stack[-4] = Stack[-3]
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
0xbc: Stack[-2] = Stack[-5]
0xbd: Stack[-1] = Stack[-6]
0xbe: Call2 0x1415

0xbf: Pop(2)
0xc0: Return(); Pop(2)

0xc1: PushEmpty()
0xc2: PushEmpty(bool, string)
0xc3: Stack[-1] = Stack[-3]
0xc4: Call2 0x1346

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xfb

0xc9: Pop(0)
0xca: PushEmpty(string)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call2 0x1356

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[-3]
0xd2: Call2 0x131c

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xfb

0xd7: Pop(0)
0xd8: PushEmpty(object)
0xd9: Stack[-1] = Stack[-2]
0xda: Call2 0x1333

0xdb: Pop(1)
0xdc: GOTO 0xe1

0xdd: PushEmpty(object)
0xde: Stack[-1] = Stack[-2]
0xdf: Call2 0x114

0xe0: Pop(1)
0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: PushEmpty(object)
0xe4: Stack[-1] = Stack[-2]
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
0xf8: Call2 0x13fb

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
0x110: Stack[-1] = Stack[-2]
0x111: Call2 0x12dd

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty(bool, int, bool, int)
0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[-7]
0x117: Call2 0x1181

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
0x125: Stack[-1] = Stack[-7]
0x126: Call2 0x137b

0x127: Stack[-3] = Stack[-2]
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
0x133: Stack[-1] = Stack[-6]
0x134: Call2 0x1384

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
0x159: Stack[-1] = Stack[-7]
0x15a: Call2 0x193

0x15b: Stack[-4] = Stack[-2]
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
0x17a: Stack[-3] = Stack[-1]
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
0x196: Stack[-4] = Stack[-1]
0x197: Return(); Pop(2)

0x198: Stack[-1] = 0
0x199: PushEmpty(int, int)
0x19a: PushEmpty(int, object)
0x19b: Stack[-1] = Stack[-5]
0x19c: Call2 0x13f2

0x19d: Stack[-3] = Stack[-2]
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
0x1a9: Stack[-1] = Stack[-4]
0x1aa: Call2 0x13f5

0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(int, int)
0x1ae: PushEmpty(object)
0x1af: Stack[-1] = Stack[-4]
0x1b0: Call2 0x1339

0x1b1: Pop(1)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-1] = Stack[-5]
0x1b4: Call2 0x138c

0x1b5: Stack[-3] = Stack[-2]
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
0x1c1: Stack[-1] = Stack[-4]
0x1c2: Call2 0x1396

0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(int, int)
0x1c6: PushEmpty(bool, object, object, bool)
0x1c7: Stack[-3] = Stack[-9]
0x1c8: Stack[-2] = Stack[-8]
0x1c9: Stack[-1] = Stack[-7]
0x1ca: Call2 0x1619

0x1cb: Pop(3)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cd: PushEmpty(int, object, bool)
0x1ce: Stack[-2] = Stack[-8]
0x1cf: Stack[-1] = Stack[-6]
0x1d0: Call2 0x139e

0x1d1: Stack[-4] = Stack[-3]
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
0x1dd: Stack[-1] = Stack[-6]
0x1de: Call2 0x13a8

0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(int, int)
0x1e2: PushEmpty(int, object)
0x1e3: Stack[-1] = Stack[-5]
0x1e4: Call2 0x13fc

0x1e5: Stack[-3] = Stack[-2]
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
0x1f1: Stack[-1] = Stack[-4]
0x1f2: Call2 0x140c

0x1f3: Pop(1)
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(int, int)
0x1f6: PushEmpty(bool, object, string)
0x1f7: Stack[-2] = Stack[-7]
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call2 0x12e3

0x1fa: Pop(2)
0x1fb: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x28e

0x1fe: Pop(0)
0x1ff: PushEmpty(object, string)
0x200: Stack[-2] = Stack[-6]
0x201: Stack[-1] = Stack[-5]
0x202: Call2 0x1303

0x203: Pop(2)
0x204: GOTO 0x219

0x205: PushEmpty(int, string, object)
0x206: Stack[-2] = Stack[-6]
0x207: Stack[-1] = Stack[-7]
0x208: Call2 0x1412

0x209: Stack[-4] = Stack[-3]
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
0x215: Stack[-2] = Stack[-5]
0x216: Stack[-1] = Stack[-6]
0x217: Call2 0x1415

0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, string)
0x21c: Stack[-1] = Stack[-3]
0x21d: Call2 0x1346

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x28e

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-1] = Stack[-2]
0x225: Call2 0x1356

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x28e

0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0x13fb

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[-3]
0x232: Call2 0x131c

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x28e

0x237: Pop(0)
0x238: PushEmpty(object)
0x239: Stack[-1] = Stack[-2]
0x23a: Call2 0x1333

0x23b: Pop(1)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0x11a4

0x242: Pop(0)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(14)

0x246: PushEmpty(int)
0x247: Call2 0x136a

0x248: Stack[-8] = Stack[-1]
0x249: Pop(1)
0x24a: Stack[-6] = (int) 0
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push((int) 5)
0x24e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0x11a4

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
0x260: Push("all")
0x261: PushEmpty(string, int)
0x262: Stack[-1] = Stack[-7]
0x263: Call2 0x1363

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
0x29c: Call2 0x1138

0x29d: Stack[-4] = Stack[-2]
0x29e: Pop(2)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-2] = Stack[-6]
0x2a1: Stack[-1] = Stack[-5]
0x2a2: Call2 0x12b4

0x2a3: Pop(2)
0x2a4: Push((int) 0)
0x2a5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0x1199

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
0x2b4: Call2 0x1199

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
0x2c2: Push("head")
0x2c3: @ UnlookAsync(Stack[-1])
0x2c4: Pop(1)
0x2c5: Return(); Pop(6)

0x2c6: PushEmpty(object)
0x2c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c8: Call2 0x1258

0x2c9: Pop(1)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: PushEmpty(int, object)
0x2cd: Stack[-1] = Stack[-5]
0x2ce: Call2 0x13f2

0x2cf: Stack[-3] = Stack[-2]
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
0x2db: Stack[-1] = Stack[-4]
0x2dc: Call2 0x13f5

0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(int, int)
0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[-4]
0x2e2: Call2 0x1339

0x2e3: Pop(1)
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-1] = Stack[-5]
0x2e6: Call2 0x138c

0x2e7: Stack[-3] = Stack[-2]
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
0x2f3: Stack[-1] = Stack[-4]
0x2f4: Call2 0x1396

0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int)
0x2f8: PushEmpty(bool, object, object, bool)
0x2f9: Stack[-3] = Stack[-9]
0x2fa: Stack[-2] = Stack[-8]
0x2fb: Stack[-1] = Stack[-7]
0x2fc: Call2 0x1619

0x2fd: Pop(3)
0x2fe: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2ff: PushEmpty(int, object, bool)
0x300: Stack[-2] = Stack[-8]
0x301: Stack[-1] = Stack[-6]
0x302: Call2 0x139e

0x303: Stack[-4] = Stack[-3]
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
0x30f: Stack[-1] = Stack[-6]
0x310: Call2 0x13a8

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, object)
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0x13fc

0x317: Stack[-3] = Stack[-2]
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
0x323: Stack[-1] = Stack[-4]
0x324: Call2 0x140c

0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: PushEmpty(int, int)
0x328: PushEmpty(bool, object, string)
0x329: Stack[-2] = Stack[-7]
0x32a: Stack[-1] = Stack[-6]
0x32b: Call2 0x12e3

0x32c: Pop(2)
0x32d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32e: PushEmpty()
0x32f: Call2 0x35a

0x330: Pop(0)
0x331: PushEmpty(object, string)
0x332: Stack[-2] = Stack[-6]
0x333: Stack[-1] = Stack[-5]
0x334: Call2 0x1303

0x335: Pop(2)
0x336: GOTO 0x34b

0x337: PushEmpty(int, string, object)
0x338: Stack[-2] = Stack[-6]
0x339: Stack[-1] = Stack[-7]
0x33a: Call2 0x1412

0x33b: Stack[-4] = Stack[-3]
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
0x347: Stack[-2] = Stack[-5]
0x348: Stack[-1] = Stack[-6]
0x349: Call2 0x1415

0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty()
0x34d: PushEmpty(bool, string)
0x34e: Stack[-1] = Stack[-3]
0x34f: Call2 0x1346

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x352: PushEmpty()
0x353: Call2 0x35a

0x354: Pop(0)
0x355: PushEmpty(string)
0x356: Stack[-1] = Stack[-2]
0x357: Call2 0x1356

0x358: Pop(1)
0x359: Return(); Pop(0)

0x35a: @ StopGroup0()
0x35b: Pop(0)
0x35c: @ StopAsync()
0x35d: Pop(0)
0x35e: Push("head")
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
0x36a: Stack[-1] = Stack[-2]
0x36b: Call2 0x12dd

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(cvector, cvector, cvector, cvector)
0x36f: Push((int) 111)
0x370: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(4)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call2 0x1181

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
0x381: Call2 0x1138

0x382: Stack[-3] = Stack[-2]
0x383: Pop(2)
0x384: PushEmpty(float, cvector, cvector)
0x385: Stack[-2] = Stack[-5]
0x386: Stack[-1] = Stack[-4]
0x387: Call2 0x12b4

0x388: Pop(2)
0x389: Push((float)0.5)
0x38a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0x1199

0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty()
0x392: Call2 0x35a

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0x13fb

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[-3]
0x39b: Call2 0x131c

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39e: PushEmpty()
0x39f: Call2 0x35a

0x3a0: Pop(0)
0x3a1: PushEmpty(object)
0x3a2: Stack[-1] = Stack[-2]
0x3a3: Call2 0x1333

0x3a4: Pop(1)
0x3a5: Return(); Pop(0)

0x3a6: PushEmpty()
0x3a7: @ Face(Stack[-1])
0x3a8: Pop(0)
0x3a9: Push("all")
0x3aa: Push("attack_on")
0x3ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: @ WaitForAnimEnd()
0x3ae: Pop(0)
0x3af: Push("all")
0x3b0: Push("attack_stay")
0x3b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b2: Pop(2)
0x3b3: @ WaitForAnimEnd()
0x3b4: Pop(0)
0x3b5: Push("all")
0x3b6: Push("attack_off")
0x3b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: @ WaitForAnimEnd()
0x3ba: Pop(0)
0x3bb: @ StopAsync()
0x3bc: Pop(0)
0x3bd: PushEmpty(object)
0x3be: Stack[-1] = Stack[-2]
0x3bf: Call2 0x3e7

0x3c0: Pop(1)
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty()
0x3c3: Call2 0x464

0x3c4: Pop(0)
0x3c5: PushEmpty()
0x3c6: Call2 0x13fb

0x3c7: Pop(0)
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x3ca: @ GetPosition(Stack[-6])
0x3cb: Pop(0)
0x3cc: @@ GetPosition(Stack[-5])
0x3cd: Pop(0)
0x3ce: @ GetDirection(Stack[-4])
0x3cf: Pop(0)
0x3d0: PushEmpty(cvector, cvector)
0x3d1: PushEmpty(cvector, cvector)
0x3d2: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3d3: Call2 0x128a

0x3d4: Pop(1)
0x3d5: Push((float)0.75)
0x3d6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Call2 0x128a

0x3d9: Stack[-5] = Stack[-2]
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
0x3ea: Stack[-1] = (float) 1.74533
0x3eb: Call2 0x3c9

0x3ec: Stack[-7] = Stack[-2]
0x3ed: Pop(2)
0x3ee: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3ef: Push((float)2500.0)
0x3f0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f2: PushEmpty(cvector, float)
0x3f3: Stack[-1] = (float) 2.61799
0x3f4: Call2 0x3c9

0x3f5: Stack[-7] = Stack[-2]
0x3f6: Pop(2)
0x3f7: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3f8: Push((float)2500.0)
0x3f9: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3fb: Push("Can't retreat, distance: ")
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
0x409: Call2 0x1133

0x40a: Pop(0)
0x40b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x40c: Push((int) 120)
0x40d: Push((float)0.5)
0x40e: @ SetTimer(Stack[-2], Stack[-1])
0x40f: Pop(2)
0x410: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x411: Push((int) 1)
0x412: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x413: Pop(1)
0x414: Push(Stack[-3])
0x415: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x416: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: GOTO 0x42f

0x419: GOTO 0x42d

0x41a: PushEmpty(cvector, float)
0x41b: Stack[-1] = (float) 2.61799
0x41c: Call2 0x3c9

0x41d: Stack[-4] = Stack[-2]
0x41e: Pop(2)
0x41f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x420: Push((float)2500.0)
0x421: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x423: PushEmpty(cvector)
0x424: Call2 0x1133

0x425: Pop(0)
0x426: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x427: Push((int) 120)
0x428: Push((float)0.5)
0x429: @ SetTimer(Stack[-2], Stack[-1])
0x42a: Pop(2)
0x42b: GOTO 0x42d

0x42c: GOTO 0x42f

0x42d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x42e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x42f: Return(); Pop(10)

0x430: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x431: Push((int) 120)
0x432: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: Return(); Pop(8)

0x435: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
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
0x444: Stack[-1] = (float) 1.74533
0x445: Call2 0x3c9

0x446: Stack[-4] = Stack[-2]
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
0x454: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x455: PushEmpty(bool)
0x456: Call2 0x474

0x457: Pop(0)
0x458: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x459: Stack[-1] = (bool) 0
0x45a: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45b: Stack[-1] = (bool) 1
0x45c: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45d: @ Stop()
0x45e: Pop(0)
0x45f: PushEmpty(cvector)
0x460: Call2 0x1133

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
0x470: Stack[-1] = Stack[-2]
0x471: Call2 0x12dd

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty(cvector, cvector, cvector, cvector)
0x475: @ GetDirection(Stack[-2])
0x476: Pop(0)
0x477: PushEmpty(cvector, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0x1138

0x47a: Stack[-3] = Stack[-2]
0x47b: Pop(2)
0x47c: PushEmpty(float, cvector, cvector)
0x47d: Stack[-2] = Stack[-5]
0x47e: Stack[-1] = Stack[-4]
0x47f: Call2 0x1299

0x480: Pop(2)
0x481: Push((float)-0.34202)
0x482: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x483: Return(); Pop(4)

0x484: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x485: @ GetPosition(Stack[-6])
0x486: Pop(0)
0x487: @@ GetPosition(Stack[-5])
0x488: Pop(0)
0x489: @ GetDirection(Stack[-4])
0x48a: Pop(0)
0x48b: PushEmpty(cvector, cvector)
0x48c: PushEmpty(cvector, cvector)
0x48d: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x48e: Call2 0x128a

0x48f: Pop(1)
0x490: Push((float)0.75)
0x491: Pop(1); Push(Stack[-8] * Stack[-1]);
0x492: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Call2 0x128a

0x494: Stack[-5] = Stack[-2]
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
0x4a5: Stack[-1] = (float) 1.74533
0x4a6: Call2 0x484

0x4a7: Stack[-7] = Stack[-2]
0x4a8: Pop(2)
0x4a9: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4aa: Push((float)2500.0)
0x4ab: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4ad: PushEmpty(cvector, float)
0x4ae: Stack[-1] = (float) 2.61799
0x4af: Call2 0x484

0x4b0: Stack[-7] = Stack[-2]
0x4b1: Pop(2)
0x4b2: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4b3: Push((float)2500.0)
0x4b4: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b6: Push("Can't retreat, distance: ")
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
0x4c4: Call2 0x1133

0x4c5: Pop(0)
0x4c6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x4c7: Push((int) 120)
0x4c8: Push((float)0.5)
0x4c9: @ SetTimer(Stack[-2], Stack[-1])
0x4ca: Pop(2)
0x4cb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4cc: Push((int) 1)
0x4cd: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x4ce: Pop(1)
0x4cf: Push(Stack[-3])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4d1: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: GOTO 0x4ea

0x4d4: GOTO 0x4e8

0x4d5: PushEmpty(cvector, float)
0x4d6: Stack[-1] = (float) 2.61799
0x4d7: Call2 0x484

0x4d8: Stack[-4] = Stack[-2]
0x4d9: Pop(2)
0x4da: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4db: Push((float)2500.0)
0x4dc: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4de: PushEmpty(cvector)
0x4df: Call2 0x1133

0x4e0: Pop(0)
0x4e1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4e2: Push((int) 120)
0x4e3: Push((float)0.5)
0x4e4: @ SetTimer(Stack[-2], Stack[-1])
0x4e5: Pop(2)
0x4e6: GOTO 0x4e8

0x4e7: GOTO 0x4ea

0x4e8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4ea: Return(); Pop(10)

0x4eb: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4ec: Push((int) 120)
0x4ed: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ef: Return(); Pop(8)

0x4f0: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
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
0x4ff: Stack[-1] = (float) 1.74533
0x500: Call2 0x484

0x501: Stack[-4] = Stack[-2]
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
0x50f: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x510: PushEmpty(bool)
0x511: Call2 0x52f

0x512: Pop(0)
0x513: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x514: Stack[-1] = (bool) 0
0x515: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x516: Stack[-1] = (bool) 1
0x517: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x518: @ Stop()
0x519: Pop(0)
0x51a: PushEmpty(cvector)
0x51b: Call2 0x1133

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
0x52b: Stack[-1] = Stack[-2]
0x52c: Call2 0x12dd

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetDirection(Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(cvector, object)
0x533: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x534: Call2 0x1138

0x535: Stack[-3] = Stack[-2]
0x536: Pop(2)
0x537: PushEmpty(float, cvector, cvector)
0x538: Stack[-2] = Stack[-5]
0x539: Stack[-1] = Stack[-4]
0x53a: Call2 0x1299

0x53b: Pop(2)
0x53c: Push((float)-0.34202)
0x53d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x53e: Return(); Pop(4)

0x53f: PushEmpty()
0x540: Call2 0x5e1

0x541: Pop(0)
0x542: PushEmpty()
0x543: Call2 0x13fb

0x544: Pop(0)
0x545: Return(); Pop(0)

0x546: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x547: @ GetPosition(Stack[-6])
0x548: Pop(0)
0x549: @@ GetPosition(Stack[-5])
0x54a: Pop(0)
0x54b: @ GetDirection(Stack[-4])
0x54c: Pop(0)
0x54d: PushEmpty(cvector, cvector)
0x54e: PushEmpty(cvector, cvector)
0x54f: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x550: Call2 0x128a

0x551: Pop(1)
0x552: Push((float)0.75)
0x553: Pop(1); Push(Stack[-8] * Stack[-1]);
0x554: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Call2 0x128a

0x556: Stack[-5] = Stack[-2]
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
0x567: Stack[-1] = (float) 1.74533
0x568: Call2 0x546

0x569: Stack[-7] = Stack[-2]
0x56a: Pop(2)
0x56b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x56c: Push((float)2500.0)
0x56d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x56f: PushEmpty(cvector, float)
0x570: Stack[-1] = (float) 2.61799
0x571: Call2 0x546

0x572: Stack[-7] = Stack[-2]
0x573: Pop(2)
0x574: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x575: Push((float)2500.0)
0x576: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x578: Push("Can't retreat, distance: ")
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
0x586: Call2 0x1133

0x587: Pop(0)
0x588: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x589: Push((int) 120)
0x58a: Push((float)0.5)
0x58b: @ SetTimer(Stack[-2], Stack[-1])
0x58c: Pop(2)
0x58d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x58e: Push((int) 1)
0x58f: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x590: Pop(1)
0x591: Push(Stack[-3])
0x592: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x593: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: GOTO 0x5ac

0x596: GOTO 0x5aa

0x597: PushEmpty(cvector, float)
0x598: Stack[-1] = (float) 2.61799
0x599: Call2 0x546

0x59a: Stack[-4] = Stack[-2]
0x59b: Pop(2)
0x59c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x59d: Push((float)2500.0)
0x59e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a0: PushEmpty(cvector)
0x5a1: Call2 0x1133

0x5a2: Pop(0)
0x5a3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5a4: Push((int) 120)
0x5a5: Push((float)0.5)
0x5a6: @ SetTimer(Stack[-2], Stack[-1])
0x5a7: Pop(2)
0x5a8: GOTO 0x5aa

0x5a9: GOTO 0x5ac

0x5aa: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x5ab: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x5ac: Return(); Pop(10)

0x5ad: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x5ae: Push((int) 120)
0x5af: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b1: Return(); Pop(8)

0x5b2: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
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
0x5c1: Stack[-1] = (float) 1.74533
0x5c2: Call2 0x546

0x5c3: Stack[-4] = Stack[-2]
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
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d2: PushEmpty(bool)
0x5d3: Call2 0x5f1

0x5d4: Pop(0)
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d6: Stack[-1] = (bool) 0
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: Stack[-1] = (bool) 1
0x5d9: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5da: @ Stop()
0x5db: Pop(0)
0x5dc: PushEmpty(cvector)
0x5dd: Call2 0x1133

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
0x5ed: Stack[-1] = Stack[-2]
0x5ee: Call2 0x12dd

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(cvector, cvector, cvector, cvector)
0x5f2: @ GetDirection(Stack[-2])
0x5f3: Pop(0)
0x5f4: PushEmpty(cvector, object)
0x5f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f6: Call2 0x1138

0x5f7: Stack[-3] = Stack[-2]
0x5f8: Pop(2)
0x5f9: PushEmpty(float, cvector, cvector)
0x5fa: Stack[-2] = Stack[-5]
0x5fb: Stack[-1] = Stack[-4]
0x5fc: Call2 0x1299

0x5fd: Pop(2)
0x5fe: Push((float)-0.34202)
0x5ff: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x600: Return(); Pop(4)

0x601: PushEmpty()
0x602: Call2 0x6a3

0x603: Pop(0)
0x604: PushEmpty()
0x605: Call2 0x13fb

0x606: Pop(0)
0x607: Return(); Pop(0)

0x608: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x609: @ GetPosition(Stack[-6])
0x60a: Pop(0)
0x60b: @@ GetPosition(Stack[-5])
0x60c: Pop(0)
0x60d: @ GetDirection(Stack[-4])
0x60e: Pop(0)
0x60f: PushEmpty(cvector, cvector)
0x610: PushEmpty(cvector, cvector)
0x611: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x612: Call2 0x128a

0x613: Pop(1)
0x614: Push((float)0.75)
0x615: Pop(1); Push(Stack[-8] * Stack[-1]);
0x616: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Call2 0x128a

0x618: Stack[-5] = Stack[-2]
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
0x629: Stack[-1] = (float) 1.74533
0x62a: Call2 0x608

0x62b: Stack[-7] = Stack[-2]
0x62c: Pop(2)
0x62d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x62e: Push((float)2500.0)
0x62f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x631: PushEmpty(cvector, float)
0x632: Stack[-1] = (float) 2.61799
0x633: Call2 0x608

0x634: Stack[-7] = Stack[-2]
0x635: Pop(2)
0x636: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x637: Push((float)2500.0)
0x638: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63a: Push("Can't retreat, distance: ")
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
0x648: Call2 0x1133

0x649: Pop(0)
0x64a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x64b: Push((int) 120)
0x64c: Push((float)0.5)
0x64d: @ SetTimer(Stack[-2], Stack[-1])
0x64e: Pop(2)
0x64f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x650: Push((int) 1)
0x651: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x652: Pop(1)
0x653: Push(Stack[-3])
0x654: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x655: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x656: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x657: GOTO 0x66e

0x658: GOTO 0x66c

0x659: PushEmpty(cvector, float)
0x65a: Stack[-1] = (float) 2.61799
0x65b: Call2 0x608

0x65c: Stack[-4] = Stack[-2]
0x65d: Pop(2)
0x65e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x65f: Push((float)2500.0)
0x660: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x662: PushEmpty(cvector)
0x663: Call2 0x1133

0x664: Pop(0)
0x665: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x666: Push((int) 120)
0x667: Push((float)0.5)
0x668: @ SetTimer(Stack[-2], Stack[-1])
0x669: Pop(2)
0x66a: GOTO 0x66c

0x66b: GOTO 0x66e

0x66c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x66d: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x66e: Return(); Pop(10)

0x66f: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x670: Push((int) 120)
0x671: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x672: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x673: Return(); Pop(8)

0x674: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
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
0x683: Stack[-1] = (float) 1.74533
0x684: Call2 0x608

0x685: Stack[-4] = Stack[-2]
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
0x693: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x694: PushEmpty(bool)
0x695: Call2 0x6b3

0x696: Pop(0)
0x697: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x698: Stack[-1] = (bool) 0
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: Stack[-1] = (bool) 1
0x69b: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69c: @ Stop()
0x69d: Pop(0)
0x69e: PushEmpty(cvector)
0x69f: Call2 0x1133

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
0x6af: Stack[-1] = Stack[-2]
0x6b0: Call2 0x12dd

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty(cvector, cvector, cvector, cvector)
0x6b4: @ GetDirection(Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(cvector, object)
0x6b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b8: Call2 0x1138

0x6b9: Stack[-3] = Stack[-2]
0x6ba: Pop(2)
0x6bb: PushEmpty(float, cvector, cvector)
0x6bc: Stack[-2] = Stack[-5]
0x6bd: Stack[-1] = Stack[-4]
0x6be: Call2 0x1299

0x6bf: Pop(2)
0x6c0: Push((float)-0.34202)
0x6c1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object, float)
0x6c6: Stack[-2] = Stack[-12]
0x6c7: Stack[-1] = (float) 70.0
0x6c8: Call2 0x11a9

0x6c9: Pop(2)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-10] = (int) -2
0x6cd: Return(); Pop(8)

0x6ce: @ CreateDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: PushEmpty(int)
0x6d1: Call2 0x15df

0x6d2: Pop(0)
0x6d3: @@ SetNPCName(Stack[-1])
0x6d4: Pop(1)
0x6d5: PushEmpty(int)
0x6d6: Call2 0x15dd

0x6d7: Pop(0)
0x6d8: @@ SetNPCDescription(Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Call2 0x15e1

0x6dc: Pop(0)
0x6dd: @@ SetPhoto(Stack[-1])
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0x15e3

0x6e1: Pop(0)
0x6e2: @@ SetPhoto2(Stack[-1])
0x6e3: Pop(1)
0x6e4: PushEmpty(int)
0x6e5: Call2 0x1555

0x6e6: Pop(0)
0x6e7: @@ SetPlayerName(Stack[-1])
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
0x6f3: Stack[-2] = Stack[-11]
0x6f4: Stack[-1] = Stack[-6]
0x6f5: Push(-2, 4); TaskCall(9)
0x6f6: Call2 0x70d

0x6f7: Pop(-2, 4); TaskReturn
0x6f8: Pop(2)
0x6f9: @@ IsDialogEnd(Stack[-1])
0x6fa: Pop(0)
0x6fb: Pop(0); Push((bool) Stack[-1] == 0)
0x6fc: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6fd: @ sync()
0x6fe: Pop(0)
0x6ff: @@ IsDialogEnd(Stack[-1])
0x700: Pop(0)
0x701: GOTO 0x6fb

0x702: PushEmpty(object)
0x703: Stack[-1] = Stack[-10]
0x704: Call2 0x11ed

0x705: Pop(1)
0x706: @ StopDialog(Stack[-4])
0x707: Pop(0)
0x708: @@ GetReturnValue(Stack[-2])
0x709: Pop(0)
0x70a: Stack[-10] = Stack[-2]
0x70b: Return(); Pop(8)

0x70c: Stack[-4] = 0
0x70d: PushEmpty()
0x70e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x70f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x710: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x711: Push((int) 1)
0x712: IF (Stack[-1] == 0) GOTO 0x878; Pop(1)

0x713: PushEmpty(bool, object)
0x714: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x715: Call2 0x145e

0x716: Pop(1)
0x717: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x718: PushEmpty(string)
0x719: Stack[-1] = "Neutral"
0x71a: Call2 0x896

0x71b: Pop(1)
0x71c: Push((int) 543209)
0x71d: @@ SetMessage(Stack[-1])
0x71e: Pop(1)
0x71f: @@ ClearReplies()
0x720: Pop(0)
0x721: PushEmpty(bool)
0x722: Stack[-1] = (bool) 1
0x723: PushEmpty(bool)
0x724: Stack[-1] = (bool) 1
0x725: PushEmpty(bool)
0x726: Stack[-1] = (bool) 1
0x727: PushEmpty(bool, object)
0x728: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x729: Call2 0x146a

0x72a: Pop(1)
0x72b: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x72c: PushEmpty(bool, object)
0x72d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72e: Call2 0x1474

0x72f: Pop(1)
0x730: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x731: Stack[-1] = (bool) 0
0x732: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x733: PushEmpty(bool, object)
0x734: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x735: Call2 0x147e

0x736: Pop(1)
0x737: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x738: Stack[-1] = (bool) 0
0x739: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73a: PushEmpty(bool, object)
0x73b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73c: Call2 0x1488

0x73d: Pop(1)
0x73e: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73f: Stack[-1] = (bool) 0
0x740: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x741: Push((int) 543210)
0x742: Push((int) -1)
0x743: Push((int) 45666)
0x744: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x745: Pop(3)
0x746: PushEmpty(bool)
0x747: Stack[-1] = (bool) 1
0x748: PushEmpty(bool)
0x749: Stack[-1] = (bool) 1
0x74a: PushEmpty(bool, object)
0x74b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74c: Call2 0x1492

0x74d: Pop(1)
0x74e: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x74f: PushEmpty(bool, object)
0x750: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x751: Call2 0x149c

0x752: Pop(1)
0x753: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x754: Stack[-1] = (bool) 0
0x755: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x756: PushEmpty(bool, object)
0x757: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x758: Call2 0x14a6

0x759: Pop(1)
0x75a: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75b: Stack[-1] = (bool) 0
0x75c: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x75d: Push((int) 543211)
0x75e: Push((int) -1)
0x75f: Push((int) 45667)
0x760: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x761: Pop(3)
0x762: PushEmpty(bool)
0x763: Stack[-1] = (bool) 1
0x764: PushEmpty(bool)
0x765: Stack[-1] = (bool) 1
0x766: PushEmpty(bool)
0x767: Stack[-1] = (bool) 1
0x768: PushEmpty(bool)
0x769: Stack[-1] = (bool) 1
0x76a: PushEmpty(bool, object)
0x76b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76c: Call2 0x14b0

0x76d: Pop(1)
0x76e: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x76f: PushEmpty(bool, object)
0x770: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x771: Call2 0x14ba

0x772: Pop(1)
0x773: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x774: Stack[-1] = (bool) 0
0x775: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x776: PushEmpty(bool, object)
0x777: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x778: Call2 0x14c4

0x779: Pop(1)
0x77a: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77b: Stack[-1] = (bool) 0
0x77c: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x77d: PushEmpty(bool, object)
0x77e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77f: Call2 0x14ce

0x780: Pop(1)
0x781: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x782: Stack[-1] = (bool) 0
0x783: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x784: PushEmpty(bool, object)
0x785: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x786: Call2 0x14d8

0x787: Pop(1)
0x788: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x789: Stack[-1] = (bool) 0
0x78a: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78b: Push((int) 543212)
0x78c: Push((int) -1)
0x78d: Push((int) 45668)
0x78e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78f: Pop(3)
0x790: PushEmpty(bool)
0x791: Stack[-1] = (bool) 1
0x792: PushEmpty(bool)
0x793: Stack[-1] = (bool) 1
0x794: PushEmpty(bool)
0x795: Stack[-1] = (bool) 1
0x796: PushEmpty(bool)
0x797: Stack[-1] = (bool) 1
0x798: PushEmpty(bool, object)
0x799: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79a: Call2 0x146a

0x79b: Pop(1)
0x79c: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x79d: PushEmpty(bool, object)
0x79e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79f: Call2 0x1474

0x7a0: Pop(1)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a2: Stack[-1] = (bool) 0
0x7a3: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a4: PushEmpty(bool, object)
0x7a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a6: Call2 0x1488

0x7a7: Pop(1)
0x7a8: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a9: Stack[-1] = (bool) 0
0x7aa: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7ab: PushEmpty(bool, object)
0x7ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ad: Call2 0x1492

0x7ae: Pop(1)
0x7af: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7b0: Stack[-1] = (bool) 0
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b2: PushEmpty(bool, object)
0x7b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b4: Call2 0x14a6

0x7b5: Pop(1)
0x7b6: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b7: Stack[-1] = (bool) 0
0x7b8: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7b9: Push((int) 543213)
0x7ba: Push((int) -1)
0x7bb: Push((int) 45669)
0x7bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bd: Pop(3)
0x7be: PushEmpty(bool)
0x7bf: Stack[-1] = (bool) 1
0x7c0: PushEmpty(bool)
0x7c1: Stack[-1] = (bool) 1
0x7c2: PushEmpty(bool)
0x7c3: Stack[-1] = (bool) 1
0x7c4: PushEmpty(bool)
0x7c5: Stack[-1] = (bool) 1
0x7c6: PushEmpty(bool)
0x7c7: Stack[-1] = (bool) 1
0x7c8: PushEmpty(bool)
0x7c9: Stack[-1] = (bool) 1
0x7ca: PushEmpty(bool, object)
0x7cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7cc: Call2 0x147e

0x7cd: Pop(1)
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7cf: PushEmpty(bool, object)
0x7d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d1: Call2 0x149c

0x7d2: Pop(1)
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d4: Stack[-1] = (bool) 0
0x7d5: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d6: PushEmpty(bool, object)
0x7d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d8: Call2 0x14ba

0x7d9: Pop(1)
0x7da: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7db: Stack[-1] = (bool) 0
0x7dc: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7dd: PushEmpty(bool, object)
0x7de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7df: Call2 0x14d8

0x7e0: Pop(1)
0x7e1: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7e2: Stack[-1] = (bool) 0
0x7e3: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e4: PushEmpty(bool, object)
0x7e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e6: Call2 0x1474

0x7e7: Pop(1)
0x7e8: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e9: Stack[-1] = (bool) 0
0x7ea: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7eb: PushEmpty(bool, object)
0x7ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ed: Call2 0x14b0

0x7ee: Pop(1)
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7f0: Stack[-1] = (bool) 0
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f2: PushEmpty(bool, object)
0x7f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f4: Call2 0x14c4

0x7f5: Pop(1)
0x7f6: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f7: Stack[-1] = (bool) 0
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7f9: Push((int) 543215)
0x7fa: Push((int) -1)
0x7fb: Push((int) 45671)
0x7fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fd: Pop(3)
0x7fe: PushEmpty(bool)
0x7ff: Stack[-1] = (bool) 1
0x800: PushEmpty(bool)
0x801: Stack[-1] = (bool) 1
0x802: PushEmpty(bool)
0x803: Stack[-1] = (bool) 1
0x804: PushEmpty(bool, object)
0x805: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x806: Call2 0x14ce

0x807: Pop(1)
0x808: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x809: PushEmpty(bool, object)
0x80a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80b: Call2 0x14ba

0x80c: Pop(1)
0x80d: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80e: Stack[-1] = (bool) 0
0x80f: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x810: PushEmpty(bool, object)
0x811: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x812: Call2 0x14b0

0x813: Pop(1)
0x814: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x815: Stack[-1] = (bool) 0
0x816: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x817: PushEmpty(bool, object)
0x818: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x819: Call2 0x14a6

0x81a: Pop(1)
0x81b: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x81c: Stack[-1] = (bool) 0
0x81d: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x81e: Push((int) 543219)
0x81f: Push((int) -1)
0x820: Push((int) 45675)
0x821: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x822: Pop(3)
0x823: GOTO 0x878

0x824: PushEmpty(string)
0x825: Stack[-1] = "Neutral"
0x826: Call2 0x896

0x827: Pop(1)
0x828: Push((int) 537240)
0x829: @@ SetMessage(Stack[-1])
0x82a: Pop(1)
0x82b: @@ ClearReplies()
0x82c: Pop(0)
0x82d: Push((int) 537241)
0x82e: Push((int) -1)
0x82f: Push((int) 39084)
0x830: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x831: Pop(3)
0x832: PushEmpty(bool)
0x833: Stack[-1] = (bool) 0
0x834: PushEmpty(bool, object)
0x835: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x836: Call2 0x1452

0x837: Pop(1)
0x838: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x839: PushEmpty(bool, object)
0x83a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83b: Call2 0x146a

0x83c: Pop(1)
0x83d: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83e: Stack[-1] = (bool) 1
0x83f: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x840: Push((int) 537242)
0x841: Push((int) 39086)
0x842: Push((int) 39085)
0x843: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x844: Pop(3)
0x845: PushEmpty(bool)
0x846: Stack[-1] = (bool) 0
0x847: PushEmpty(bool, object)
0x848: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x849: Call2 0x147e

0x84a: Pop(1)
0x84b: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x84c: PushEmpty(bool, object)
0x84d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84e: Call2 0x14e2

0x84f: Pop(1)
0x850: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x851: Stack[-1] = (bool) 1
0x852: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x853: Push((int) 537352)
0x854: Push((int) 39199)
0x855: Push((int) 39198)
0x856: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x857: Pop(3)
0x858: PushEmpty(bool)
0x859: Stack[-1] = (bool) 0
0x85a: PushEmpty(bool, object)
0x85b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85c: Call2 0x1488

0x85d: Pop(1)
0x85e: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x85f: PushEmpty(bool, object)
0x860: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x861: Call2 0x14e2

0x862: Pop(1)
0x863: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x864: Stack[-1] = (bool) 1
0x865: IF (Stack[-1] == 0) GOTO 0x86b; Pop(1)

0x866: Push((int) 537380)
0x867: Push((int) 39227)
0x868: Push((int) 39226)
0x869: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86a: Pop(3)
0x86b: Push((int) 537503)
0x86c: Push((int) -1)
0x86d: Push((int) 39350)
0x86e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86f: Pop(3)
0x870: Push((int) 537504)
0x871: Push((int) -1)
0x872: Push((int) 39351)
0x873: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x874: Pop(3)
0x875: GOTO 0x878

0x876: Return(); Pop(0)

0x877: GOTO 0x711

0x878: PushEmpty(bool)
0x879: Call2 0x15e5

0x87a: Pop(0)
0x87b: IF (Stack[-1] == 0) GOTO 0x887; Pop(1)

0x87c: @ lshWaitForAnimEnd()
0x87d: Pop(0)
0x87e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x87f: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x880: GOTO 0x886

0x881: PushEmpty(string)
0x882: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x883: Call2 0x1239

0x884: Pop(1)
0x885: GOTO 0x87c

0x886: GOTO 0x895

0x887: Push("all")
0x888: Push("idle")
0x889: @ PlayAnimation(Stack[-2], Stack[-1])
0x88a: Pop(2)
0x88b: @ WaitForAnimEnd()
0x88c: Pop(0)
0x88d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88e: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x88f: GOTO 0x895

0x890: Push("all")
0x891: Push("idle")
0x892: @ PlayAnimation(Stack[-2], Stack[-1])
0x893: Pop(2)
0x894: GOTO 0x88b

0x895: Return(); Pop(0)

0x896: PushEmpty()
0x897: PushEmpty(bool)
0x898: Call2 0x15e5

0x899: Pop(0)
0x89a: Pop(1); Push((bool) Stack[-1] == 0)
0x89b: IF (Stack[-1] == 0) GOTO 0x89d; Pop(1)

0x89c: Return(); Pop(0)

0x89d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x89e: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x89f: Return(); Pop(0)

0x8a0: PushEmpty(string, bool)
0x8a1: Stack[-2] = Stack[-3]
0x8a2: Push("")
0x8a3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8a4: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x8a5: Stack[-1] = (bool) 0
0x8a6: GOTO 0x8a8

0x8a7: Stack[-1] = (bool) 1
0x8a8: Call2 0x1249

0x8a9: Pop(2)
0x8aa: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8ab: Return(); Pop(0)

0x8ac: PushEmpty()
0x8ad: Push((int) 1)
0x8ae: IF (Stack[-1] == 0) GOTO 0x1132; Pop(1)

0x8af: PushEmpty()
0x8b0: Call2 0x1263

0x8b1: Pop(0)
0x8b2: Push((int) 45666)
0x8b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8b5: PushEmpty(object, object)
0x8b6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8b8: Call2 0x144d

0x8b9: Pop(2)
0x8ba: Push((int) 45667)
0x8bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8bc: IF (Stack[-1] == 0) GOTO 0x8c2; Pop(1)

0x8bd: PushEmpty(object, object)
0x8be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c0: Call2 0x144d

0x8c1: Pop(2)
0x8c2: Push((int) 45668)
0x8c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c4: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c5: PushEmpty(object, object)
0x8c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c8: Call2 0x144d

0x8c9: Pop(2)
0x8ca: Push((int) 39084)
0x8cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8cc: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8cd: PushEmpty(object, object)
0x8ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8d0: Call2 0x144d

0x8d1: Pop(2)
0x8d2: Push((int) 45665)
0x8d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d4: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0x8d5: PushEmpty(bool, object)
0x8d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d7: Call2 0x145e

0x8d8: Pop(1)
0x8d9: IF (Stack[-1] == 0) GOTO 0x9e6; Pop(1)

0x8da: PushEmpty(string)
0x8db: Stack[-1] = "Neutral"
0x8dc: Call2 0x896

0x8dd: Pop(1)
0x8de: Push((int) 543209)
0x8df: @@ SetMessage(Stack[-1])
0x8e0: Pop(1)
0x8e1: @@ ClearReplies()
0x8e2: Pop(0)
0x8e3: PushEmpty(bool)
0x8e4: Stack[-1] = (bool) 1
0x8e5: PushEmpty(bool)
0x8e6: Stack[-1] = (bool) 1
0x8e7: PushEmpty(bool)
0x8e8: Stack[-1] = (bool) 1
0x8e9: PushEmpty(bool, object)
0x8ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8eb: Call2 0x146a

0x8ec: Pop(1)
0x8ed: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x8ee: PushEmpty(bool, object)
0x8ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f0: Call2 0x1474

0x8f1: Pop(1)
0x8f2: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x8f3: Stack[-1] = (bool) 0
0x8f4: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f5: PushEmpty(bool, object)
0x8f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f7: Call2 0x147e

0x8f8: Pop(1)
0x8f9: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8fa: Stack[-1] = (bool) 0
0x8fb: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8fc: PushEmpty(bool, object)
0x8fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8fe: Call2 0x1488

0x8ff: Pop(1)
0x900: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x901: Stack[-1] = (bool) 0
0x902: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x903: Push((int) 543210)
0x904: Push((int) -1)
0x905: Push((int) 45666)
0x906: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x907: Pop(3)
0x908: PushEmpty(bool)
0x909: Stack[-1] = (bool) 1
0x90a: PushEmpty(bool)
0x90b: Stack[-1] = (bool) 1
0x90c: PushEmpty(bool, object)
0x90d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90e: Call2 0x1492

0x90f: Pop(1)
0x910: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x911: PushEmpty(bool, object)
0x912: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x913: Call2 0x149c

0x914: Pop(1)
0x915: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x916: Stack[-1] = (bool) 0
0x917: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x918: PushEmpty(bool, object)
0x919: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91a: Call2 0x14a6

0x91b: Pop(1)
0x91c: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x91d: Stack[-1] = (bool) 0
0x91e: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x91f: Push((int) 543211)
0x920: Push((int) -1)
0x921: Push((int) 45667)
0x922: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x923: Pop(3)
0x924: PushEmpty(bool)
0x925: Stack[-1] = (bool) 1
0x926: PushEmpty(bool)
0x927: Stack[-1] = (bool) 1
0x928: PushEmpty(bool)
0x929: Stack[-1] = (bool) 1
0x92a: PushEmpty(bool)
0x92b: Stack[-1] = (bool) 1
0x92c: PushEmpty(bool, object)
0x92d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92e: Call2 0x14b0

0x92f: Pop(1)
0x930: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x931: PushEmpty(bool, object)
0x932: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x933: Call2 0x14ba

0x934: Pop(1)
0x935: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x936: Stack[-1] = (bool) 0
0x937: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x938: PushEmpty(bool, object)
0x939: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x93a: Call2 0x14c4

0x93b: Pop(1)
0x93c: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x93d: Stack[-1] = (bool) 0
0x93e: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x93f: PushEmpty(bool, object)
0x940: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x941: Call2 0x14ce

0x942: Pop(1)
0x943: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x944: Stack[-1] = (bool) 0
0x945: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x946: PushEmpty(bool, object)
0x947: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x948: Call2 0x14d8

0x949: Pop(1)
0x94a: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x94b: Stack[-1] = (bool) 0
0x94c: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x94d: Push((int) 543212)
0x94e: Push((int) -1)
0x94f: Push((int) 45668)
0x950: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x951: Pop(3)
0x952: PushEmpty(bool)
0x953: Stack[-1] = (bool) 1
0x954: PushEmpty(bool)
0x955: Stack[-1] = (bool) 1
0x956: PushEmpty(bool)
0x957: Stack[-1] = (bool) 1
0x958: PushEmpty(bool)
0x959: Stack[-1] = (bool) 1
0x95a: PushEmpty(bool, object)
0x95b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95c: Call2 0x146a

0x95d: Pop(1)
0x95e: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x95f: PushEmpty(bool, object)
0x960: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x961: Call2 0x1474

0x962: Pop(1)
0x963: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x964: Stack[-1] = (bool) 0
0x965: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x966: PushEmpty(bool, object)
0x967: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x968: Call2 0x1488

0x969: Pop(1)
0x96a: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x96b: Stack[-1] = (bool) 0
0x96c: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x96d: PushEmpty(bool, object)
0x96e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96f: Call2 0x1492

0x970: Pop(1)
0x971: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x972: Stack[-1] = (bool) 0
0x973: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x974: PushEmpty(bool, object)
0x975: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x976: Call2 0x14a6

0x977: Pop(1)
0x978: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x979: Stack[-1] = (bool) 0
0x97a: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97b: Push((int) 543213)
0x97c: Push((int) -1)
0x97d: Push((int) 45669)
0x97e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97f: Pop(3)
0x980: PushEmpty(bool)
0x981: Stack[-1] = (bool) 1
0x982: PushEmpty(bool)
0x983: Stack[-1] = (bool) 1
0x984: PushEmpty(bool)
0x985: Stack[-1] = (bool) 1
0x986: PushEmpty(bool)
0x987: Stack[-1] = (bool) 1
0x988: PushEmpty(bool)
0x989: Stack[-1] = (bool) 1
0x98a: PushEmpty(bool)
0x98b: Stack[-1] = (bool) 1
0x98c: PushEmpty(bool, object)
0x98d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98e: Call2 0x147e

0x98f: Pop(1)
0x990: IF (Stack[-1] == 0) GOTO 0x997; Pop(1)

0x991: PushEmpty(bool, object)
0x992: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x993: Call2 0x149c

0x994: Pop(1)
0x995: IF (Stack[-1] == 0) GOTO 0x997; Pop(1)

0x996: Stack[-1] = (bool) 0
0x997: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x998: PushEmpty(bool, object)
0x999: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x99a: Call2 0x14ba

0x99b: Pop(1)
0x99c: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x99d: Stack[-1] = (bool) 0
0x99e: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x99f: PushEmpty(bool, object)
0x9a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a1: Call2 0x14d8

0x9a2: Pop(1)
0x9a3: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x9a4: Stack[-1] = (bool) 0
0x9a5: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9a6: PushEmpty(bool, object)
0x9a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a8: Call2 0x1474

0x9a9: Pop(1)
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9ab: Stack[-1] = (bool) 0
0x9ac: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9ad: PushEmpty(bool, object)
0x9ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9af: Call2 0x14b0

0x9b0: Pop(1)
0x9b1: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9b2: Stack[-1] = (bool) 0
0x9b3: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9b4: PushEmpty(bool, object)
0x9b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b6: Call2 0x14c4

0x9b7: Pop(1)
0x9b8: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9b9: Stack[-1] = (bool) 0
0x9ba: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9bb: Push((int) 543215)
0x9bc: Push((int) -1)
0x9bd: Push((int) 45671)
0x9be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bf: Pop(3)
0x9c0: PushEmpty(bool)
0x9c1: Stack[-1] = (bool) 1
0x9c2: PushEmpty(bool)
0x9c3: Stack[-1] = (bool) 1
0x9c4: PushEmpty(bool)
0x9c5: Stack[-1] = (bool) 1
0x9c6: PushEmpty(bool, object)
0x9c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c8: Call2 0x14ce

0x9c9: Pop(1)
0x9ca: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9cb: PushEmpty(bool, object)
0x9cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9cd: Call2 0x14ba

0x9ce: Pop(1)
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9d0: Stack[-1] = (bool) 0
0x9d1: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d2: PushEmpty(bool, object)
0x9d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d4: Call2 0x14b0

0x9d5: Pop(1)
0x9d6: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d7: Stack[-1] = (bool) 0
0x9d8: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9d9: PushEmpty(bool, object)
0x9da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9db: Call2 0x14a6

0x9dc: Pop(1)
0x9dd: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9de: Stack[-1] = (bool) 0
0x9df: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9e0: Push((int) 543219)
0x9e1: Push((int) -1)
0x9e2: Push((int) 45675)
0x9e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e4: Pop(3)
0x9e5: Return(); Pop(0)

0x9e6: PushEmpty(string)
0x9e7: Stack[-1] = "Neutral"
0x9e8: Call2 0x896

0x9e9: Pop(1)
0x9ea: Push((int) 537240)
0x9eb: @@ SetMessage(Stack[-1])
0x9ec: Pop(1)
0x9ed: @@ ClearReplies()
0x9ee: Pop(0)
0x9ef: Push((int) 537241)
0x9f0: Push((int) -1)
0x9f1: Push((int) 39084)
0x9f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f3: Pop(3)
0x9f4: PushEmpty(bool)
0x9f5: Stack[-1] = (bool) 0
0x9f6: PushEmpty(bool, object)
0x9f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f8: Call2 0x1452

0x9f9: Pop(1)
0x9fa: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x9fb: PushEmpty(bool, object)
0x9fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9fd: Call2 0x146a

0x9fe: Pop(1)
0x9ff: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0xa00: Stack[-1] = (bool) 1
0xa01: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa02: Push((int) 537242)
0xa03: Push((int) 39086)
0xa04: Push((int) 39085)
0xa05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa06: Pop(3)
0xa07: PushEmpty(bool)
0xa08: Stack[-1] = (bool) 0
0xa09: PushEmpty(bool, object)
0xa0a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0b: Call2 0x147e

0xa0c: Pop(1)
0xa0d: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa0e: PushEmpty(bool, object)
0xa0f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa10: Call2 0x14e2

0xa11: Pop(1)
0xa12: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa13: Stack[-1] = (bool) 1
0xa14: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa15: Push((int) 537352)
0xa16: Push((int) 39199)
0xa17: Push((int) 39198)
0xa18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa19: Pop(3)
0xa1a: PushEmpty(bool)
0xa1b: Stack[-1] = (bool) 0
0xa1c: PushEmpty(bool, object)
0xa1d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1e: Call2 0x1488

0xa1f: Pop(1)
0xa20: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa21: PushEmpty(bool, object)
0xa22: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa23: Call2 0x14e2

0xa24: Pop(1)
0xa25: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa26: Stack[-1] = (bool) 1
0xa27: IF (Stack[-1] == 0) GOTO 0xa2d; Pop(1)

0xa28: Push((int) 537380)
0xa29: Push((int) 39227)
0xa2a: Push((int) 39226)
0xa2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2c: Pop(3)
0xa2d: Push((int) 537503)
0xa2e: Push((int) -1)
0xa2f: Push((int) 39350)
0xa30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa31: Pop(3)
0xa32: Push((int) 537504)
0xa33: Push((int) -1)
0xa34: Push((int) 39351)
0xa35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa36: Pop(3)
0xa37: Return(); Pop(0)

0xa38: Push((int) 39341)
0xa39: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3b; Pop(1)

0xa3b: Push((int) 39347)
0xa3c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3d: IF (Stack[-1] == 0) GOTO 0xa57; Pop(1)

0xa3e: PushEmpty(string)
0xa3f: Stack[-1] = "Neutral"
0xa40: Call2 0x896

0xa41: Pop(1)
0xa42: Push((int) 537500)
0xa43: @@ SetMessage(Stack[-1])
0xa44: Pop(1)
0xa45: @@ ClearReplies()
0xa46: Pop(0)
0xa47: Push((int) 537501)
0xa48: Push((int) -1)
0xa49: Push((int) 39348)
0xa4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4b: Pop(3)
0xa4c: PushEmpty(bool, object)
0xa4d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4e: Call2 0x1452

0xa4f: Pop(1)
0xa50: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa51: Push((int) 537502)
0xa52: Push((int) -1)
0xa53: Push((int) 39349)
0xa54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa55: Pop(3)
0xa56: Return(); Pop(0)

0xa57: Push((int) 39343)
0xa58: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa59: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa5a: PushEmpty(string)
0xa5b: Stack[-1] = "Neutral"
0xa5c: Call2 0x896

0xa5d: Pop(1)
0xa5e: Push((int) 537496)
0xa5f: @@ SetMessage(Stack[-1])
0xa60: Pop(1)
0xa61: @@ ClearReplies()
0xa62: Pop(0)
0xa63: Push((int) 537497)
0xa64: Push((int) -1)
0xa65: Push((int) 39344)
0xa66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa67: Pop(3)
0xa68: Push((int) 537498)
0xa69: Push((int) -1)
0xa6a: Push((int) 39345)
0xa6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6c: Pop(3)
0xa6d: Return(); Pop(0)

0xa6e: Push((int) 39331)
0xa6f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa70: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa71: Push((int) 39333)
0xa72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa73: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa74: PushEmpty(string)
0xa75: Stack[-1] = "Neutral"
0xa76: Call2 0x896

0xa77: Pop(1)
0xa78: Push((int) 537486)
0xa79: @@ SetMessage(Stack[-1])
0xa7a: Pop(1)
0xa7b: @@ ClearReplies()
0xa7c: Pop(0)
0xa7d: Push((int) 537487)
0xa7e: Push((int) 39335)
0xa7f: Push((int) 39334)
0xa80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa81: Pop(3)
0xa82: PushEmpty(bool, object)
0xa83: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa84: Call2 0x1452

0xa85: Pop(1)
0xa86: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa87: Push((int) 537491)
0xa88: Push((int) -1)
0xa89: Push((int) 39338)
0xa8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8b: Pop(3)
0xa8c: Return(); Pop(0)

0xa8d: Push((int) 39335)
0xa8e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8f: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xa90: PushEmpty(string)
0xa91: Stack[-1] = "Neutral"
0xa92: Call2 0x896

0xa93: Pop(1)
0xa94: Push((int) 537488)
0xa95: @@ SetMessage(Stack[-1])
0xa96: Pop(1)
0xa97: @@ ClearReplies()
0xa98: Pop(0)
0xa99: Push((int) 537489)
0xa9a: Push((int) -1)
0xa9b: Push((int) 39336)
0xa9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9d: Pop(3)
0xa9e: Push((int) 537490)
0xa9f: Push((int) -1)
0xaa0: Push((int) 39337)
0xaa1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa2: Pop(3)
0xaa3: Return(); Pop(0)

0xaa4: Push((int) 39321)
0xaa5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa6: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xaa7: Push((int) 39323)
0xaa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa9: IF (Stack[-1] == 0) GOTO 0xabe; Pop(1)

0xaaa: PushEmpty(string)
0xaab: Stack[-1] = "Neutral"
0xaac: Call2 0x896

0xaad: Pop(1)
0xaae: Push((int) 537476)
0xaaf: @@ SetMessage(Stack[-1])
0xab0: Pop(1)
0xab1: @@ ClearReplies()
0xab2: Pop(0)
0xab3: Push((int) 537477)
0xab4: Push((int) 39325)
0xab5: Push((int) 39324)
0xab6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab7: Pop(3)
0xab8: Push((int) 537481)
0xab9: Push((int) -1)
0xaba: Push((int) 39328)
0xabb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabc: Pop(3)
0xabd: Return(); Pop(0)

0xabe: Push((int) 39325)
0xabf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac0: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xac1: PushEmpty(string)
0xac2: Stack[-1] = "Neutral"
0xac3: Call2 0x896

0xac4: Pop(1)
0xac5: Push((int) 537478)
0xac6: @@ SetMessage(Stack[-1])
0xac7: Pop(1)
0xac8: @@ ClearReplies()
0xac9: Pop(0)
0xaca: Push((int) 537479)
0xacb: Push((int) -1)
0xacc: Push((int) 39326)
0xacd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xace: Pop(3)
0xacf: Push((int) 537480)
0xad0: Push((int) -1)
0xad1: Push((int) 39327)
0xad2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad3: Pop(3)
0xad4: Return(); Pop(0)

0xad5: Push((int) 39308)
0xad6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad7: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xad8: Push((int) 39310)
0xad9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xada: IF (Stack[-1] == 0) GOTO 0xaef; Pop(1)

0xadb: PushEmpty(string)
0xadc: Stack[-1] = "Neutral"
0xadd: Call2 0x896

0xade: Pop(1)
0xadf: Push((int) 537463)
0xae0: @@ SetMessage(Stack[-1])
0xae1: Pop(1)
0xae2: @@ ClearReplies()
0xae3: Pop(0)
0xae4: Push((int) 537464)
0xae5: Push((int) 39312)
0xae6: Push((int) 39311)
0xae7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae8: Pop(3)
0xae9: Push((int) 537471)
0xaea: Push((int) -1)
0xaeb: Push((int) 39318)
0xaec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaed: Pop(3)
0xaee: Return(); Pop(0)

0xaef: Push((int) 39312)
0xaf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf1: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xaf2: PushEmpty(string)
0xaf3: Stack[-1] = "Neutral"
0xaf4: Call2 0x896

0xaf5: Pop(1)
0xaf6: Push((int) 537465)
0xaf7: @@ SetMessage(Stack[-1])
0xaf8: Pop(1)
0xaf9: @@ ClearReplies()
0xafa: Pop(0)
0xafb: Push((int) 537466)
0xafc: Push((int) 39314)
0xafd: Push((int) 39313)
0xafe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaff: Pop(3)
0xb00: Push((int) 537470)
0xb01: Push((int) -1)
0xb02: Push((int) 39317)
0xb03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb04: Pop(3)
0xb05: Return(); Pop(0)

0xb06: Push((int) 39314)
0xb07: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb08: IF (Stack[-1] == 0) GOTO 0xb1d; Pop(1)

0xb09: PushEmpty(string)
0xb0a: Stack[-1] = "Neutral"
0xb0b: Call2 0x896

0xb0c: Pop(1)
0xb0d: Push((int) 537467)
0xb0e: @@ SetMessage(Stack[-1])
0xb0f: Pop(1)
0xb10: @@ ClearReplies()
0xb11: Pop(0)
0xb12: Push((int) 537468)
0xb13: Push((int) -1)
0xb14: Push((int) 39315)
0xb15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb16: Pop(3)
0xb17: Push((int) 537469)
0xb18: Push((int) -1)
0xb19: Push((int) 39316)
0xb1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1b: Pop(3)
0xb1c: Return(); Pop(0)

0xb1d: Push((int) 39299)
0xb1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1f: IF (Stack[-1] == 0) GOTO 0xb20; Pop(1)

0xb20: Push((int) 39301)
0xb21: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb22: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb23: PushEmpty(string)
0xb24: Stack[-1] = "Neutral"
0xb25: Call2 0x896

0xb26: Pop(1)
0xb27: Push((int) 537454)
0xb28: @@ SetMessage(Stack[-1])
0xb29: Pop(1)
0xb2a: @@ ClearReplies()
0xb2b: Pop(0)
0xb2c: Push((int) 537455)
0xb2d: Push((int) 39303)
0xb2e: Push((int) 39302)
0xb2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb30: Pop(3)
0xb31: Return(); Pop(0)

0xb32: Push((int) 39303)
0xb33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb34: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb35: PushEmpty(string)
0xb36: Stack[-1] = "Neutral"
0xb37: Call2 0x896

0xb38: Pop(1)
0xb39: Push((int) 537456)
0xb3a: @@ SetMessage(Stack[-1])
0xb3b: Pop(1)
0xb3c: @@ ClearReplies()
0xb3d: Pop(0)
0xb3e: Push((int) 537457)
0xb3f: Push((int) -1)
0xb40: Push((int) 39304)
0xb41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb42: Pop(3)
0xb43: Push((int) 537458)
0xb44: Push((int) -1)
0xb45: Push((int) 39305)
0xb46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb47: Pop(3)
0xb48: Return(); Pop(0)

0xb49: Push((int) 39280)
0xb4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4b: IF (Stack[-1] == 0) GOTO 0xb4c; Pop(1)

0xb4c: Push((int) 39294)
0xb4d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4e: IF (Stack[-1] == 0) GOTO 0xb63; Pop(1)

0xb4f: PushEmpty(string)
0xb50: Stack[-1] = "Neutral"
0xb51: Call2 0x896

0xb52: Pop(1)
0xb53: Push((int) 537448)
0xb54: @@ SetMessage(Stack[-1])
0xb55: Pop(1)
0xb56: @@ ClearReplies()
0xb57: Pop(0)
0xb58: Push((int) 537449)
0xb59: Push((int) 39284)
0xb5a: Push((int) 39295)
0xb5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5c: Pop(3)
0xb5d: Push((int) 537450)
0xb5e: Push((int) -1)
0xb5f: Push((int) 39297)
0xb60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb61: Pop(3)
0xb62: Return(); Pop(0)

0xb63: Push((int) 39282)
0xb64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb65: IF (Stack[-1] == 0) GOTO 0xb75; Pop(1)

0xb66: PushEmpty(string)
0xb67: Stack[-1] = "Neutral"
0xb68: Call2 0x896

0xb69: Pop(1)
0xb6a: Push((int) 537436)
0xb6b: @@ SetMessage(Stack[-1])
0xb6c: Pop(1)
0xb6d: @@ ClearReplies()
0xb6e: Pop(0)
0xb6f: Push((int) 537437)
0xb70: Push((int) 39284)
0xb71: Push((int) 39283)
0xb72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb73: Pop(3)
0xb74: Return(); Pop(0)

0xb75: Push((int) 39284)
0xb76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb77: IF (Stack[-1] == 0) GOTO 0xb8c; Pop(1)

0xb78: PushEmpty(string)
0xb79: Stack[-1] = "Neutral"
0xb7a: Call2 0x896

0xb7b: Pop(1)
0xb7c: Push((int) 537438)
0xb7d: @@ SetMessage(Stack[-1])
0xb7e: Pop(1)
0xb7f: @@ ClearReplies()
0xb80: Pop(0)
0xb81: Push((int) 537439)
0xb82: Push((int) 39286)
0xb83: Push((int) 39285)
0xb84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb85: Pop(3)
0xb86: Push((int) 537442)
0xb87: Push((int) 39289)
0xb88: Push((int) 39288)
0xb89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8a: Pop(3)
0xb8b: Return(); Pop(0)

0xb8c: Push((int) 39289)
0xb8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb8e: IF (Stack[-1] == 0) GOTO 0xb9e; Pop(1)

0xb8f: PushEmpty(string)
0xb90: Stack[-1] = "Neutral"
0xb91: Call2 0x896

0xb92: Pop(1)
0xb93: Push((int) 537443)
0xb94: @@ SetMessage(Stack[-1])
0xb95: Pop(1)
0xb96: @@ ClearReplies()
0xb97: Pop(0)
0xb98: Push((int) 537444)
0xb99: Push((int) 39291)
0xb9a: Push((int) 39290)
0xb9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9c: Pop(3)
0xb9d: Return(); Pop(0)

0xb9e: Push((int) 39291)
0xb9f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba0: IF (Stack[-1] == 0) GOTO 0xbb0; Pop(1)

0xba1: PushEmpty(string)
0xba2: Stack[-1] = "Neutral"
0xba3: Call2 0x896

0xba4: Pop(1)
0xba5: Push((int) 537445)
0xba6: @@ SetMessage(Stack[-1])
0xba7: Pop(1)
0xba8: @@ ClearReplies()
0xba9: Pop(0)
0xbaa: Push((int) 537446)
0xbab: Push((int) -1)
0xbac: Push((int) 39292)
0xbad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbae: Pop(3)
0xbaf: Return(); Pop(0)

0xbb0: Push((int) 39286)
0xbb1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb2: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbb3: PushEmpty(string)
0xbb4: Stack[-1] = "Neutral"
0xbb5: Call2 0x896

0xbb6: Pop(1)
0xbb7: Push((int) 537440)
0xbb8: @@ SetMessage(Stack[-1])
0xbb9: Pop(1)
0xbba: @@ ClearReplies()
0xbbb: Pop(0)
0xbbc: Push((int) 537441)
0xbbd: Push((int) -1)
0xbbe: Push((int) 39287)
0xbbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc0: Pop(3)
0xbc1: Return(); Pop(0)

0xbc2: Push((int) 39270)
0xbc3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc4: IF (Stack[-1] == 0) GOTO 0xbc5; Pop(1)

0xbc5: Push((int) 39272)
0xbc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc7: IF (Stack[-1] == 0) GOTO 0xbdc; Pop(1)

0xbc8: PushEmpty(string)
0xbc9: Stack[-1] = "Neutral"
0xbca: Call2 0x896

0xbcb: Pop(1)
0xbcc: Push((int) 537426)
0xbcd: @@ SetMessage(Stack[-1])
0xbce: Pop(1)
0xbcf: @@ ClearReplies()
0xbd0: Pop(0)
0xbd1: Push((int) 537427)
0xbd2: Push((int) 39274)
0xbd3: Push((int) 39273)
0xbd4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd5: Pop(3)
0xbd6: Push((int) 537431)
0xbd7: Push((int) -1)
0xbd8: Push((int) 39277)
0xbd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbda: Pop(3)
0xbdb: Return(); Pop(0)

0xbdc: Push((int) 39274)
0xbdd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbde: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbdf: PushEmpty(string)
0xbe0: Stack[-1] = "Neutral"
0xbe1: Call2 0x896

0xbe2: Pop(1)
0xbe3: Push((int) 537428)
0xbe4: @@ SetMessage(Stack[-1])
0xbe5: Pop(1)
0xbe6: @@ ClearReplies()
0xbe7: Pop(0)
0xbe8: Push((int) 537429)
0xbe9: Push((int) -1)
0xbea: Push((int) 39275)
0xbeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbec: Pop(3)
0xbed: Push((int) 537430)
0xbee: Push((int) -1)
0xbef: Push((int) 39276)
0xbf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf1: Pop(3)
0xbf2: Return(); Pop(0)

0xbf3: Push((int) 39247)
0xbf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf5: IF (Stack[-1] == 0) GOTO 0xbf6; Pop(1)

0xbf6: Push((int) 39265)
0xbf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf8: IF (Stack[-1] == 0) GOTO 0xc0d; Pop(1)

0xbf9: PushEmpty(string)
0xbfa: Stack[-1] = "Neutral"
0xbfb: Call2 0x896

0xbfc: Pop(1)
0xbfd: Push((int) 537419)
0xbfe: @@ SetMessage(Stack[-1])
0xbff: Pop(1)
0xc00: @@ ClearReplies()
0xc01: Pop(0)
0xc02: Push((int) 537420)
0xc03: Push((int) -1)
0xc04: Push((int) 39266)
0xc05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc06: Pop(3)
0xc07: Push((int) 537421)
0xc08: Push((int) -1)
0xc09: Push((int) 39267)
0xc0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0b: Pop(3)
0xc0c: Return(); Pop(0)

0xc0d: Push((int) 39249)
0xc0e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0f: IF (Stack[-1] == 0) GOTO 0xc24; Pop(1)

0xc10: PushEmpty(string)
0xc11: Stack[-1] = "Neutral"
0xc12: Call2 0x896

0xc13: Pop(1)
0xc14: Push((int) 537403)
0xc15: @@ SetMessage(Stack[-1])
0xc16: Pop(1)
0xc17: @@ ClearReplies()
0xc18: Pop(0)
0xc19: Push((int) 537404)
0xc1a: Push((int) 39251)
0xc1b: Push((int) 39250)
0xc1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1d: Pop(3)
0xc1e: Push((int) 537417)
0xc1f: Push((int) -1)
0xc20: Push((int) 39263)
0xc21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc22: Pop(3)
0xc23: Return(); Pop(0)

0xc24: Push((int) 39251)
0xc25: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc26: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc27: PushEmpty(string)
0xc28: Stack[-1] = "Neutral"
0xc29: Call2 0x896

0xc2a: Pop(1)
0xc2b: Push((int) 537405)
0xc2c: @@ SetMessage(Stack[-1])
0xc2d: Pop(1)
0xc2e: @@ ClearReplies()
0xc2f: Pop(0)
0xc30: Push((int) 537406)
0xc31: Push((int) 39253)
0xc32: Push((int) 39252)
0xc33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc34: Pop(3)
0xc35: PushEmpty(bool, object)
0xc36: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc37: Call2 0x1452

0xc38: Pop(1)
0xc39: IF (Stack[-1] == 0) GOTO 0xc3f; Pop(1)

0xc3a: Push((int) 537416)
0xc3b: Push((int) -1)
0xc3c: Push((int) 39262)
0xc3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3e: Pop(3)
0xc3f: Return(); Pop(0)

0xc40: Push((int) 39253)
0xc41: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc42: IF (Stack[-1] == 0) GOTO 0xc57; Pop(1)

0xc43: PushEmpty(string)
0xc44: Stack[-1] = "Neutral"
0xc45: Call2 0x896

0xc46: Pop(1)
0xc47: Push((int) 537407)
0xc48: @@ SetMessage(Stack[-1])
0xc49: Pop(1)
0xc4a: @@ ClearReplies()
0xc4b: Pop(0)
0xc4c: Push((int) 537408)
0xc4d: Push((int) 39255)
0xc4e: Push((int) 39254)
0xc4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc50: Pop(3)
0xc51: Push((int) 537415)
0xc52: Push((int) -1)
0xc53: Push((int) 39261)
0xc54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc55: Pop(3)
0xc56: Return(); Pop(0)

0xc57: Push((int) 39255)
0xc58: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc59: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc5a: PushEmpty(string)
0xc5b: Stack[-1] = "Neutral"
0xc5c: Call2 0x896

0xc5d: Pop(1)
0xc5e: Push((int) 537409)
0xc5f: @@ SetMessage(Stack[-1])
0xc60: Pop(1)
0xc61: @@ ClearReplies()
0xc62: Pop(0)
0xc63: Push((int) 537410)
0xc64: Push((int) 39257)
0xc65: Push((int) 39256)
0xc66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc67: Pop(3)
0xc68: Push((int) 537414)
0xc69: Push((int) -1)
0xc6a: Push((int) 39260)
0xc6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6c: Pop(3)
0xc6d: Return(); Pop(0)

0xc6e: Push((int) 39257)
0xc6f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc70: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc71: PushEmpty(string)
0xc72: Stack[-1] = "Neutral"
0xc73: Call2 0x896

0xc74: Pop(1)
0xc75: Push((int) 537411)
0xc76: @@ SetMessage(Stack[-1])
0xc77: Pop(1)
0xc78: @@ ClearReplies()
0xc79: Pop(0)
0xc7a: Push((int) 537412)
0xc7b: Push((int) -1)
0xc7c: Push((int) 39258)
0xc7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7e: Pop(3)
0xc7f: Push((int) 537413)
0xc80: Push((int) -1)
0xc81: Push((int) 39259)
0xc82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc83: Pop(3)
0xc84: Return(); Pop(0)

0xc85: Push((int) 39237)
0xc86: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc87: IF (Stack[-1] == 0) GOTO 0xc88; Pop(1)

0xc88: Push((int) 39244)
0xc89: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8a: IF (Stack[-1] == 0) GOTO 0xc9a; Pop(1)

0xc8b: PushEmpty(string)
0xc8c: Stack[-1] = "Neutral"
0xc8d: Call2 0x896

0xc8e: Pop(1)
0xc8f: Push((int) 537398)
0xc90: @@ SetMessage(Stack[-1])
0xc91: Pop(1)
0xc92: @@ ClearReplies()
0xc93: Pop(0)
0xc94: Push((int) 537399)
0xc95: Push((int) -1)
0xc96: Push((int) 39245)
0xc97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc98: Pop(3)
0xc99: Return(); Pop(0)

0xc9a: Push((int) 39239)
0xc9b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9c: IF (Stack[-1] == 0) GOTO 0xcac; Pop(1)

0xc9d: PushEmpty(string)
0xc9e: Stack[-1] = "Neutral"
0xc9f: Call2 0x896

0xca0: Pop(1)
0xca1: Push((int) 537393)
0xca2: @@ SetMessage(Stack[-1])
0xca3: Pop(1)
0xca4: @@ ClearReplies()
0xca5: Pop(0)
0xca6: Push((int) 537394)
0xca7: Push((int) 39241)
0xca8: Push((int) 39240)
0xca9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcaa: Pop(3)
0xcab: Return(); Pop(0)

0xcac: Push((int) 39241)
0xcad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcae: IF (Stack[-1] == 0) GOTO 0xcbe; Pop(1)

0xcaf: PushEmpty(string)
0xcb0: Stack[-1] = "Neutral"
0xcb1: Call2 0x896

0xcb2: Pop(1)
0xcb3: Push((int) 537395)
0xcb4: @@ SetMessage(Stack[-1])
0xcb5: Pop(1)
0xcb6: @@ ClearReplies()
0xcb7: Pop(0)
0xcb8: Push((int) 537396)
0xcb9: Push((int) -1)
0xcba: Push((int) 39242)
0xcbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcbc: Pop(3)
0xcbd: Return(); Pop(0)

0xcbe: Push((int) 39227)
0xcbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc0: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcc1: PushEmpty(string)
0xcc2: Stack[-1] = "Neutral"
0xcc3: Call2 0x896

0xcc4: Pop(1)
0xcc5: Push((int) 537381)
0xcc6: @@ SetMessage(Stack[-1])
0xcc7: Pop(1)
0xcc8: @@ ClearReplies()
0xcc9: Pop(0)
0xcca: Push((int) 537382)
0xccb: Push((int) 39229)
0xccc: Push((int) 39228)
0xccd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcce: Pop(3)
0xccf: Push((int) 537386)
0xcd0: Push((int) 39233)
0xcd1: Push((int) 39232)
0xcd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd3: Pop(3)
0xcd4: Push((int) 537389)
0xcd5: Push((int) -1)
0xcd6: Push((int) 39235)
0xcd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd8: Pop(3)
0xcd9: Return(); Pop(0)

0xcda: Push((int) 39233)
0xcdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcdc: IF (Stack[-1] == 0) GOTO 0xcec; Pop(1)

0xcdd: PushEmpty(string)
0xcde: Stack[-1] = "Neutral"
0xcdf: Call2 0x896

0xce0: Pop(1)
0xce1: Push((int) 537387)
0xce2: @@ SetMessage(Stack[-1])
0xce3: Pop(1)
0xce4: @@ ClearReplies()
0xce5: Pop(0)
0xce6: Push((int) 537388)
0xce7: Push((int) -1)
0xce8: Push((int) 39234)
0xce9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcea: Pop(3)
0xceb: Return(); Pop(0)

0xcec: Push((int) 39229)
0xced: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcee: IF (Stack[-1] == 0) GOTO 0xd03; Pop(1)

0xcef: PushEmpty(string)
0xcf0: Stack[-1] = "Neutral"
0xcf1: Call2 0x896

0xcf2: Pop(1)
0xcf3: Push((int) 537383)
0xcf4: @@ SetMessage(Stack[-1])
0xcf5: Pop(1)
0xcf6: @@ ClearReplies()
0xcf7: Pop(0)
0xcf8: Push((int) 537384)
0xcf9: Push((int) -1)
0xcfa: Push((int) 39230)
0xcfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfc: Pop(3)
0xcfd: Push((int) 537385)
0xcfe: Push((int) -1)
0xcff: Push((int) 39231)
0xd00: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd01: Pop(3)
0xd02: Return(); Pop(0)

0xd03: Push((int) 39206)
0xd04: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd05: IF (Stack[-1] == 0) GOTO 0xd06; Pop(1)

0xd06: Push((int) 39223)
0xd07: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd08: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd09: PushEmpty(string)
0xd0a: Stack[-1] = "Neutral"
0xd0b: Call2 0x896

0xd0c: Pop(1)
0xd0d: Push((int) 537377)
0xd0e: @@ SetMessage(Stack[-1])
0xd0f: Pop(1)
0xd10: @@ ClearReplies()
0xd11: Pop(0)
0xd12: Push((int) 537378)
0xd13: Push((int) -1)
0xd14: Push((int) 39224)
0xd15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd16: Pop(3)
0xd17: Return(); Pop(0)

0xd18: Push((int) 39208)
0xd19: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1a: IF (Stack[-1] == 0) GOTO 0xd2f; Pop(1)

0xd1b: PushEmpty(string)
0xd1c: Stack[-1] = "Neutral"
0xd1d: Call2 0x896

0xd1e: Pop(1)
0xd1f: Push((int) 537362)
0xd20: @@ SetMessage(Stack[-1])
0xd21: Pop(1)
0xd22: @@ ClearReplies()
0xd23: Pop(0)
0xd24: Push((int) 537363)
0xd25: Push((int) 39210)
0xd26: Push((int) 39209)
0xd27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd28: Pop(3)
0xd29: Push((int) 537369)
0xd2a: Push((int) 39216)
0xd2b: Push((int) 39215)
0xd2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2d: Pop(3)
0xd2e: Return(); Pop(0)

0xd2f: Push((int) 39216)
0xd30: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd31: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd32: PushEmpty(string)
0xd33: Stack[-1] = "Neutral"
0xd34: Call2 0x896

0xd35: Pop(1)
0xd36: Push((int) 537370)
0xd37: @@ SetMessage(Stack[-1])
0xd38: Pop(1)
0xd39: @@ ClearReplies()
0xd3a: Pop(0)
0xd3b: Push((int) 537371)
0xd3c: Push((int) 39218)
0xd3d: Push((int) 39217)
0xd3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3f: Pop(3)
0xd40: Push((int) 537375)
0xd41: Push((int) -1)
0xd42: Push((int) 39221)
0xd43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd44: Pop(3)
0xd45: Return(); Pop(0)

0xd46: Push((int) 39218)
0xd47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd48: IF (Stack[-1] == 0) GOTO 0xd5d; Pop(1)

0xd49: PushEmpty(string)
0xd4a: Stack[-1] = "Neutral"
0xd4b: Call2 0x896

0xd4c: Pop(1)
0xd4d: Push((int) 537372)
0xd4e: @@ SetMessage(Stack[-1])
0xd4f: Pop(1)
0xd50: @@ ClearReplies()
0xd51: Pop(0)
0xd52: Push((int) 537373)
0xd53: Push((int) -1)
0xd54: Push((int) 39219)
0xd55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd56: Pop(3)
0xd57: Push((int) 537374)
0xd58: Push((int) -1)
0xd59: Push((int) 39220)
0xd5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5b: Pop(3)
0xd5c: Return(); Pop(0)

0xd5d: Push((int) 39210)
0xd5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5f: IF (Stack[-1] == 0) GOTO 0xd6f; Pop(1)

0xd60: PushEmpty(string)
0xd61: Stack[-1] = "Neutral"
0xd62: Call2 0x896

0xd63: Pop(1)
0xd64: Push((int) 537364)
0xd65: @@ SetMessage(Stack[-1])
0xd66: Pop(1)
0xd67: @@ ClearReplies()
0xd68: Pop(0)
0xd69: Push((int) 537365)
0xd6a: Push((int) 39212)
0xd6b: Push((int) 39211)
0xd6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6d: Pop(3)
0xd6e: Return(); Pop(0)

0xd6f: Push((int) 39212)
0xd70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd71: IF (Stack[-1] == 0) GOTO 0xd86; Pop(1)

0xd72: PushEmpty(string)
0xd73: Stack[-1] = "Neutral"
0xd74: Call2 0x896

0xd75: Pop(1)
0xd76: Push((int) 537366)
0xd77: @@ SetMessage(Stack[-1])
0xd78: Pop(1)
0xd79: @@ ClearReplies()
0xd7a: Pop(0)
0xd7b: Push((int) 537367)
0xd7c: Push((int) -1)
0xd7d: Push((int) 39213)
0xd7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7f: Pop(3)
0xd80: Push((int) 537368)
0xd81: Push((int) -1)
0xd82: Push((int) 39214)
0xd83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd84: Pop(3)
0xd85: Return(); Pop(0)

0xd86: Push((int) 39199)
0xd87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd88: IF (Stack[-1] == 0) GOTO 0xd9d; Pop(1)

0xd89: PushEmpty(string)
0xd8a: Stack[-1] = "Neutral"
0xd8b: Call2 0x896

0xd8c: Pop(1)
0xd8d: Push((int) 537353)
0xd8e: @@ SetMessage(Stack[-1])
0xd8f: Pop(1)
0xd90: @@ ClearReplies()
0xd91: Pop(0)
0xd92: Push((int) 537354)
0xd93: Push((int) 39201)
0xd94: Push((int) 39200)
0xd95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd96: Pop(3)
0xd97: Push((int) 537358)
0xd98: Push((int) -1)
0xd99: Push((int) 39204)
0xd9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9b: Pop(3)
0xd9c: Return(); Pop(0)

0xd9d: Push((int) 39201)
0xd9e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9f: IF (Stack[-1] == 0) GOTO 0xdb4; Pop(1)

0xda0: PushEmpty(string)
0xda1: Stack[-1] = "Neutral"
0xda2: Call2 0x896

0xda3: Pop(1)
0xda4: Push((int) 537355)
0xda5: @@ SetMessage(Stack[-1])
0xda6: Pop(1)
0xda7: @@ ClearReplies()
0xda8: Pop(0)
0xda9: Push((int) 537356)
0xdaa: Push((int) -1)
0xdab: Push((int) 39202)
0xdac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdad: Pop(3)
0xdae: Push((int) 537357)
0xdaf: Push((int) -1)
0xdb0: Push((int) 39203)
0xdb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb2: Pop(3)
0xdb3: Return(); Pop(0)

0xdb4: Push((int) 39176)
0xdb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb6: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdb7: Push((int) 39188)
0xdb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb9: IF (Stack[-1] == 0) GOTO 0xdce; Pop(1)

0xdba: PushEmpty(string)
0xdbb: Stack[-1] = "Neutral"
0xdbc: Call2 0x896

0xdbd: Pop(1)
0xdbe: Push((int) 537342)
0xdbf: @@ SetMessage(Stack[-1])
0xdc0: Pop(1)
0xdc1: @@ ClearReplies()
0xdc2: Pop(0)
0xdc3: Push((int) 537343)
0xdc4: Push((int) 39190)
0xdc5: Push((int) 39189)
0xdc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc7: Pop(3)
0xdc8: Push((int) 537349)
0xdc9: Push((int) -1)
0xdca: Push((int) 39195)
0xdcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdcc: Pop(3)
0xdcd: Return(); Pop(0)

0xdce: Push((int) 39190)
0xdcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd0: IF (Stack[-1] == 0) GOTO 0xde5; Pop(1)

0xdd1: PushEmpty(string)
0xdd2: Stack[-1] = "Neutral"
0xdd3: Call2 0x896

0xdd4: Pop(1)
0xdd5: Push((int) 537344)
0xdd6: @@ SetMessage(Stack[-1])
0xdd7: Pop(1)
0xdd8: @@ ClearReplies()
0xdd9: Pop(0)
0xdda: Push((int) 537345)
0xddb: Push((int) 39192)
0xddc: Push((int) 39191)
0xddd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdde: Pop(3)
0xddf: Push((int) 537348)
0xde0: Push((int) -1)
0xde1: Push((int) 39194)
0xde2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde3: Pop(3)
0xde4: Return(); Pop(0)

0xde5: Push((int) 39192)
0xde6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde7: IF (Stack[-1] == 0) GOTO 0xdf7; Pop(1)

0xde8: PushEmpty(string)
0xde9: Stack[-1] = "Neutral"
0xdea: Call2 0x896

0xdeb: Pop(1)
0xdec: Push((int) 537346)
0xded: @@ SetMessage(Stack[-1])
0xdee: Pop(1)
0xdef: @@ ClearReplies()
0xdf0: Pop(0)
0xdf1: Push((int) 537347)
0xdf2: Push((int) -1)
0xdf3: Push((int) 39193)
0xdf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf5: Pop(3)
0xdf6: Return(); Pop(0)

0xdf7: Push((int) 39178)
0xdf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf9: IF (Stack[-1] == 0) GOTO 0xe0e; Pop(1)

0xdfa: PushEmpty(string)
0xdfb: Stack[-1] = "Neutral"
0xdfc: Call2 0x896

0xdfd: Pop(1)
0xdfe: Push((int) 537332)
0xdff: @@ SetMessage(Stack[-1])
0xe00: Pop(1)
0xe01: @@ ClearReplies()
0xe02: Pop(0)
0xe03: Push((int) 537333)
0xe04: Push((int) 39180)
0xe05: Push((int) 39179)
0xe06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe07: Pop(3)
0xe08: Push((int) 537336)
0xe09: Push((int) 39183)
0xe0a: Push((int) 39182)
0xe0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0c: Pop(3)
0xe0d: Return(); Pop(0)

0xe0e: Push((int) 39183)
0xe0f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe10: IF (Stack[-1] == 0) GOTO 0xe20; Pop(1)

0xe11: PushEmpty(string)
0xe12: Stack[-1] = "Neutral"
0xe13: Call2 0x896

0xe14: Pop(1)
0xe15: Push((int) 537337)
0xe16: @@ SetMessage(Stack[-1])
0xe17: Pop(1)
0xe18: @@ ClearReplies()
0xe19: Pop(0)
0xe1a: Push((int) 537338)
0xe1b: Push((int) 39185)
0xe1c: Push((int) 39184)
0xe1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1e: Pop(3)
0xe1f: Return(); Pop(0)

0xe20: Push((int) 39185)
0xe21: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe22: IF (Stack[-1] == 0) GOTO 0xe32; Pop(1)

0xe23: PushEmpty(string)
0xe24: Stack[-1] = "Neutral"
0xe25: Call2 0x896

0xe26: Pop(1)
0xe27: Push((int) 537339)
0xe28: @@ SetMessage(Stack[-1])
0xe29: Pop(1)
0xe2a: @@ ClearReplies()
0xe2b: Pop(0)
0xe2c: Push((int) 537340)
0xe2d: Push((int) 43752)
0xe2e: Push((int) 39186)
0xe2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe30: Pop(3)
0xe31: Return(); Pop(0)

0xe32: Push((int) 43752)
0xe33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe34: IF (Stack[-1] == 0) GOTO 0xe44; Pop(1)

0xe35: PushEmpty(string)
0xe36: Stack[-1] = "Neutral"
0xe37: Call2 0x896

0xe38: Pop(1)
0xe39: Push((int) 541583)
0xe3a: @@ SetMessage(Stack[-1])
0xe3b: Pop(1)
0xe3c: @@ ClearReplies()
0xe3d: Pop(0)
0xe3e: Push((int) 541584)
0xe3f: Push((int) -1)
0xe40: Push((int) 43753)
0xe41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe42: Pop(3)
0xe43: Return(); Pop(0)

0xe44: Push((int) 39180)
0xe45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe46: IF (Stack[-1] == 0) GOTO 0xe56; Pop(1)

0xe47: PushEmpty(string)
0xe48: Stack[-1] = "Neutral"
0xe49: Call2 0x896

0xe4a: Pop(1)
0xe4b: Push((int) 537334)
0xe4c: @@ SetMessage(Stack[-1])
0xe4d: Pop(1)
0xe4e: @@ ClearReplies()
0xe4f: Pop(0)
0xe50: Push((int) 537335)
0xe51: Push((int) -1)
0xe52: Push((int) 39181)
0xe53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe54: Pop(3)
0xe55: Return(); Pop(0)

0xe56: Push((int) 39122)
0xe57: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe58: IF (Stack[-1] == 0) GOTO 0xe59; Pop(1)

0xe59: Push((int) 39151)
0xe5a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5b: IF (Stack[-1] == 0) GOTO 0xe70; Pop(1)

0xe5c: PushEmpty(string)
0xe5d: Stack[-1] = "Neutral"
0xe5e: Call2 0x896

0xe5f: Pop(1)
0xe60: Push((int) 537305)
0xe61: @@ SetMessage(Stack[-1])
0xe62: Pop(1)
0xe63: @@ ClearReplies()
0xe64: Pop(0)
0xe65: Push((int) 537306)
0xe66: Push((int) 39153)
0xe67: Push((int) 39152)
0xe68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe69: Pop(3)
0xe6a: Push((int) 537318)
0xe6b: Push((int) 39165)
0xe6c: Push((int) 39164)
0xe6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6e: Pop(3)
0xe6f: Return(); Pop(0)

0xe70: Push((int) 39165)
0xe71: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe72: IF (Stack[-1] == 0) GOTO 0xe87; Pop(1)

0xe73: PushEmpty(string)
0xe74: Stack[-1] = "Neutral"
0xe75: Call2 0x896

0xe76: Pop(1)
0xe77: Push((int) 537319)
0xe78: @@ SetMessage(Stack[-1])
0xe79: Pop(1)
0xe7a: @@ ClearReplies()
0xe7b: Pop(0)
0xe7c: Push((int) 537320)
0xe7d: Push((int) -1)
0xe7e: Push((int) 39166)
0xe7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe80: Pop(3)
0xe81: Push((int) 537321)
0xe82: Push((int) 39168)
0xe83: Push((int) 39167)
0xe84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe85: Pop(3)
0xe86: Return(); Pop(0)

0xe87: Push((int) 39168)
0xe88: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe89: IF (Stack[-1] == 0) GOTO 0xe9e; Pop(1)

0xe8a: PushEmpty(string)
0xe8b: Stack[-1] = "Neutral"
0xe8c: Call2 0x896

0xe8d: Pop(1)
0xe8e: Push((int) 537322)
0xe8f: @@ SetMessage(Stack[-1])
0xe90: Pop(1)
0xe91: @@ ClearReplies()
0xe92: Pop(0)
0xe93: Push((int) 537323)
0xe94: Push((int) -1)
0xe95: Push((int) 39169)
0xe96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe97: Pop(3)
0xe98: Push((int) 537324)
0xe99: Push((int) 39171)
0xe9a: Push((int) 39170)
0xe9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9c: Pop(3)
0xe9d: Return(); Pop(0)

0xe9e: Push((int) 39171)
0xe9f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea0: IF (Stack[-1] == 0) GOTO 0xeb0; Pop(1)

0xea1: PushEmpty(string)
0xea2: Stack[-1] = "Neutral"
0xea3: Call2 0x896

0xea4: Pop(1)
0xea5: Push((int) 537325)
0xea6: @@ SetMessage(Stack[-1])
0xea7: Pop(1)
0xea8: @@ ClearReplies()
0xea9: Pop(0)
0xeaa: Push((int) 537326)
0xeab: Push((int) -1)
0xeac: Push((int) 39172)
0xead: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeae: Pop(3)
0xeaf: Return(); Pop(0)

0xeb0: Push((int) 39153)
0xeb1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb2: IF (Stack[-1] == 0) GOTO 0xec7; Pop(1)

0xeb3: PushEmpty(string)
0xeb4: Stack[-1] = "Neutral"
0xeb5: Call2 0x896

0xeb6: Pop(1)
0xeb7: Push((int) 537307)
0xeb8: @@ SetMessage(Stack[-1])
0xeb9: Pop(1)
0xeba: @@ ClearReplies()
0xebb: Pop(0)
0xebc: Push((int) 537308)
0xebd: Push((int) 39155)
0xebe: Push((int) 39154)
0xebf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec0: Pop(3)
0xec1: Push((int) 537317)
0xec2: Push((int) -1)
0xec3: Push((int) 39163)
0xec4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec5: Pop(3)
0xec6: Return(); Pop(0)

0xec7: Push((int) 39155)
0xec8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec9: IF (Stack[-1] == 0) GOTO 0xede; Pop(1)

0xeca: PushEmpty(string)
0xecb: Stack[-1] = "Neutral"
0xecc: Call2 0x896

0xecd: Pop(1)
0xece: Push((int) 537309)
0xecf: @@ SetMessage(Stack[-1])
0xed0: Pop(1)
0xed1: @@ ClearReplies()
0xed2: Pop(0)
0xed3: Push((int) 537310)
0xed4: Push((int) 39157)
0xed5: Push((int) 39156)
0xed6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed7: Pop(3)
0xed8: Push((int) 537313)
0xed9: Push((int) 39160)
0xeda: Push((int) 39159)
0xedb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xedc: Pop(3)
0xedd: Return(); Pop(0)

0xede: Push((int) 39160)
0xedf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee0: IF (Stack[-1] == 0) GOTO 0xef5; Pop(1)

0xee1: PushEmpty(string)
0xee2: Stack[-1] = "Neutral"
0xee3: Call2 0x896

0xee4: Pop(1)
0xee5: Push((int) 537314)
0xee6: @@ SetMessage(Stack[-1])
0xee7: Pop(1)
0xee8: @@ ClearReplies()
0xee9: Pop(0)
0xeea: Push((int) 537315)
0xeeb: Push((int) -1)
0xeec: Push((int) 39161)
0xeed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeee: Pop(3)
0xeef: Push((int) 537316)
0xef0: Push((int) -1)
0xef1: Push((int) 39162)
0xef2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef3: Pop(3)
0xef4: Return(); Pop(0)

0xef5: Push((int) 39157)
0xef6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef7: IF (Stack[-1] == 0) GOTO 0xf07; Pop(1)

0xef8: PushEmpty(string)
0xef9: Stack[-1] = "Neutral"
0xefa: Call2 0x896

0xefb: Pop(1)
0xefc: Push((int) 537311)
0xefd: @@ SetMessage(Stack[-1])
0xefe: Pop(1)
0xeff: @@ ClearReplies()
0xf00: Pop(0)
0xf01: Push((int) 537312)
0xf02: Push((int) -1)
0xf03: Push((int) 39158)
0xf04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf05: Pop(3)
0xf06: Return(); Pop(0)

0xf07: Push((int) 39140)
0xf08: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf09: IF (Stack[-1] == 0) GOTO 0xf1e; Pop(1)

0xf0a: PushEmpty(string)
0xf0b: Stack[-1] = "Neutral"
0xf0c: Call2 0x896

0xf0d: Pop(1)
0xf0e: Push((int) 537294)
0xf0f: @@ SetMessage(Stack[-1])
0xf10: Pop(1)
0xf11: @@ ClearReplies()
0xf12: Pop(0)
0xf13: Push((int) 537295)
0xf14: Push((int) 39142)
0xf15: Push((int) 39141)
0xf16: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf17: Pop(3)
0xf18: Push((int) 537301)
0xf19: Push((int) 39148)
0xf1a: Push((int) 39147)
0xf1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1c: Pop(3)
0xf1d: Return(); Pop(0)

0xf1e: Push((int) 39148)
0xf1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf20: IF (Stack[-1] == 0) GOTO 0xf30; Pop(1)

0xf21: PushEmpty(string)
0xf22: Stack[-1] = "Neutral"
0xf23: Call2 0x896

0xf24: Pop(1)
0xf25: Push((int) 537302)
0xf26: @@ SetMessage(Stack[-1])
0xf27: Pop(1)
0xf28: @@ ClearReplies()
0xf29: Pop(0)
0xf2a: Push((int) 537303)
0xf2b: Push((int) -1)
0xf2c: Push((int) 39149)
0xf2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2e: Pop(3)
0xf2f: Return(); Pop(0)

0xf30: Push((int) 39142)
0xf31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf32: IF (Stack[-1] == 0) GOTO 0xf42; Pop(1)

0xf33: PushEmpty(string)
0xf34: Stack[-1] = "Neutral"
0xf35: Call2 0x896

0xf36: Pop(1)
0xf37: Push((int) 537296)
0xf38: @@ SetMessage(Stack[-1])
0xf39: Pop(1)
0xf3a: @@ ClearReplies()
0xf3b: Pop(0)
0xf3c: Push((int) 537297)
0xf3d: Push((int) 39144)
0xf3e: Push((int) 39143)
0xf3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf40: Pop(3)
0xf41: Return(); Pop(0)

0xf42: Push((int) 39144)
0xf43: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf44: IF (Stack[-1] == 0) GOTO 0xf59; Pop(1)

0xf45: PushEmpty(string)
0xf46: Stack[-1] = "Neutral"
0xf47: Call2 0x896

0xf48: Pop(1)
0xf49: Push((int) 537298)
0xf4a: @@ SetMessage(Stack[-1])
0xf4b: Pop(1)
0xf4c: @@ ClearReplies()
0xf4d: Pop(0)
0xf4e: Push((int) 537299)
0xf4f: Push((int) -1)
0xf50: Push((int) 39145)
0xf51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf52: Pop(3)
0xf53: Push((int) 537300)
0xf54: Push((int) -1)
0xf55: Push((int) 39146)
0xf56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf57: Pop(3)
0xf58: Return(); Pop(0)

0xf59: Push((int) 39124)
0xf5a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5b: IF (Stack[-1] == 0) GOTO 0xf70; Pop(1)

0xf5c: PushEmpty(string)
0xf5d: Stack[-1] = "Neutral"
0xf5e: Call2 0x896

0xf5f: Pop(1)
0xf60: Push((int) 537280)
0xf61: @@ SetMessage(Stack[-1])
0xf62: Pop(1)
0xf63: @@ ClearReplies()
0xf64: Pop(0)
0xf65: Push((int) 537281)
0xf66: Push((int) 39126)
0xf67: Push((int) 39125)
0xf68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf69: Pop(3)
0xf6a: Push((int) 537288)
0xf6b: Push((int) 39133)
0xf6c: Push((int) 39132)
0xf6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6e: Pop(3)
0xf6f: Return(); Pop(0)

0xf70: Push((int) 39133)
0xf71: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf72: IF (Stack[-1] == 0) GOTO 0xf87; Pop(1)

0xf73: PushEmpty(string)
0xf74: Stack[-1] = "Neutral"
0xf75: Call2 0x896

0xf76: Pop(1)
0xf77: Push((int) 537289)
0xf78: @@ SetMessage(Stack[-1])
0xf79: Pop(1)
0xf7a: @@ ClearReplies()
0xf7b: Pop(0)
0xf7c: Push((int) 537290)
0xf7d: Push((int) 39126)
0xf7e: Push((int) 39134)
0xf7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf80: Pop(3)
0xf81: Push((int) 537291)
0xf82: Push((int) -1)
0xf83: Push((int) 39136)
0xf84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf85: Pop(3)
0xf86: Return(); Pop(0)

0xf87: Push((int) 39126)
0xf88: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf89: IF (Stack[-1] == 0) GOTO 0xf9e; Pop(1)

0xf8a: PushEmpty(string)
0xf8b: Stack[-1] = "Neutral"
0xf8c: Call2 0x896

0xf8d: Pop(1)
0xf8e: Push((int) 537282)
0xf8f: @@ SetMessage(Stack[-1])
0xf90: Pop(1)
0xf91: @@ ClearReplies()
0xf92: Pop(0)
0xf93: Push((int) 537283)
0xf94: Push((int) 39128)
0xf95: Push((int) 39127)
0xf96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf97: Pop(3)
0xf98: Push((int) 537287)
0xf99: Push((int) -1)
0xf9a: Push((int) 39131)
0xf9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9c: Pop(3)
0xf9d: Return(); Pop(0)

0xf9e: Push((int) 39128)
0xf9f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa0: IF (Stack[-1] == 0) GOTO 0xfb5; Pop(1)

0xfa1: PushEmpty(string)
0xfa2: Stack[-1] = "Neutral"
0xfa3: Call2 0x896

0xfa4: Pop(1)
0xfa5: Push((int) 537284)
0xfa6: @@ SetMessage(Stack[-1])
0xfa7: Pop(1)
0xfa8: @@ ClearReplies()
0xfa9: Pop(0)
0xfaa: Push((int) 537285)
0xfab: Push((int) -1)
0xfac: Push((int) 39129)
0xfad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfae: Pop(3)
0xfaf: Push((int) 537286)
0xfb0: Push((int) -1)
0xfb1: Push((int) 39130)
0xfb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb3: Pop(3)
0xfb4: Return(); Pop(0)

0xfb5: Push((int) 39086)
0xfb6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb7: IF (Stack[-1] == 0) GOTO 0xfdb; Pop(1)

0xfb8: PushEmpty(string)
0xfb9: Stack[-1] = "Neutral"
0xfba: Call2 0x896

0xfbb: Pop(1)
0xfbc: Push((int) 537243)
0xfbd: @@ SetMessage(Stack[-1])
0xfbe: Pop(1)
0xfbf: @@ ClearReplies()
0xfc0: Pop(0)
0xfc1: Push((int) 537244)
0xfc2: Push((int) 39088)
0xfc3: Push((int) 39087)
0xfc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc5: Pop(3)
0xfc6: Push((int) 537254)
0xfc7: Push((int) 39099)
0xfc8: Push((int) 39098)
0xfc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfca: Pop(3)
0xfcb: Push((int) 537264)
0xfcc: Push((int) 39109)
0xfcd: Push((int) 39108)
0xfce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfcf: Pop(3)
0xfd0: Push((int) 537275)
0xfd1: Push((int) -1)
0xfd2: Push((int) 39119)
0xfd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd4: Pop(3)
0xfd5: Push((int) 537276)
0xfd6: Push((int) -1)
0xfd7: Push((int) 39120)
0xfd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd9: Pop(3)
0xfda: Return(); Pop(0)

0xfdb: Push((int) 39109)
0xfdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfdd: IF (Stack[-1] == 0) GOTO 0xff2; Pop(1)

0xfde: PushEmpty(string)
0xfdf: Stack[-1] = "Neutral"
0xfe0: Call2 0x896

0xfe1: Pop(1)
0xfe2: Push((int) 537265)
0xfe3: @@ SetMessage(Stack[-1])
0xfe4: Pop(1)
0xfe5: @@ ClearReplies()
0xfe6: Pop(0)
0xfe7: Push((int) 537266)
0xfe8: Push((int) 44319)
0xfe9: Push((int) 39110)
0xfea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfeb: Pop(3)
0xfec: Push((int) 537267)
0xfed: Push((int) 39112)
0xfee: Push((int) 39111)
0xfef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff0: Pop(3)
0xff1: Return(); Pop(0)

0xff2: Push((int) 39112)
0xff3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff4: IF (Stack[-1] == 0) GOTO 0x1009; Pop(1)

0xff5: PushEmpty(string)
0xff6: Stack[-1] = "Neutral"
0xff7: Call2 0x896

0xff8: Pop(1)
0xff9: Push((int) 537268)
0xffa: @@ SetMessage(Stack[-1])
0xffb: Pop(1)
0xffc: @@ ClearReplies()
0xffd: Pop(0)
0xffe: Push((int) 537269)
0xfff: Push((int) 39114)
0x1000: Push((int) 39113)
0x1001: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1002: Pop(3)
0x1003: Push((int) 537273)
0x1004: Push((int) -1)
0x1005: Push((int) 39117)
0x1006: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1007: Pop(3)
0x1008: Return(); Pop(0)

0x1009: Push((int) 39114)
0x100a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100b: IF (Stack[-1] == 0) GOTO 0x1020; Pop(1)

0x100c: PushEmpty(string)
0x100d: Stack[-1] = "Neutral"
0x100e: Call2 0x896

0x100f: Pop(1)
0x1010: Push((int) 537270)
0x1011: @@ SetMessage(Stack[-1])
0x1012: Pop(1)
0x1013: @@ ClearReplies()
0x1014: Pop(0)
0x1015: Push((int) 537271)
0x1016: Push((int) -1)
0x1017: Push((int) 39115)
0x1018: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1019: Pop(3)
0x101a: Push((int) 537272)
0x101b: Push((int) -1)
0x101c: Push((int) 39116)
0x101d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101e: Pop(3)
0x101f: Return(); Pop(0)

0x1020: Push((int) 44319)
0x1021: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1022: IF (Stack[-1] == 0) GOTO 0x1037; Pop(1)

0x1023: PushEmpty(string)
0x1024: Stack[-1] = "Neutral"
0x1025: Call2 0x896

0x1026: Pop(1)
0x1027: Push((int) 542040)
0x1028: @@ SetMessage(Stack[-1])
0x1029: Pop(1)
0x102a: @@ ClearReplies()
0x102b: Pop(0)
0x102c: Push((int) 542041)
0x102d: Push((int) -1)
0x102e: Push((int) 44320)
0x102f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1030: Pop(3)
0x1031: Push((int) 542042)
0x1032: Push((int) -1)
0x1033: Push((int) 44321)
0x1034: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1035: Pop(3)
0x1036: Return(); Pop(0)

0x1037: Push((int) 39099)
0x1038: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1039: IF (Stack[-1] == 0) GOTO 0x104e; Pop(1)

0x103a: PushEmpty(string)
0x103b: Stack[-1] = "Neutral"
0x103c: Call2 0x896

0x103d: Pop(1)
0x103e: Push((int) 537255)
0x103f: @@ SetMessage(Stack[-1])
0x1040: Pop(1)
0x1041: @@ ClearReplies()
0x1042: Pop(0)
0x1043: Push((int) 537256)
0x1044: Push((int) 39101)
0x1045: Push((int) 39100)
0x1046: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1047: Pop(3)
0x1048: Push((int) 537260)
0x1049: Push((int) 39105)
0x104a: Push((int) 39104)
0x104b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104c: Pop(3)
0x104d: Return(); Pop(0)

0x104e: Push((int) 39105)
0x104f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1050: IF (Stack[-1] == 0) GOTO 0x1065; Pop(1)

0x1051: PushEmpty(string)
0x1052: Stack[-1] = "Neutral"
0x1053: Call2 0x896

0x1054: Pop(1)
0x1055: Push((int) 537261)
0x1056: @@ SetMessage(Stack[-1])
0x1057: Pop(1)
0x1058: @@ ClearReplies()
0x1059: Pop(0)
0x105a: Push((int) 537262)
0x105b: Push((int) -1)
0x105c: Push((int) 39106)
0x105d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105e: Pop(3)
0x105f: Push((int) 537263)
0x1060: Push((int) -1)
0x1061: Push((int) 39107)
0x1062: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1063: Pop(3)
0x1064: Return(); Pop(0)

0x1065: Push((int) 39101)
0x1066: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1067: IF (Stack[-1] == 0) GOTO 0x107c; Pop(1)

0x1068: PushEmpty(string)
0x1069: Stack[-1] = "Neutral"
0x106a: Call2 0x896

0x106b: Pop(1)
0x106c: Push((int) 537257)
0x106d: @@ SetMessage(Stack[-1])
0x106e: Pop(1)
0x106f: @@ ClearReplies()
0x1070: Pop(0)
0x1071: Push((int) 537258)
0x1072: Push((int) -1)
0x1073: Push((int) 39102)
0x1074: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1075: Pop(3)
0x1076: Push((int) 537259)
0x1077: Push((int) -1)
0x1078: Push((int) 39103)
0x1079: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107a: Pop(3)
0x107b: Return(); Pop(0)

0x107c: Push((int) 39088)
0x107d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107e: IF (Stack[-1] == 0) GOTO 0x1093; Pop(1)

0x107f: PushEmpty(string)
0x1080: Stack[-1] = "Neutral"
0x1081: Call2 0x896

0x1082: Pop(1)
0x1083: Push((int) 537245)
0x1084: @@ SetMessage(Stack[-1])
0x1085: Pop(1)
0x1086: @@ ClearReplies()
0x1087: Pop(0)
0x1088: Push((int) 537246)
0x1089: Push((int) 39090)
0x108a: Push((int) 39089)
0x108b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108c: Pop(3)
0x108d: Push((int) 537253)
0x108e: Push((int) 39090)
0x108f: Push((int) 39096)
0x1090: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1091: Pop(3)
0x1092: Return(); Pop(0)

0x1093: Push((int) 39090)
0x1094: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1095: IF (Stack[-1] == 0) GOTO 0x10aa; Pop(1)

0x1096: PushEmpty(string)
0x1097: Stack[-1] = "Neutral"
0x1098: Call2 0x896

0x1099: Pop(1)
0x109a: Push((int) 537247)
0x109b: @@ SetMessage(Stack[-1])
0x109c: Pop(1)
0x109d: @@ ClearReplies()
0x109e: Pop(0)
0x109f: Push((int) 537248)
0x10a0: Push((int) 39092)
0x10a1: Push((int) 39091)
0x10a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a3: Pop(3)
0x10a4: Push((int) 537252)
0x10a5: Push((int) -1)
0x10a6: Push((int) 39095)
0x10a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a8: Pop(3)
0x10a9: Return(); Pop(0)

0x10aa: Push((int) 39092)
0x10ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ac: IF (Stack[-1] == 0) GOTO 0x10c1; Pop(1)

0x10ad: PushEmpty(string)
0x10ae: Stack[-1] = "Neutral"
0x10af: Call2 0x896

0x10b0: Pop(1)
0x10b1: Push((int) 537249)
0x10b2: @@ SetMessage(Stack[-1])
0x10b3: Pop(1)
0x10b4: @@ ClearReplies()
0x10b5: Pop(0)
0x10b6: Push((int) 537250)
0x10b7: Push((int) -1)
0x10b8: Push((int) 39093)
0x10b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ba: Pop(3)
0x10bb: Push((int) 537251)
0x10bc: Push((int) -1)
0x10bd: Push((int) 39094)
0x10be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10bf: Pop(3)
0x10c0: Return(); Pop(0)

0x10c1: Push((int) 45672)
0x10c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c3: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10c4: Push((int) 45678)
0x10c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c6: IF (Stack[-1] == 0) GOTO 0x10db; Pop(1)

0x10c7: PushEmpty(string)
0x10c8: Stack[-1] = "Neutral"
0x10c9: Call2 0x896

0x10ca: Pop(1)
0x10cb: Push((int) 543222)
0x10cc: @@ SetMessage(Stack[-1])
0x10cd: Pop(1)
0x10ce: @@ ClearReplies()
0x10cf: Pop(0)
0x10d0: Push((int) 543223)
0x10d1: Push((int) -1)
0x10d2: Push((int) 45679)
0x10d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d4: Pop(3)
0x10d5: Push((int) 543225)
0x10d6: Push((int) 45682)
0x10d7: Push((int) 45681)
0x10d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d9: Pop(3)
0x10da: Return(); Pop(0)

0x10db: Push((int) 45682)
0x10dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10dd: IF (Stack[-1] == 0) GOTO 0x10f2; Pop(1)

0x10de: PushEmpty(string)
0x10df: Stack[-1] = "Neutral"
0x10e0: Call2 0x896

0x10e1: Pop(1)
0x10e2: Push((int) 543226)
0x10e3: @@ SetMessage(Stack[-1])
0x10e4: Pop(1)
0x10e5: @@ ClearReplies()
0x10e6: Pop(0)
0x10e7: Push((int) 543227)
0x10e8: Push((int) -1)
0x10e9: Push((int) 45683)
0x10ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10eb: Pop(3)
0x10ec: Push((int) 543228)
0x10ed: Push((int) 45686)
0x10ee: Push((int) 45684)
0x10ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f0: Pop(3)
0x10f1: Return(); Pop(0)

0x10f2: Push((int) 45686)
0x10f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f4: IF (Stack[-1] == 0) GOTO 0x1109; Pop(1)

0x10f5: PushEmpty(string)
0x10f6: Stack[-1] = "Neutral"
0x10f7: Call2 0x896

0x10f8: Pop(1)
0x10f9: Push((int) 543230)
0x10fa: @@ SetMessage(Stack[-1])
0x10fb: Pop(1)
0x10fc: @@ ClearReplies()
0x10fd: Pop(0)
0x10fe: Push((int) 543231)
0x10ff: Push((int) -1)
0x1100: Push((int) 45687)
0x1101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1102: Pop(3)
0x1103: Push((int) 543232)
0x1104: Push((int) -1)
0x1105: Push((int) 45688)
0x1106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1107: Pop(3)
0x1108: Return(); Pop(0)

0x1109: Push((int) 45690)
0x110a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110b: IF (Stack[-1] == 0) GOTO 0x110c; Pop(1)

0x110c: Push((int) 45697)
0x110d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110e: IF (Stack[-1] == 0) GOTO 0x110f; Pop(1)

0x110f: Push((int) 45700)
0x1110: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1111: IF (Stack[-1] == 0) GOTO 0x1126; Pop(1)

0x1112: PushEmpty(string)
0x1113: Stack[-1] = "Neutral"
0x1114: Call2 0x896

0x1115: Pop(1)
0x1116: Push((int) 543244)
0x1117: @@ SetMessage(Stack[-1])
0x1118: Pop(1)
0x1119: @@ ClearReplies()
0x111a: Pop(0)
0x111b: Push((int) 543245)
0x111c: Push((int) -1)
0x111d: Push((int) 45701)
0x111e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111f: Pop(3)
0x1120: Push((int) 543246)
0x1121: Push((int) -1)
0x1122: Push((int) 45702)
0x1123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1124: Pop(3)
0x1125: Return(); Pop(0)

0x1126: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1127: PushEmpty(bool)
0x1128: Call2 0x15e5

0x1129: Pop(0)
0x112a: IF (Stack[-1] == 0) GOTO 0x112e; Pop(1)

0x112b: @ lshStopAnimation()
0x112c: Pop(0)
0x112d: GOTO 0x1130

0x112e: @ StopAnimation()
0x112f: Pop(0)
0x1130: Return(); Pop(0)

0x1131: GOTO 0x8ad

0x1132: Return(); Pop(0)

0x1133: PushEmpty(cvector, cvector)
0x1134: @ GetPosition(Stack[-1])
0x1135: Pop(0)
0x1136: Stack[-3] = Stack[-1]
0x1137: Return(); Pop(2)

0x1138: PushEmpty(cvector, cvector, cvector, cvector)
0x1139: @ GetPosition(Stack[-2])
0x113a: Pop(0)
0x113b: @@ GetPosition(Stack[-1])
0x113c: Pop(0)
0x113d: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x113e: Return(); Pop(4)

0x113f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1140: @ GetPosition(Stack[-3])
0x1141: Pop(0)
0x1142: @@ GetPosition(Stack[-2])
0x1143: Pop(0)
0x1144: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1145: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1146: Return(); Pop(6)

0x1147: PushEmpty(bool, bool)
0x1148: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1149: Pop(0)
0x114a: Stack[-4] = Stack[-1]
0x114b: Return(); Pop(2)

0x114c: PushEmpty(bool, bool)
0x114d: Push("HasProperty")
0x114e: Push((int) 2)
0x114f: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1150: Pop(1); Push((bool) Stack[-1] == 0)
0x1151: IF (Stack[-1] == 0) GOTO 0x1154; Pop(1)

0x1152: Stack[-5] = (bool) 0
0x1153: Return(); Pop(2)

0x1154: @@ HasProperty(Stack[-3], Stack[-1])
0x1155: Pop(0)
0x1156: Stack[-5] = Stack[-1]
0x1157: Return(); Pop(2)

0x1158: PushEmpty(bool, bool)
0x1159: @@ IsDead(Stack[-1])
0x115a: Pop(0)
0x115b: Stack[-4] = Stack[-1]
0x115c: Return(); Pop(2)

0x115d: PushEmpty(object, object, object, object)
0x115e: Pop(0); Push((bool) Stack[-5] == 0)
0x115f: IF (Stack[-1] == 0) GOTO 0x1162; Pop(1)

0x1160: Stack[-6] = (bool) 0
0x1161: Return(); Pop(4)

0x1162: PushEmpty(bool)
0x1163: Stack[-1] = (bool) 0
0x1164: Push("IsDead")
0x1165: Push((int) 1)
0x1166: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x1167: IF (Stack[-1] == 0) GOTO 0x116e; Pop(1)

0x1168: PushEmpty(bool, object)
0x1169: Stack[-1] = Stack[-8]
0x116a: Call2 0x1158

0x116b: Pop(1)
0x116c: IF (Stack[-1] == 0) GOTO 0x116e; Pop(1)

0x116d: Stack[-1] = (bool) 1
0x116e: IF (Stack[-1] == 0) GOTO 0x1171; Pop(1)

0x116f: Stack[-6] = (bool) 0
0x1170: Return(); Pop(4)

0x1171: @ GetScene(Stack[-2])
0x1172: Pop(0)
0x1173: Pop(0); Push((bool) Stack[-2] == 0)
0x1174: IF (Stack[-1] == 0) GOTO 0x1177; Pop(1)

0x1175: Stack[-6] = (bool) 0
0x1176: Return(); Pop(4)

0x1177: @@ GetScene(Stack[-1])
0x1178: Pop(0)
0x1179: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x117a: IF (Stack[-1] == 0) GOTO 0x117d; Pop(1)

0x117b: Stack[-6] = (bool) 0
0x117c: Return(); Pop(4)

0x117d: Stack[-6] = (bool) 1
0x117e: Return(); Pop(4)

0x117f: Stack[-1] = 0
0x1180: Stack[-2] = 0
0x1181: PushEmpty(int, int)
0x1182: PushEmpty(bool, object)
0x1183: Stack[-1] = Stack[-5]
0x1184: Call2 0x115d

0x1185: Pop(1)
0x1186: Pop(1); Push((bool) Stack[-1] == 0)
0x1187: IF (Stack[-1] == 0) GOTO 0x118a; Pop(1)

0x1188: Stack[-4] = (bool) 0
0x1189: Return(); Pop(2)

0x118a: PushEmpty(bool, object, string)
0x118b: Stack[-2] = Stack[-6]
0x118c: Stack[-1] = "noaccess"
0x118d: Call2 0x114c

0x118e: Pop(2)
0x118f: Pop(1); Push((bool) Stack[-1] == 0)
0x1190: IF (Stack[-1] == 0) GOTO 0x1193; Pop(1)

0x1191: Stack[-4] = (bool) 1
0x1192: Return(); Pop(2)

0x1193: Push("noaccess")
0x1194: @@ GetProperty(Stack[-1], Stack[-2])
0x1195: Pop(1)
0x1196: Push((int) 0)
0x1197: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x1198: Return(); Pop(2)

0x1199: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x119a: @@ GetPosition(Stack[-3])
0x119b: Pop(0)
0x119c: @ GetPosition(Stack[-2])
0x119d: Pop(0)
0x119e: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x119f: Push(CvectorIndex(Stack[-1], 0))
0x11a0: Push(CvectorIndex(Stack[-2], 2))
0x11a1: @ RotateAsync(Stack[-2], Stack[-1])
0x11a2: Pop(2)
0x11a3: Return(); Pop(6)

0x11a4: PushEmpty(bool, bool)
0x11a5: @ IsLoaded(Stack[-1])
0x11a6: Pop(0)
0x11a7: Stack[-3] = Stack[-1]
0x11a8: Return(); Pop(2)

0x11a9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x11aa: @@ GetPosition(Stack[-8])
0x11ab: Pop(0)
0x11ac: @@ GetEyesHeight(Stack[-9])
0x11ad: Pop(0)
0x11ae: Push(CvectorIndex(Stack[-8], 1))
0x11af: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x11b0: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x11b1: @ GetPosition(Stack[-7])
0x11b2: Pop(0)
0x11b3: @ GetEyesHeight(Stack[-9])
0x11b4: Pop(0)
0x11b5: Push(CvectorIndex(Stack[-7], 1))
0x11b6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x11b7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x11b8: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x11b9: Push(CvectorIndex(Stack[-6], 1))
0x11ba: Stack[-1] = (int) 0
0x11bb: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x11bc: Pop(0); Push(Stack[-6] | Stack[-6]);
0x11bd: Pop(1); Push(Sqrt(Stack[-1]))
0x11be: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x11bf: Stack[-5] = -Stack[-6]; Pop(0);
0x11c0: Pop(0); Push(Stack[-6] * Stack[-19]);
0x11c1: PushEmpty(cvector, cvector)
0x11c2: Push(CVector(0.0, 1.0, 0.0))
0x11c3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x11c4: Call2 0x128a

0x11c5: Pop(1)
0x11c6: Push((int) 25)
0x11c7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11c8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11c9: Push(CVector(0.0, 10.0, 0.0))
0x11ca: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x11cb: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x11cc: @ IsOverrideActive(Stack[-2])
0x11cd: Pop(0)
0x11ce: Push(Stack[-2])
0x11cf: IF (Stack[-1] == 0) GOTO 0x11d2; Pop(1)

0x11d0: Stack[-21] = (bool) 0
0x11d1: Return(); Pop(18)

0x11d2: @ StopWorld()
0x11d3: Pop(0)
0x11d4: @ CameraTransit(Stack[-3], Stack[-5])
0x11d5: Pop(0)
0x11d6: Push(CvectorIndex(Stack[-4], 0))
0x11d7: Push(CvectorIndex(Stack[-5], 2))
0x11d8: @ Rotate(Stack[-2], Stack[-1])
0x11d9: Pop(2)
0x11da: PushEmpty(bool)
0x11db: Call2 0x15e5

0x11dc: Pop(0)
0x11dd: IF (Stack[-1] == 0) GOTO 0x11df; Pop(1)

0x11de: GOTO 0x11e7

0x11df: Push("head")
0x11e0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x11e1: Pop(1)
0x11e2: Push(Stack[-1])
0x11e3: IF (Stack[-1] == 0) GOTO 0x11e7; Pop(1)

0x11e4: Push("head")
0x11e5: @ LookAsyncCamera(Stack[-1])
0x11e6: Pop(1)
0x11e7: @ CameraWaitForPlayFinish()
0x11e8: Pop(0)
0x11e9: @ ResumeWorld()
0x11ea: Pop(0)
0x11eb: Stack[-21] = (bool) 1
0x11ec: Return(); Pop(18)

0x11ed: PushEmpty(bool, bool)
0x11ee: @ CameraSwitchToNormal()
0x11ef: Pop(0)
0x11f0: PushEmpty(bool)
0x11f1: Call2 0x15e5

0x11f2: Pop(0)
0x11f3: IF (Stack[-1] == 0) GOTO 0x11f5; Pop(1)

0x11f4: GOTO 0x11fd

0x11f5: Push("head")
0x11f6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x11f7: Pop(1)
0x11f8: Push(Stack[-1])
0x11f9: IF (Stack[-1] == 0) GOTO 0x11fd; Pop(1)

0x11fa: Push("head")
0x11fb: @ UnlookAsync(Stack[-1])
0x11fc: Pop(1)
0x11fd: Return(); Pop(2)

0x11fe: PushEmpty()
0x11ff: PushEmpty(bool, object, float)
0x1200: Stack[-2] = Stack[-4]
0x1201: Stack[-1] = (int) 70
0x1202: Call2 0x1206

0x1203: Stack[-5] = Stack[-3]
0x1204: Pop(3)
0x1205: Return(); Pop(0)

0x1206: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1207: @@ GetPosition(Stack[-7])
0x1208: Pop(0)
0x1209: @@ GetEyesHeight(Stack[-8])
0x120a: Pop(0)
0x120b: Push(CvectorIndex(Stack[-7], 1))
0x120c: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x120d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x120e: @ GetPosition(Stack[-6])
0x120f: Pop(0)
0x1210: @ GetEyesHeight(Stack[-8])
0x1211: Pop(0)
0x1212: Push(CvectorIndex(Stack[-6], 1))
0x1213: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1214: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1215: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1216: Push(CvectorIndex(Stack[-5], 1))
0x1217: Stack[-1] = (int) 0
0x1218: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1219: Pop(0); Push(Stack[-5] | Stack[-5]);
0x121a: Pop(1); Push(Sqrt(Stack[-1]))
0x121b: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x121c: Stack[-4] = -Stack[-5]; Pop(0);
0x121d: Pop(0); Push(Stack[-5] * Stack[-17]);
0x121e: Push(CVector(0.0, 10.0, 0.0))
0x121f: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1220: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1221: @ IsOverrideActive(Stack[-1])
0x1222: Pop(0)
0x1223: Push(Stack[-1])
0x1224: IF (Stack[-1] == 0) GOTO 0x1227; Pop(1)

0x1225: Stack[-19] = (bool) 0
0x1226: Return(); Pop(16)

0x1227: @ StopWorld()
0x1228: Pop(0)
0x1229: @ CameraTransit(Stack[-2], Stack[-4])
0x122a: Pop(0)
0x122b: Push(CvectorIndex(Stack[-3], 0))
0x122c: Push(CvectorIndex(Stack[-4], 2))
0x122d: @ Rotate(Stack[-2], Stack[-1])
0x122e: Pop(2)
0x122f: @ CameraWaitForPlayFinish()
0x1230: Pop(0)
0x1231: @ ResumeWorld()
0x1232: Pop(0)
0x1233: Stack[-19] = (bool) 1
0x1234: Return(); Pop(16)

0x1235: PushEmpty()
0x1236: @ CameraSwitchToNormal()
0x1237: Pop(0)
0x1238: Return(); Pop(0)

0x1239: PushEmpty(bool, float, float, bool, float, float)
0x123a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x123b: Pop(0)
0x123c: Push(Stack[-3])
0x123d: IF (Stack[-1] == 0) GOTO 0x1244; Pop(1)

0x123e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x123f: Pop(0)
0x1240: Push((bool) 0)
0x1241: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1242: Pop(1)
0x1243: GOTO 0x1248

0x1244: Push("Can't find lsh animation : ")
0x1245: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1246: @ Trace(Stack[-1])
0x1247: Pop(1)
0x1248: Return(); Pop(6)

0x1249: PushEmpty(bool, float, float, bool, float, float)
0x124a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x124b: Pop(0)
0x124c: Push(Stack[-3])
0x124d: IF (Stack[-1] == 0) GOTO 0x1253; Pop(1)

0x124e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x124f: Pop(0)
0x1250: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1251: Pop(0)
0x1252: GOTO 0x1257

0x1253: Push("Can't find lsh animation : ")
0x1254: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1255: @ Trace(Stack[-1])
0x1256: Pop(1)
0x1257: Return(); Pop(6)

0x1258: PushEmpty(float, cvector, float, cvector)
0x1259: @@ GetEyesHeight(Stack[-2])
0x125a: Pop(0)
0x125b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x125c: Push(CvectorIndex(Stack[-1], 1))
0x125d: Stack[-1] = Stack[-3]
0x125e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x125f: Push("head")
0x1260: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x1261: Pop(1)
0x1262: Return(); Pop(4)

0x1263: PushEmpty(bool)
0x1264: Call2 0x15e5

0x1265: Pop(0)
0x1266: IF (Stack[-1] == 0) GOTO 0x1269; Pop(1)

0x1267: @ lshStopSpeech()
0x1268: Pop(0)
0x1269: Return(); Pop(0)

0x126a: PushEmpty(bool, bool)
0x126b: PushEmpty(bool, int, int)
0x126c: Stack[-2] = Stack[-7]
0x126d: Stack[-1] = Stack[-6]
0x126e: Call2 0x1294

0x126f: Pop(2)
0x1270: IF (Stack[-1] == 0) GOTO 0x1274; Pop(1)

0x1271: Push((int) 0)
0x1272: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x1273: Pop(1)
0x1274: Return(); Pop(2)

0x1275: PushEmpty(int, bool, int, bool)
0x1276: PushEmpty(bool, int, int)
0x1277: Stack[-2] = Stack[-10]
0x1278: Stack[-1] = Stack[-9]
0x1279: Call2 0x1294

0x127a: Pop(2)
0x127b: IF (Stack[-1] == 0) GOTO 0x1283; Pop(1)

0x127c: @ irand(Stack[-2], Stack[-5])
0x127d: Pop(0)
0x127e: Push((int) 0)
0x127f: Push((int) 1)
0x1280: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1281: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x1282: Pop(2)
0x1283: Return(); Pop(4)

0x1284: PushEmpty(object, object)
0x1285: @ self(Stack[-1])
0x1286: Pop(0)
0x1287: Stack[-3] = Stack[-1]
0x1288: Return(); Pop(2)

0x1289: Stack[-1] = 0
0x128a: PushEmpty(float, float)
0x128b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x128c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x128d: Push((float)0.0)
0x128e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x128f: IF (Stack[-1] == 0) GOTO 0x1292; Pop(1)

0x1290: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1291: Return(); Pop(2)

0x1292: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1293: Return(); Pop(2)

0x1294: PushEmpty(int, int)
0x1295: @ irand(Stack[-1], Stack[-3])
0x1296: Pop(0)
0x1297: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x1298: Return(); Pop(2)

0x1299: PushEmpty()
0x129a: Pop(0); Push(Stack[-2] | Stack[-1]);
0x129b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x129c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x129d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x129e: Pop(1); Push(Sqrt(Stack[-1]))
0x129f: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x12a0: Return(); Pop(0)

0x12a1: PushEmpty()
0x12a2: Push(CvectorIndex(Stack[-2], 0))
0x12a3: Push(CvectorIndex(Stack[-2], 0))
0x12a4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12a5: Push(CvectorIndex(Stack[-3], 2))
0x12a6: Push(CvectorIndex(Stack[-3], 2))
0x12a7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12a8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12a9: Return(); Pop(0)

0x12aa: PushEmpty()
0x12ab: Push(CvectorIndex(Stack[-1], 0))
0x12ac: Push(CvectorIndex(Stack[-2], 0))
0x12ad: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12ae: Push(CvectorIndex(Stack[-2], 2))
0x12af: Push(CvectorIndex(Stack[-3], 2))
0x12b0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12b1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12b2: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x12b3: Return(); Pop(0)

0x12b4: PushEmpty()
0x12b5: PushEmpty(float, cvector, cvector)
0x12b6: Stack[-2] = Stack[-5]
0x12b7: Stack[-1] = Stack[-4]
0x12b8: Call2 0x12a1

0x12b9: Pop(2)
0x12ba: PushEmpty(float, cvector)
0x12bb: Stack[-1] = Stack[-5]
0x12bc: Call2 0x12aa

0x12bd: Pop(1)
0x12be: PushEmpty(float, cvector)
0x12bf: Stack[-1] = Stack[-5]
0x12c0: Call2 0x12aa

0x12c1: Pop(1)
0x12c2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12c3: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x12c4: Return(); Pop(0)

0x12c5: PushEmpty(int, int)
0x12c6: @ GetVariable(Stack[-3], Stack[-1])
0x12c7: Pop(0)
0x12c8: Stack[-4] = Stack[-1]
0x12c9: Return(); Pop(2)

0x12ca: PushEmpty(float, float)
0x12cb: @ GetGameTime(Stack[-1])
0x12cc: Pop(0)
0x12cd: Push((int) 1)
0x12ce: PushEmpty(int)
0x12cf: Push((int) 24)
0x12d0: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x12d1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12d2: Return(); Pop(2)

0x12d3: PushEmpty(float, float)
0x12d4: @ GetGameTime(Stack[-1])
0x12d5: Pop(0)
0x12d6: PushEmpty(int)
0x12d7: Stack[-1] = Stack[-2]
0x12d8: Push((int) 24)
0x12d9: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x12da: Return(); Pop(2)

0x12db: PushEmpty()
0x12dc: Return(); Pop(0)

0x12dd: PushEmpty()
0x12de: Return(); Pop(0)

0x12df: PushEmpty()
0x12e0: Return(); Pop(0)

0x12e1: PushEmpty()
0x12e2: Return(); Pop(0)

0x12e3: PushEmpty()
0x12e4: Push("unholster")
0x12e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12e6: IF (Stack[-1] == 0) GOTO 0x12ee; Pop(1)

0x12e7: PushEmpty(bool, object)
0x12e8: Stack[-1] = Stack[-4]
0x12e9: Call2 0x1417

0x12ea: Stack[-5] = Stack[-2]
0x12eb: Pop(2)
0x12ec: Return(); Pop(0)

0x12ed: GOTO 0x1301

0x12ee: Push("player_shot")
0x12ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f0: IF (Stack[-1] == 0) GOTO 0x12f8; Pop(1)

0x12f1: PushEmpty(bool, object)
0x12f2: Stack[-1] = Stack[-4]
0x12f3: Call2 0x1424

0x12f4: Stack[-5] = Stack[-2]
0x12f5: Pop(2)
0x12f6: Return(); Pop(0)

0x12f7: GOTO 0x1301

0x12f8: Push("battle")
0x12f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12fa: IF (Stack[-1] == 0) GOTO 0x1301; Pop(1)

0x12fb: PushEmpty(bool, object)
0x12fc: Stack[-1] = Stack[-4]
0x12fd: Call2 0x143b

0x12fe: Stack[-5] = Stack[-2]
0x12ff: Pop(2)
0x1300: Return(); Pop(0)

0x1301: Stack[-3] = (bool) 0
0x1302: Return(); Pop(0)

0x1303: PushEmpty()
0x1304: Push("unholster")
0x1305: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1306: IF (Stack[-1] == 0) GOTO 0x130c; Pop(1)

0x1307: PushEmpty(object)
0x1308: Stack[-1] = Stack[-3]
0x1309: Call2 0x141c

0x130a: Pop(1)
0x130b: GOTO 0x131b

0x130c: Push("player_shot")
0x130d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x130e: IF (Stack[-1] == 0) GOTO 0x1314; Pop(1)

0x130f: PushEmpty(object)
0x1310: Stack[-1] = Stack[-3]
0x1311: Call2 0x1433

0x1312: Pop(1)
0x1313: GOTO 0x131b

0x1314: Push("battle")
0x1315: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1316: IF (Stack[-1] == 0) GOTO 0x131b; Pop(1)

0x1317: PushEmpty(object)
0x1318: Stack[-1] = Stack[-3]
0x1319: Call2 0x1442

0x131a: Pop(1)
0x131b: Return(); Pop(0)

0x131c: PushEmpty(bool, bool)
0x131d: PushEmpty(bool)
0x131e: Stack[-1] = (bool) 0
0x131f: PushEmpty(bool, object)
0x1320: Stack[-1] = Stack[-6]
0x1321: Call2 0x1417

0x1322: Pop(1)
0x1323: IF (Stack[-1] == 0) GOTO 0x132a; Pop(1)

0x1324: PushEmpty(bool, object)
0x1325: Stack[-1] = Stack[-6]
0x1326: Call2 0x1147

0x1327: Pop(1)
0x1328: IF (Stack[-1] == 0) GOTO 0x132a; Pop(1)

0x1329: Stack[-1] = (bool) 1
0x132a: IF (Stack[-1] == 0) GOTO 0x1331; Pop(1)

0x132b: @@ IsWeaponHolstered(Stack[-1])
0x132c: Pop(0)
0x132d: Pop(0); Push((bool) Stack[-1] == 0)
0x132e: IF (Stack[-1] == 0) GOTO 0x1331; Pop(1)

0x132f: Stack[-4] = (bool) 1
0x1330: Return(); Pop(2)

0x1331: Stack[-4] = (bool) 0
0x1332: Return(); Pop(2)

0x1333: PushEmpty()
0x1334: PushEmpty(object)
0x1335: Stack[-1] = Stack[-2]
0x1336: Call2 0x141c

0x1337: Pop(1)
0x1338: Return(); Pop(0)

0x1339: PushEmpty()
0x133a: PushEmpty(bool, object)
0x133b: Stack[-1] = Stack[-3]
0x133c: Call2 0x1147

0x133d: Pop(1)
0x133e: IF (Stack[-1] == 0) GOTO 0x1345; Pop(1)

0x133f: PushEmpty(object)
0x1340: Call2 0x1284

0x1341: Pop(0)
0x1342: Push((float)-0.05)
0x1343: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1344: Pop(2)
0x1345: Return(); Pop(0)

0x1346: PushEmpty(object, object)
0x1347: Push("heal")
0x1348: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1349: IF (Stack[-1] == 0) GOTO 0x1354; Pop(1)

0x134a: Push("player")
0x134b: @ FindActor(Stack[-2], Stack[-1])
0x134c: Pop(1)
0x134d: PushEmpty(bool, object)
0x134e: Stack[-1] = Stack[-3]
0x134f: Call2 0x1448

0x1350: Stack[-6] = Stack[-2]
0x1351: Pop(2)
0x1352: Return(); Pop(2)

0x1353: Stack[-1] = 0
0x1354: Stack[-4] = (bool) 0
0x1355: Return(); Pop(2)

0x1356: PushEmpty(object, object)
0x1357: Push("heal")
0x1358: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1359: IF (Stack[-1] == 0) GOTO 0x1362; Pop(1)

0x135a: Push("player")
0x135b: @ FindActor(Stack[-2], Stack[-1])
0x135c: Pop(1)
0x135d: PushEmpty(object)
0x135e: Stack[-1] = Stack[-2]
0x135f: Call2 0x144b

0x1360: Pop(1)
0x1361: Stack[-1] = 0
0x1362: Return(); Pop(2)

0x1363: PushEmpty(string, string)
0x1364: Stack[-1] = "idle"
0x1365: Push(Stack[-3])
0x1366: IF (Stack[-1] == 0) GOTO 0x1368; Pop(1)

0x1367: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1368: Stack[-4] = Stack[-1]
0x1369: Return(); Pop(2)

0x136a: PushEmpty(int, bool, int, bool)
0x136b: Stack[-2] = (int) 0
0x136c: Push("all")
0x136d: PushEmpty(string, int)
0x136e: Stack[-1] = Stack[-5]
0x136f: Call2 0x1363

0x1370: Pop(1)
0x1371: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1372: Pop(2)
0x1373: Pop(0); Push((bool) Stack[-1] == 0)
0x1374: IF (Stack[-1] == 0) GOTO 0x1376; Pop(1)

0x1375: GOTO 0x1379

0x1376: Push((int) 1)
0x1377: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1378: GOTO 0x136c

0x1379: Stack[-5] = Stack[-2]
0x137a: Return(); Pop(4)

0x137b: PushEmpty()
0x137c: PushEmpty(bool)
0x137d: Call2 0x1617

0x137e: Pop(0)
0x137f: IF (Stack[-1] == 0) GOTO 0x1382; Pop(1)

0x1380: Stack[-2] = (int) 2
0x1381: GOTO 0x1383

0x1382: Stack[-2] = (int) 0
0x1383: Return(); Pop(0)

0x1384: PushEmpty()
0x1385: PushEmpty(object)
0x1386: Stack[-1] = Stack[-2]
0x1387: Push(-1, 1); TaskCall(3)
0x1388: Call2 0x293

0x1389: Pop(-1, 1); TaskReturn
0x138a: Pop(1)
0x138b: Return(); Pop(0)

0x138c: PushEmpty()
0x138d: PushEmpty(bool, object)
0x138e: Stack[-1] = Stack[-3]
0x138f: Call2 0x1181

0x1390: Pop(1)
0x1391: IF (Stack[-1] == 0) GOTO 0x1394; Pop(1)

0x1392: Stack[-2] = (int) 2
0x1393: GOTO 0x1395

0x1394: Stack[-2] = (int) 0
0x1395: Return(); Pop(0)

0x1396: PushEmpty()
0x1397: PushEmpty(object)
0x1398: Stack[-1] = Stack[-2]
0x1399: Push(-1, 3); TaskCall(4)
0x139a: Call2 0x3a6

0x139b: Pop(-1, 3); TaskReturn
0x139c: Pop(1)
0x139d: Return(); Pop(0)

0x139e: PushEmpty()
0x139f: PushEmpty(bool, object)
0x13a0: Stack[-1] = Stack[-4]
0x13a1: Call2 0x1181

0x13a2: Pop(1)
0x13a3: IF (Stack[-1] == 0) GOTO 0x13a6; Pop(1)

0x13a4: Stack[-3] = (int) 2
0x13a5: GOTO 0x13a7

0x13a6: Stack[-3] = (int) 0
0x13a7: Return(); Pop(0)

0x13a8: PushEmpty()
0x13a9: PushEmpty(object)
0x13aa: Stack[-1] = Stack[-2]
0x13ab: Push(-1, 3); TaskCall(5)
0x13ac: Call2 0x4a2

0x13ad: Pop(-1, 3); TaskReturn
0x13ae: Pop(1)
0x13af: Return(); Pop(0)

0x13b0: PushEmpty(string, bool, string, bool)
0x13b1: PushEmpty(bool, object, string)
0x13b2: Stack[-2] = Stack[-9]
0x13b3: Stack[-1] = "class"
0x13b4: Call2 0x114c

0x13b5: Pop(2)
0x13b6: Pop(1); Push((bool) Stack[-1] == 0)
0x13b7: IF (Stack[-1] == 0) GOTO 0x13ba; Pop(1)

0x13b8: Stack[-8] = (bool) 0
0x13b9: Return(); Pop(4)

0x13ba: Push("class")
0x13bb: @@ GetProperty(Stack[-1], Stack[-3])
0x13bc: Pop(1)
0x13bd: Push("rat")
0x13be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13bf: IF (Stack[-1] == 0) GOTO 0x13c3; Pop(1)

0x13c0: Stack[-8] = (bool) 0
0x13c1: Return(); Pop(4)

0x13c2: GOTO 0x13ce

0x13c3: Push("rat_big")
0x13c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c5: IF (Stack[-1] == 0) GOTO 0x13c9; Pop(1)

0x13c6: Stack[-8] = (bool) 0
0x13c7: Return(); Pop(4)

0x13c8: GOTO 0x13ce

0x13c9: Push("dog")
0x13ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13cb: IF (Stack[-1] == 0) GOTO 0x13ce; Pop(1)

0x13cc: Stack[-8] = (bool) 0
0x13cd: Return(); Pop(4)

0x13ce: @ CanSee(Stack[-1], Stack[-7])
0x13cf: Pop(0)
0x13d0: PushEmpty(bool)
0x13d1: Stack[-1] = (bool) 1
0x13d2: Push(Stack[-2])
0x13d3: IF (Stack[-1] == 0) GOTO 0x13dc; Pop(1)

0x13d4: PushEmpty(float, object)
0x13d5: Stack[-1] = Stack[-10]
0x13d6: Call2 0x113f

0x13d7: Pop(1)
0x13d8: Pop(0); Push(Stack[-7] * Stack[-7]);
0x13d9: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x13da: IF (Stack[-1] == 0) GOTO 0x13dc; Pop(1)

0x13db: Stack[-1] = (bool) 0
0x13dc: IF (Stack[-1] == 0) GOTO 0x13df; Pop(1)

0x13dd: Stack[-8] = (bool) 1
0x13de: Return(); Pop(4)

0x13df: @ CanSee(Stack[-1], Stack[-6])
0x13e0: Pop(0)
0x13e1: PushEmpty(bool)
0x13e2: Stack[-1] = (bool) 1
0x13e3: Push(Stack[-2])
0x13e4: IF (Stack[-1] == 0) GOTO 0x13ed; Pop(1)

0x13e5: PushEmpty(float, object)
0x13e6: Stack[-1] = Stack[-9]
0x13e7: Call2 0x113f

0x13e8: Pop(1)
0x13e9: Pop(0); Push(Stack[-7] * Stack[-7]);
0x13ea: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x13eb: IF (Stack[-1] == 0) GOTO 0x13ed; Pop(1)

0x13ec: Stack[-1] = (bool) 0
0x13ed: IF (Stack[-1] == 0) GOTO 0x13f0; Pop(1)

0x13ee: Stack[-8] = (bool) 1
0x13ef: Return(); Pop(4)

0x13f0: Stack[-8] = (bool) 0
0x13f1: Return(); Pop(4)

0x13f2: PushEmpty()
0x13f3: Stack[-2] = (int) 2
0x13f4: Return(); Pop(0)

0x13f5: PushEmpty()
0x13f6: PushEmpty(object)
0x13f7: Stack[-1] = Stack[-2]
0x13f8: Call2 0x15ef

0x13f9: Pop(1)
0x13fa: Return(); Pop(0)

0x13fb: Return(); Pop(0)

0x13fc: PushEmpty(bool, bool)
0x13fd: Push("Received steal")
0x13fe: @ Trace(Stack[-1])
0x13ff: Pop(1)
0x1400: @ CanSee(Stack[-1], Stack[-3])
0x1401: Pop(0)
0x1402: Push(Stack[-1])
0x1403: IF (Stack[-1] == 0) GOTO 0x140a; Pop(1)

0x1404: PushEmpty(int, object)
0x1405: Stack[-1] = Stack[-5]
0x1406: Call2 0x138c

0x1407: Stack[-6] = Stack[-2]
0x1408: Pop(2)
0x1409: Return(); Pop(2)

0x140a: Stack[-4] = (int) 0
0x140b: Return(); Pop(2)

0x140c: PushEmpty()
0x140d: PushEmpty(object)
0x140e: Stack[-1] = Stack[-2]
0x140f: Call2 0x1396

0x1410: Pop(1)
0x1411: Return(); Pop(0)

0x1412: PushEmpty()
0x1413: Stack[-3] = (int) 0
0x1414: Return(); Pop(0)

0x1415: PushEmpty()
0x1416: Return(); Pop(0)

0x1417: PushEmpty(bool, bool)
0x1418: @ CanSee(Stack[-1], Stack[-3])
0x1419: Pop(0)
0x141a: Stack[-4] = Stack[-1]
0x141b: Return(); Pop(2)

0x141c: PushEmpty()
0x141d: PushEmpty(object)
0x141e: Stack[-1] = Stack[-2]
0x141f: Push(-1, 3); TaskCall(6)
0x1420: Call2 0x564

0x1421: Pop(-1, 3); TaskReturn
0x1422: Pop(1)
0x1423: Return(); Pop(0)

0x1424: PushEmpty(bool, bool)
0x1425: @ CanSee(Stack[-1], Stack[-3])
0x1426: Pop(0)
0x1427: Stack[-4] = (bool) 1
0x1428: Push(Stack[-1])
0x1429: IF (Stack[-1] == 0) GOTO 0x1432; Pop(1)

0x142a: PushEmpty(float, object)
0x142b: Stack[-1] = Stack[-5]
0x142c: Call2 0x113f

0x142d: Pop(1)
0x142e: Push((int) 4000000)
0x142f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1430: IF (Stack[-1] == 0) GOTO 0x1432; Pop(1)

0x1431: Stack[-4] = (bool) 0
0x1432: Return(); Pop(2)

0x1433: PushEmpty()
0x1434: PushEmpty(object)
0x1435: Stack[-1] = Stack[-2]
0x1436: Push(-1, 3); TaskCall(7)
0x1437: Call2 0x626

0x1438: Pop(-1, 3); TaskReturn
0x1439: Pop(1)
0x143a: Return(); Pop(0)

0x143b: PushEmpty()
0x143c: PushEmpty(bool, object)
0x143d: Stack[-1] = Stack[-3]
0x143e: Call2 0x1424

0x143f: Stack[-4] = Stack[-2]
0x1440: Pop(2)
0x1441: Return(); Pop(0)

0x1442: PushEmpty()
0x1443: PushEmpty(object)
0x1444: Stack[-1] = Stack[-2]
0x1445: Call2 0x1433

0x1446: Pop(1)
0x1447: Return(); Pop(0)

0x1448: PushEmpty()
0x1449: Stack[-2] = (bool) 0
0x144a: Return(); Pop(0)

0x144b: PushEmpty()
0x144c: Return(); Pop(0)

0x144d: PushEmpty()
0x144e: Push((int) 1000)
0x144f: @@ SetReturnValue(Stack[-1])
0x1450: Pop(1)
0x1451: Return(); Pop(0)

0x1452: PushEmpty()
0x1453: PushEmpty(int, string)
0x1454: Stack[-1] = "branch"
0x1455: Call2 0x12c5

0x1456: Pop(1)
0x1457: Push((int) 0)
0x1458: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1459: IF (Stack[-1] == 0) GOTO 0x145c; Pop(1)

0x145a: Stack[-2] = (bool) 1
0x145b: Return(); Pop(0)

0x145c: Stack[-2] = (bool) 0
0x145d: Return(); Pop(0)

0x145e: PushEmpty()
0x145f: PushEmpty(int, string)
0x1460: Stack[-1] = "branch"
0x1461: Call2 0x12c5

0x1462: Pop(1)
0x1463: Push((int) 2)
0x1464: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1465: IF (Stack[-1] == 0) GOTO 0x1468; Pop(1)

0x1466: Stack[-2] = (bool) 1
0x1467: Return(); Pop(0)

0x1468: Stack[-2] = (bool) 0
0x1469: Return(); Pop(0)

0x146a: PushEmpty()
0x146b: PushEmpty(bool, object)
0x146c: Stack[-1] = Stack[-3]
0x146d: Call2 0x14ec

0x146e: Pop(1)
0x146f: IF (Stack[-1] == 0) GOTO 0x1472; Pop(1)

0x1470: Stack[-2] = (bool) 1
0x1471: Return(); Pop(0)

0x1472: Stack[-2] = (bool) 0
0x1473: Return(); Pop(0)

0x1474: PushEmpty()
0x1475: PushEmpty(bool, object)
0x1476: Stack[-1] = Stack[-3]
0x1477: Call2 0x14f3

0x1478: Pop(1)
0x1479: IF (Stack[-1] == 0) GOTO 0x147c; Pop(1)

0x147a: Stack[-2] = (bool) 1
0x147b: Return(); Pop(0)

0x147c: Stack[-2] = (bool) 0
0x147d: Return(); Pop(0)

0x147e: PushEmpty()
0x147f: PushEmpty(bool, object)
0x1480: Stack[-1] = Stack[-3]
0x1481: Call2 0x14fa

0x1482: Pop(1)
0x1483: IF (Stack[-1] == 0) GOTO 0x1486; Pop(1)

0x1484: Stack[-2] = (bool) 1
0x1485: Return(); Pop(0)

0x1486: Stack[-2] = (bool) 0
0x1487: Return(); Pop(0)

0x1488: PushEmpty()
0x1489: PushEmpty(bool, object)
0x148a: Stack[-1] = Stack[-3]
0x148b: Call2 0x1501

0x148c: Pop(1)
0x148d: IF (Stack[-1] == 0) GOTO 0x1490; Pop(1)

0x148e: Stack[-2] = (bool) 1
0x148f: Return(); Pop(0)

0x1490: Stack[-2] = (bool) 0
0x1491: Return(); Pop(0)

0x1492: PushEmpty()
0x1493: PushEmpty(bool, object)
0x1494: Stack[-1] = Stack[-3]
0x1495: Call2 0x1508

0x1496: Pop(1)
0x1497: IF (Stack[-1] == 0) GOTO 0x149a; Pop(1)

0x1498: Stack[-2] = (bool) 1
0x1499: Return(); Pop(0)

0x149a: Stack[-2] = (bool) 0
0x149b: Return(); Pop(0)

0x149c: PushEmpty()
0x149d: PushEmpty(bool, object)
0x149e: Stack[-1] = Stack[-3]
0x149f: Call2 0x150f

0x14a0: Pop(1)
0x14a1: IF (Stack[-1] == 0) GOTO 0x14a4; Pop(1)

0x14a2: Stack[-2] = (bool) 1
0x14a3: Return(); Pop(0)

0x14a4: Stack[-2] = (bool) 0
0x14a5: Return(); Pop(0)

0x14a6: PushEmpty()
0x14a7: PushEmpty(bool, object)
0x14a8: Stack[-1] = Stack[-3]
0x14a9: Call2 0x1516

0x14aa: Pop(1)
0x14ab: IF (Stack[-1] == 0) GOTO 0x14ae; Pop(1)

0x14ac: Stack[-2] = (bool) 1
0x14ad: Return(); Pop(0)

0x14ae: Stack[-2] = (bool) 0
0x14af: Return(); Pop(0)

0x14b0: PushEmpty()
0x14b1: PushEmpty(bool, object)
0x14b2: Stack[-1] = Stack[-3]
0x14b3: Call2 0x151d

0x14b4: Pop(1)
0x14b5: IF (Stack[-1] == 0) GOTO 0x14b8; Pop(1)

0x14b6: Stack[-2] = (bool) 1
0x14b7: Return(); Pop(0)

0x14b8: Stack[-2] = (bool) 0
0x14b9: Return(); Pop(0)

0x14ba: PushEmpty()
0x14bb: PushEmpty(bool, object)
0x14bc: Stack[-1] = Stack[-3]
0x14bd: Call2 0x1524

0x14be: Pop(1)
0x14bf: IF (Stack[-1] == 0) GOTO 0x14c2; Pop(1)

0x14c0: Stack[-2] = (bool) 1
0x14c1: Return(); Pop(0)

0x14c2: Stack[-2] = (bool) 0
0x14c3: Return(); Pop(0)

0x14c4: PushEmpty()
0x14c5: PushEmpty(bool, object)
0x14c6: Stack[-1] = Stack[-3]
0x14c7: Call2 0x152b

0x14c8: Pop(1)
0x14c9: IF (Stack[-1] == 0) GOTO 0x14cc; Pop(1)

0x14ca: Stack[-2] = (bool) 1
0x14cb: Return(); Pop(0)

0x14cc: Stack[-2] = (bool) 0
0x14cd: Return(); Pop(0)

0x14ce: PushEmpty()
0x14cf: PushEmpty(bool, object)
0x14d0: Stack[-1] = Stack[-3]
0x14d1: Call2 0x1532

0x14d2: Pop(1)
0x14d3: IF (Stack[-1] == 0) GOTO 0x14d6; Pop(1)

0x14d4: Stack[-2] = (bool) 1
0x14d5: Return(); Pop(0)

0x14d6: Stack[-2] = (bool) 0
0x14d7: Return(); Pop(0)

0x14d8: PushEmpty()
0x14d9: PushEmpty(bool, object)
0x14da: Stack[-1] = Stack[-3]
0x14db: Call2 0x1539

0x14dc: Pop(1)
0x14dd: IF (Stack[-1] == 0) GOTO 0x14e0; Pop(1)

0x14de: Stack[-2] = (bool) 1
0x14df: Return(); Pop(0)

0x14e0: Stack[-2] = (bool) 0
0x14e1: Return(); Pop(0)

0x14e2: PushEmpty()
0x14e3: PushEmpty(bool, object)
0x14e4: Stack[-1] = Stack[-3]
0x14e5: Call2 0x1540

0x14e6: Pop(1)
0x14e7: IF (Stack[-1] == 0) GOTO 0x14ea; Pop(1)

0x14e8: Stack[-2] = (bool) 1
0x14e9: Return(); Pop(0)

0x14ea: Stack[-2] = (bool) 0
0x14eb: Return(); Pop(0)

0x14ec: PushEmpty()
0x14ed: PushEmpty(int)
0x14ee: Call2 0x12ca

0x14ef: Pop(0)
0x14f0: Push((int) 1)
0x14f1: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14f2: Return(); Pop(0)

0x14f3: PushEmpty()
0x14f4: PushEmpty(int)
0x14f5: Call2 0x12ca

0x14f6: Pop(0)
0x14f7: Push((int) 2)
0x14f8: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14f9: Return(); Pop(0)

0x14fa: PushEmpty()
0x14fb: PushEmpty(int)
0x14fc: Call2 0x12ca

0x14fd: Pop(0)
0x14fe: Push((int) 3)
0x14ff: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1500: Return(); Pop(0)

0x1501: PushEmpty()
0x1502: PushEmpty(int)
0x1503: Call2 0x12ca

0x1504: Pop(0)
0x1505: Push((int) 4)
0x1506: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1507: Return(); Pop(0)

0x1508: PushEmpty()
0x1509: PushEmpty(int)
0x150a: Call2 0x12ca

0x150b: Pop(0)
0x150c: Push((int) 5)
0x150d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x150e: Return(); Pop(0)

0x150f: PushEmpty()
0x1510: PushEmpty(int)
0x1511: Call2 0x12ca

0x1512: Pop(0)
0x1513: Push((int) 6)
0x1514: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1515: Return(); Pop(0)

0x1516: PushEmpty()
0x1517: PushEmpty(int)
0x1518: Call2 0x12ca

0x1519: Pop(0)
0x151a: Push((int) 7)
0x151b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x151c: Return(); Pop(0)

0x151d: PushEmpty()
0x151e: PushEmpty(int)
0x151f: Call2 0x12ca

0x1520: Pop(0)
0x1521: Push((int) 8)
0x1522: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1523: Return(); Pop(0)

0x1524: PushEmpty()
0x1525: PushEmpty(int)
0x1526: Call2 0x12ca

0x1527: Pop(0)
0x1528: Push((int) 9)
0x1529: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x152a: Return(); Pop(0)

0x152b: PushEmpty()
0x152c: PushEmpty(int)
0x152d: Call2 0x12ca

0x152e: Pop(0)
0x152f: Push((int) 10)
0x1530: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1531: Return(); Pop(0)

0x1532: PushEmpty()
0x1533: PushEmpty(int)
0x1534: Call2 0x12ca

0x1535: Pop(0)
0x1536: Push((int) 11)
0x1537: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1538: Return(); Pop(0)

0x1539: PushEmpty()
0x153a: PushEmpty(int)
0x153b: Call2 0x12ca

0x153c: Pop(0)
0x153d: Push((int) 12)
0x153e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x153f: Return(); Pop(0)

0x1540: PushEmpty()
0x1541: PushEmpty(bool)
0x1542: Stack[-1] = (bool) 0
0x1543: PushEmpty(int)
0x1544: Call2 0x12d3

0x1545: Pop(0)
0x1546: Push((int) 0)
0x1547: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1548: IF (Stack[-1] == 0) GOTO 0x1550; Pop(1)

0x1549: PushEmpty(int)
0x154a: Call2 0x12d3

0x154b: Pop(0)
0x154c: Push((int) 12)
0x154d: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x154e: IF (Stack[-1] == 0) GOTO 0x1550; Pop(1)

0x154f: Stack[-1] = (bool) 1
0x1550: IF (Stack[-1] == 0) GOTO 0x1553; Pop(1)

0x1551: Stack[-2] = (bool) 1
0x1552: Return(); Pop(0)

0x1553: Stack[-2] = (bool) 0
0x1554: Return(); Pop(0)

0x1555: PushEmpty(int, int)
0x1556: Push("branch")
0x1557: @ GetVariable(Stack[-1], Stack[-2])
0x1558: Pop(1)
0x1559: Push((int) 0)
0x155a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x155b: IF (Stack[-1] == 0) GOTO 0x155f; Pop(1)

0x155c: Stack[-3] = (int) 1
0x155d: Return(); Pop(2)

0x155e: GOTO 0x1564

0x155f: Push((int) 1)
0x1560: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1561: IF (Stack[-1] == 0) GOTO 0x1564; Pop(1)

0x1562: Stack[-3] = (int) 2
0x1563: Return(); Pop(2)

0x1564: Stack[-3] = (int) 3
0x1565: Return(); Pop(2)

0x1566: PushEmpty(int, int)
0x1567: Push("branch")
0x1568: @ GetVariable(Stack[-1], Stack[-2])
0x1569: Pop(1)
0x156a: Stack[-3] = Stack[-1]
0x156b: Return(); Pop(2)

0x156c: PushEmpty()
0x156d: PushEmpty(int)
0x156e: Call2 0x1566

0x156f: Pop(0)
0x1570: Push((int) 1)
0x1571: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1572: IF (Stack[-1] == 0) GOTO 0x1576; Pop(1)

0x1573: @ WorkWithCorpse(Stack[-1])
0x1574: Pop(0)
0x1575: GOTO 0x1578

0x1576: @ Barter(Stack[-1])
0x1577: Pop(0)
0x1578: Return(); Pop(0)

0x1579: PushEmpty(int, bool, int, int, bool, int)
0x157a: Push((int) 0)
0x157b: @ ClearSubContainer(Stack[-1])
0x157c: Pop(1)
0x157d: PushEmpty(int)
0x157e: Call2 0x12ca

0x157f: Stack[-2] = Stack[-1]
0x1580: Pop(1)
0x1581: Push(Stack[-7])
0x1582: IF (Stack[-1] == 0) GOTO 0x15af; Pop(1)

0x1583: PushEmpty(string, int, int, int)
0x1584: Stack[-4] = "alpha_pills"
0x1585: Stack[-3] = (int) 1
0x1586: Stack[-2] = (int) 2
0x1587: Stack[-1] = (int) 4
0x1588: Call2 0x1275

0x1589: Pop(4)
0x158a: PushEmpty(string, int, int, int)
0x158b: Stack[-4] = "meradorm"
0x158c: Stack[-3] = (int) 2
0x158d: Stack[-2] = (int) 3
0x158e: Stack[-1] = (int) 3
0x158f: Call2 0x1275

0x1590: Pop(4)
0x1591: Push((int) 3)
0x1592: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1593: IF (Stack[-1] == 0) GOTO 0x159a; Pop(1)

0x1594: PushEmpty(string, int, int)
0x1595: Stack[-3] = "beta_pills"
0x1596: Stack[-2] = (int) 1
0x1597: Stack[-1] = (int) 4
0x1598: Call2 0x126a

0x1599: Pop(3)
0x159a: Push((int) 8)
0x159b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x159c: IF (Stack[-1] == 0) GOTO 0x15a5; Pop(1)

0x159d: PushEmpty(string, int, int, int)
0x159e: Stack[-4] = "monomicin"
0x159f: Stack[-3] = (int) 1
0x15a0: Stack[-2] = (int) 2
0x15a1: Stack[-1] = (int) 2
0x15a2: Call2 0x1275

0x15a3: Pop(4)
0x15a4: GOTO 0x15ae

0x15a5: Push((int) 4)
0x15a6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x15a7: IF (Stack[-1] == 0) GOTO 0x15ae; Pop(1)

0x15a8: PushEmpty(string, int, int)
0x15a9: Stack[-3] = "monomicin"
0x15aa: Stack[-2] = (int) 1
0x15ab: Stack[-1] = (int) 2
0x15ac: Call2 0x126a

0x15ad: Pop(3)
0x15ae: GOTO 0x15dc

0x15af: PushEmpty(string, int, int)
0x15b0: Stack[-3] = "lockpick"
0x15b1: Stack[-2] = (int) 1
0x15b2: Stack[-1] = (int) 4
0x15b3: Call2 0x126a

0x15b4: Pop(3)
0x15b5: PushEmpty(string, int, int)
0x15b6: Stack[-3] = "rifle_ammo"
0x15b7: Stack[-2] = (int) 1
0x15b8: Stack[-1] = (int) 2
0x15b9: Call2 0x126a

0x15ba: Pop(3)
0x15bb: PushEmpty(string, int, int)
0x15bc: Stack[-3] = "revolver_ammo"
0x15bd: Stack[-2] = (int) 1
0x15be: Stack[-1] = (int) 2
0x15bf: Call2 0x126a

0x15c0: Pop(3)
0x15c1: PushEmpty(string, int, int, int)
0x15c2: Stack[-4] = "samopal_ammo"
0x15c3: Stack[-3] = (int) 1
0x15c4: Stack[-2] = (int) 2
0x15c5: Stack[-1] = (int) 2
0x15c6: Call2 0x1275

0x15c7: Pop(4)
0x15c8: Push((int) 8)
0x15c9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x15ca: IF (Stack[-1] == 0) GOTO 0x15d3; Pop(1)

0x15cb: PushEmpty(string, int, int, int)
0x15cc: Stack[-4] = "monomicin"
0x15cd: Stack[-3] = (int) 1
0x15ce: Stack[-2] = (int) 2
0x15cf: Stack[-1] = (int) 2
0x15d0: Call2 0x1275

0x15d1: Pop(4)
0x15d2: GOTO 0x15dc

0x15d3: Push((int) 4)
0x15d4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x15d5: IF (Stack[-1] == 0) GOTO 0x15dc; Pop(1)

0x15d6: PushEmpty(string, int, int)
0x15d7: Stack[-3] = "monomicin"
0x15d8: Stack[-2] = (int) 1
0x15d9: Stack[-1] = (int) 2
0x15da: Call2 0x126a

0x15db: Pop(3)
0x15dc: Return(); Pop(6)

0x15dd: Stack[-1] = (int) 515559
0x15de: Return(); Pop(0)

0x15df: Stack[-1] = (int) 503344
0x15e0: Return(); Pop(0)

0x15e1: Stack[-1] = "ui/NPC_Citizen1.png"
0x15e2: Return(); Pop(0)

0x15e3: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x15e4: Return(); Pop(0)

0x15e5: Stack[-1] = (bool) 0
0x15e6: Return(); Pop(0)

0x15e7: Push(GlobalVars[0])
0x15e8: Stack[-1] = (bool) 0
0x15e9: GlobalVars[0] = Stack[-1]; Pop(1)
0x15ea: PushEmpty(bool)
0x15eb: Stack[-1] = (bool) 0
0x15ec: Call2 0x1579

0x15ed: Pop(1)
0x15ee: Return(); Pop(0)

0x15ef: PushEmpty(bool, bool)
0x15f0: Push(GlobalVars[0])
0x15f1: IF (Stack[-1] == 0) GOTO 0x15fc; Pop(1)

0x15f2: @ IsOverrideActive(Stack[-1])
0x15f3: Pop(0)
0x15f4: Pop(0); Push((bool) Stack[-1] == 0)
0x15f5: IF (Stack[-1] == 0) GOTO 0x15fa; Pop(1)

0x15f6: PushEmpty(object)
0x15f7: Stack[-1] = Stack[-4]
0x15f8: Call2 0x156c

0x15f9: Pop(1)
0x15fa: Return(); Pop(2)

0x15fb: GOTO 0x1616

0x15fc: Push((int) 1000)
0x15fd: PushEmpty(int, object)
0x15fe: Stack[-1] = Stack[-6]
0x15ff: Push(-2, 1); TaskCall(8)
0x1600: Call2 0x6c3

0x1601: Pop(-2, 1); TaskReturn
0x1602: Pop(1)
0x1603: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1604: IF (Stack[-1] == 0) GOTO 0x1616; Pop(1)

0x1605: PushEmpty(bool, object)
0x1606: Stack[-1] = Stack[-5]
0x1607: Call2 0x11fe

0x1608: Pop(1)
0x1609: Pop(1); Push((bool) Stack[-1] == 0)
0x160a: IF (Stack[-1] == 0) GOTO 0x160c; Pop(1)

0x160b: Return(); Pop(2)

0x160c: PushEmpty(object)
0x160d: Stack[-1] = Stack[-4]
0x160e: Push(-1, 1); TaskCall(0)
0x160f: Call2 0x0

0x1610: Pop(-1, 1); TaskReturn
0x1611: Pop(1)
0x1612: PushEmpty(object)
0x1613: Stack[-1] = Stack[-4]
0x1614: Call2 0x1235

0x1615: Pop(1)
0x1616: Return(); Pop(2)

0x1617: Stack[-1] = (bool) 1
0x1618: Return(); Pop(0)

0x1619: PushEmpty()
0x161a: PushEmpty(bool, object, object, float)
0x161b: Stack[-3] = Stack[-7]
0x161c: Stack[-2] = Stack[-6]
0x161d: Stack[-1] = (float) 500.0
0x161e: Call2 0x13b0

0x161f: Pop(3)
0x1620: IF (Stack[-1] == 0) GOTO 0x1627; Pop(1)

0x1621: Push("ToDie")
0x1622: Push((bool) 1)
0x1623: @ SetProperty(Stack[-2], Stack[-1])
0x1624: Pop(2)
0x1625: Stack[-4] = (bool) 1
0x1626: Return(); Pop(0)

0x1627: Stack[-4] = (bool) 0
0x1628: Return(); Pop(0)

