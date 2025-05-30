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
	SetReturnValue
	branch
	d1q01FirstGeorgVisit
	reputation
	rifle_ammo
	revolver_ammo
	samopal_ammo
	lockpick
	alpha_pills
	meradorm
	powder
	beta_pills
	gamma_pills
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	CameraTransit (3 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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
		EVENT_11 Op = 0x81d Vars = (int, int)

Events:
EVENT_16 Op = 0xceb Vars = (object, string)
EVENT_41 Op = 0xced Vars = (object)
EVENT_22 Op = 0xcef Vars = (object, int, float, float)
EVENT_43 Op = 0xcf1 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0xfb7

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0xc49

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
0x1c: Call2 0xfb7

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
0x2c: Call2 0xfb9

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
0x38: Call2 0xbb0

0x39: Pop(0)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0xe15

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: PushEmpty(int, object)
0x42: Stack[-1] = Stack[-5]
0x43: Call2 0xe0c

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
0x51: Call2 0xe0f

0x52: Pop(1)
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: PushEmpty(object)
0x56: Stack[-1] = Stack[-4]
0x57: Call2 0xd49

0x58: Pop(1)
0x59: PushEmpty(int, object)
0x5a: Stack[-1] = Stack[-5]
0x5b: Call2 0xd9c

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
0x69: Call2 0xda6

0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: PushEmpty(bool, object, object, bool)
0x6e: Stack[-3] = Stack[-9]
0x6f: Stack[-2] = Stack[-8]
0x70: Stack[-1] = Stack[-7]
0x71: Call2 0xfef

0x72: Pop(3)
0x73: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x74: PushEmpty(int, object, bool)
0x75: Stack[-2] = Stack[-8]
0x76: Stack[-1] = Stack[-6]
0x77: Call2 0xdae

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
0x85: Call2 0xdb8

0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int)
0x89: PushEmpty(int, object)
0x8a: Stack[-1] = Stack[-5]
0x8b: Call2 0xe02

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
0x99: Call2 0xe05

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-2] = Stack[-7]
0x9f: Stack[-1] = Stack[-6]
0xa0: Call2 0xcf3

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0xfb

0xa5: Pop(0)
0xa6: PushEmpty(object, string)
0xa7: Stack[-2] = Stack[-6]
0xa8: Stack[-1] = Stack[-5]
0xa9: Call2 0xd13

0xaa: Pop(2)
0xab: GOTO 0xc0

0xac: PushEmpty(int, string, object)
0xad: Stack[-2] = Stack[-6]
0xae: Stack[-1] = Stack[-7]
0xaf: Call2 0xe07

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
0xbe: Call2 0xe0a

0xbf: Pop(2)
0xc0: Return(); Pop(2)

0xc1: PushEmpty()
0xc2: PushEmpty(bool, string)
0xc3: Stack[-1] = Stack[-3]
0xc4: Call2 0xd56

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xfb

0xc9: Pop(0)
0xca: PushEmpty(string)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call2 0xd66

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[-3]
0xd2: Call2 0xd2c

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xfb

0xd7: Pop(0)
0xd8: PushEmpty(object)
0xd9: Stack[-1] = Stack[-2]
0xda: Call2 0xd43

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
0xf8: Call2 0xe15

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
0x111: Call2 0xced

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty(bool, int, bool, int)
0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[-7]
0x117: Call2 0xb8d

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
0x126: Call2 0xd8b

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
0x134: Call2 0xd94

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
0x19c: Call2 0xe0c

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
0x1aa: Call2 0xe0f

0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(int, int)
0x1ae: PushEmpty(object)
0x1af: Stack[-1] = Stack[-4]
0x1b0: Call2 0xd49

0x1b1: Pop(1)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-1] = Stack[-5]
0x1b4: Call2 0xd9c

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
0x1c2: Call2 0xda6

0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(int, int)
0x1c6: PushEmpty(bool, object, object, bool)
0x1c7: Stack[-3] = Stack[-9]
0x1c8: Stack[-2] = Stack[-8]
0x1c9: Stack[-1] = Stack[-7]
0x1ca: Call2 0xfef

0x1cb: Pop(3)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cd: PushEmpty(int, object, bool)
0x1ce: Stack[-2] = Stack[-8]
0x1cf: Stack[-1] = Stack[-6]
0x1d0: Call2 0xdae

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
0x1de: Call2 0xdb8

0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(int, int)
0x1e2: PushEmpty(int, object)
0x1e3: Stack[-1] = Stack[-5]
0x1e4: Call2 0xe02

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
0x1f2: Call2 0xe05

0x1f3: Pop(1)
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(int, int)
0x1f6: PushEmpty(bool, object, string)
0x1f7: Stack[-2] = Stack[-7]
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call2 0xcf3

0x1fa: Pop(2)
0x1fb: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x28e

0x1fe: Pop(0)
0x1ff: PushEmpty(object, string)
0x200: Stack[-2] = Stack[-6]
0x201: Stack[-1] = Stack[-5]
0x202: Call2 0xd13

0x203: Pop(2)
0x204: GOTO 0x219

0x205: PushEmpty(int, string, object)
0x206: Stack[-2] = Stack[-6]
0x207: Stack[-1] = Stack[-7]
0x208: Call2 0xe07

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
0x217: Call2 0xe0a

0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, string)
0x21c: Stack[-1] = Stack[-3]
0x21d: Call2 0xd56

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x28e

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-1] = Stack[-2]
0x225: Call2 0xd66

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x28e

0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0xe15

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[-3]
0x232: Call2 0xd2c

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x28e

0x237: Pop(0)
0x238: PushEmpty(object)
0x239: Stack[-1] = Stack[-2]
0x23a: Call2 0xd43

0x23b: Pop(1)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0xbb0

0x242: Pop(0)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(14)

0x246: PushEmpty(int)
0x247: Call2 0xd7a

0x248: Stack[-8] = Stack[-1]
0x249: Pop(1)
0x24a: Stack[-6] = (int) 0
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push((int) 5)
0x24e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0xbb0

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
0x263: Call2 0xd73

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
0x29c: Call2 0xb44

0x29d: Stack[-4] = Stack[-2]
0x29e: Pop(2)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-2] = Stack[-6]
0x2a1: Stack[-1] = Stack[-5]
0x2a2: Call2 0xcc4

0x2a3: Pop(2)
0x2a4: Push((int) 0)
0x2a5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0xba5

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
0x2b4: Call2 0xba5

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
0x2c8: Call2 0xc68

0x2c9: Pop(1)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: PushEmpty(int, object)
0x2cd: Stack[-1] = Stack[-5]
0x2ce: Call2 0xe0c

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
0x2dc: Call2 0xe0f

0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(int, int)
0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[-4]
0x2e2: Call2 0xd49

0x2e3: Pop(1)
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-1] = Stack[-5]
0x2e6: Call2 0xd9c

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
0x2f4: Call2 0xda6

0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int)
0x2f8: PushEmpty(bool, object, object, bool)
0x2f9: Stack[-3] = Stack[-9]
0x2fa: Stack[-2] = Stack[-8]
0x2fb: Stack[-1] = Stack[-7]
0x2fc: Call2 0xfef

0x2fd: Pop(3)
0x2fe: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2ff: PushEmpty(int, object, bool)
0x300: Stack[-2] = Stack[-8]
0x301: Stack[-1] = Stack[-6]
0x302: Call2 0xdae

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
0x310: Call2 0xdb8

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, object)
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0xe02

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
0x324: Call2 0xe05

0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: PushEmpty(int, int)
0x328: PushEmpty(bool, object, string)
0x329: Stack[-2] = Stack[-7]
0x32a: Stack[-1] = Stack[-6]
0x32b: Call2 0xcf3

0x32c: Pop(2)
0x32d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32e: PushEmpty()
0x32f: Call2 0x35a

0x330: Pop(0)
0x331: PushEmpty(object, string)
0x332: Stack[-2] = Stack[-6]
0x333: Stack[-1] = Stack[-5]
0x334: Call2 0xd13

0x335: Pop(2)
0x336: GOTO 0x34b

0x337: PushEmpty(int, string, object)
0x338: Stack[-2] = Stack[-6]
0x339: Stack[-1] = Stack[-7]
0x33a: Call2 0xe07

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
0x349: Call2 0xe0a

0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty()
0x34d: PushEmpty(bool, string)
0x34e: Stack[-1] = Stack[-3]
0x34f: Call2 0xd56

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x352: PushEmpty()
0x353: Call2 0x35a

0x354: Pop(0)
0x355: PushEmpty(string)
0x356: Stack[-1] = Stack[-2]
0x357: Call2 0xd66

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
0x36b: Call2 0xced

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(cvector, cvector, cvector, cvector)
0x36f: Push((int) 111)
0x370: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(4)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call2 0xb8d

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
0x381: Call2 0xb44

0x382: Stack[-3] = Stack[-2]
0x383: Pop(2)
0x384: PushEmpty(float, cvector, cvector)
0x385: Stack[-2] = Stack[-5]
0x386: Stack[-1] = Stack[-4]
0x387: Call2 0xcc4

0x388: Pop(2)
0x389: Push((float)0.5)
0x38a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0xba5

0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty()
0x392: Call2 0x35a

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0xe15

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[-3]
0x39b: Call2 0xd2c

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39e: PushEmpty()
0x39f: Call2 0x35a

0x3a0: Pop(0)
0x3a1: PushEmpty(object)
0x3a2: Stack[-1] = Stack[-2]
0x3a3: Call2 0xd43

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
0x3c6: Call2 0xe15

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
0x3d3: Call2 0xc9a

0x3d4: Pop(1)
0x3d5: Push((float)0.75)
0x3d6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Call2 0xc9a

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
0x409: Call2 0xb3f

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
0x424: Call2 0xb3f

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
0x460: Call2 0xb3f

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
0x471: Call2 0xced

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty(cvector, cvector, cvector, cvector)
0x475: @ GetDirection(Stack[-2])
0x476: Pop(0)
0x477: PushEmpty(cvector, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0xb44

0x47a: Stack[-3] = Stack[-2]
0x47b: Pop(2)
0x47c: PushEmpty(float, cvector, cvector)
0x47d: Stack[-2] = Stack[-5]
0x47e: Stack[-1] = Stack[-4]
0x47f: Call2 0xca9

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
0x48e: Call2 0xc9a

0x48f: Pop(1)
0x490: Push((float)0.75)
0x491: Pop(1); Push(Stack[-8] * Stack[-1]);
0x492: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Call2 0xc9a

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
0x4c4: Call2 0xb3f

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
0x4df: Call2 0xb3f

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
0x51b: Call2 0xb3f

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
0x52c: Call2 0xced

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetDirection(Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(cvector, object)
0x533: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x534: Call2 0xb44

0x535: Stack[-3] = Stack[-2]
0x536: Pop(2)
0x537: PushEmpty(float, cvector, cvector)
0x538: Stack[-2] = Stack[-5]
0x539: Stack[-1] = Stack[-4]
0x53a: Call2 0xca9

0x53b: Pop(2)
0x53c: Push((float)-0.34202)
0x53d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x53e: Return(); Pop(4)

0x53f: PushEmpty()
0x540: Call2 0x5e1

0x541: Pop(0)
0x542: PushEmpty()
0x543: Call2 0xe15

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
0x550: Call2 0xc9a

0x551: Pop(1)
0x552: Push((float)0.75)
0x553: Pop(1); Push(Stack[-8] * Stack[-1]);
0x554: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Call2 0xc9a

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
0x586: Call2 0xb3f

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
0x5a1: Call2 0xb3f

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
0x5dd: Call2 0xb3f

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
0x5ee: Call2 0xced

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(cvector, cvector, cvector, cvector)
0x5f2: @ GetDirection(Stack[-2])
0x5f3: Pop(0)
0x5f4: PushEmpty(cvector, object)
0x5f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f6: Call2 0xb44

0x5f7: Stack[-3] = Stack[-2]
0x5f8: Pop(2)
0x5f9: PushEmpty(float, cvector, cvector)
0x5fa: Stack[-2] = Stack[-5]
0x5fb: Stack[-1] = Stack[-4]
0x5fc: Call2 0xca9

0x5fd: Pop(2)
0x5fe: Push((float)-0.34202)
0x5ff: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x600: Return(); Pop(4)

0x601: PushEmpty()
0x602: Call2 0x6a3

0x603: Pop(0)
0x604: PushEmpty()
0x605: Call2 0xe15

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
0x612: Call2 0xc9a

0x613: Pop(1)
0x614: Push((float)0.75)
0x615: Pop(1); Push(Stack[-8] * Stack[-1]);
0x616: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Call2 0xc9a

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
0x648: Call2 0xb3f

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
0x663: Call2 0xb3f

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
0x69f: Call2 0xb3f

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
0x6b0: Call2 0xced

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty(cvector, cvector, cvector, cvector)
0x6b4: @ GetDirection(Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(cvector, object)
0x6b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b8: Call2 0xb44

0x6b9: Stack[-3] = Stack[-2]
0x6ba: Pop(2)
0x6bb: PushEmpty(float, cvector, cvector)
0x6bc: Stack[-2] = Stack[-5]
0x6bd: Stack[-1] = Stack[-4]
0x6be: Call2 0xca9

0x6bf: Pop(2)
0x6c0: Push((float)-0.34202)
0x6c1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object, float)
0x6c6: Stack[-2] = Stack[-12]
0x6c7: Stack[-1] = (float) 70.0
0x6c8: Call2 0xbb5

0x6c9: Pop(2)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-10] = (int) -2
0x6cd: Return(); Pop(8)

0x6ce: @ CreateDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: PushEmpty(int)
0x6d1: Call2 0xfb1

0x6d2: Pop(0)
0x6d3: @@ SetNPCName(Stack[-1])
0x6d4: Pop(1)
0x6d5: PushEmpty(int)
0x6d6: Call2 0xfaf

0x6d7: Pop(0)
0x6d8: @@ SetNPCDescription(Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Call2 0xfb3

0x6dc: Pop(0)
0x6dd: @@ SetPhoto(Stack[-1])
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0xfb5

0x6e1: Pop(0)
0x6e2: @@ SetPhoto2(Stack[-1])
0x6e3: Pop(1)
0x6e4: PushEmpty(int)
0x6e5: Call2 0xf31

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
0x704: Call2 0xbfa

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
0x712: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x713: PushEmpty(bool, object)
0x714: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x715: Call2 0xe5d

0x716: Pop(1)
0x717: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x718: PushEmpty(string)
0x719: Stack[-1] = "Neutral"
0x71a: Call2 0x807

0x71b: Pop(1)
0x71c: Push((int) 543287)
0x71d: @@ SetMessage(Stack[-1])
0x71e: Pop(1)
0x71f: @@ ClearReplies()
0x720: Pop(0)
0x721: PushEmpty(bool)
0x722: Stack[-1] = (bool) 1
0x723: PushEmpty(bool)
0x724: Stack[-1] = (bool) 1
0x725: PushEmpty(bool, object)
0x726: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x727: Call2 0xe89

0x728: Pop(1)
0x729: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72a: PushEmpty(bool, object)
0x72b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72c: Call2 0xe93

0x72d: Pop(1)
0x72e: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72f: Stack[-1] = (bool) 0
0x730: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x731: PushEmpty(bool, object)
0x732: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x733: Call2 0xe9d

0x734: Pop(1)
0x735: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x736: Stack[-1] = (bool) 0
0x737: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x738: Push((int) 543290)
0x739: Push((int) 45747)
0x73a: Push((int) 45746)
0x73b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73c: Pop(3)
0x73d: PushEmpty(bool)
0x73e: Stack[-1] = (bool) 1
0x73f: PushEmpty(bool)
0x740: Stack[-1] = (bool) 1
0x741: PushEmpty(bool, object)
0x742: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x743: Call2 0xe7f

0x744: Pop(1)
0x745: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x746: PushEmpty(bool, object)
0x747: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x748: Call2 0xea7

0x749: Pop(1)
0x74a: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x74b: Stack[-1] = (bool) 0
0x74c: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x74d: PushEmpty(bool, object)
0x74e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74f: Call2 0xebb

0x750: Pop(1)
0x751: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x752: Stack[-1] = (bool) 0
0x753: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x754: Push((int) 543294)
0x755: Push((int) 45752)
0x756: Push((int) 45750)
0x757: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x758: Pop(3)
0x759: PushEmpty(bool, object)
0x75a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75b: Call2 0xeb1

0x75c: Pop(1)
0x75d: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x75e: Push((int) 543295)
0x75f: Push((int) 45761)
0x760: Push((int) 45751)
0x761: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x762: Pop(3)
0x763: Push((int) 543288)
0x764: Push((int) -1)
0x765: Push((int) 45744)
0x766: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x767: Pop(3)
0x768: Push((int) 543289)
0x769: Push((int) -1)
0x76a: Push((int) 45745)
0x76b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76c: Pop(3)
0x76d: Push((int) 543304)
0x76e: Push((int) -1)
0x76f: Push((int) 45760)
0x770: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x771: Pop(3)
0x772: GOTO 0x7e9

0x773: PushEmpty(string)
0x774: Stack[-1] = "Neutral"
0x775: Call2 0x807

0x776: Pop(1)
0x777: Push((int) 537723)
0x778: @@ SetMessage(Stack[-1])
0x779: Pop(1)
0x77a: @@ ClearReplies()
0x77b: Pop(0)
0x77c: PushEmpty(bool, object)
0x77d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77e: Call2 0xe51

0x77f: Pop(1)
0x780: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x781: Push((int) 537724)
0x782: Push((int) 39573)
0x783: Push((int) 39572)
0x784: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x785: Pop(3)
0x786: PushEmpty(bool, object)
0x787: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x788: Call2 0xe51

0x789: Pop(1)
0x78a: Pop(1); Push((bool) Stack[-1] == 0)
0x78b: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x78c: Push((int) 537728)
0x78d: Push((int) -1)
0x78e: Push((int) 39576)
0x78f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x790: Pop(3)
0x791: PushEmpty(bool)
0x792: Stack[-1] = (bool) 0
0x793: PushEmpty(bool)
0x794: Stack[-1] = (bool) 0
0x795: PushEmpty(bool)
0x796: Stack[-1] = (bool) 0
0x797: PushEmpty(bool, object)
0x798: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x799: Call2 0xe51

0x79a: Pop(1)
0x79b: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x79c: PushEmpty(bool, object)
0x79d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79e: Call2 0xe75

0x79f: Pop(1)
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x7a1: Stack[-1] = (bool) 1
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a3: PushEmpty(bool, object)
0x7a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a5: Call2 0xec5

0x7a6: Pop(1)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a8: Stack[-1] = (bool) 1
0x7a9: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7aa: PushEmpty(bool, object)
0x7ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ac: Call2 0xe69

0x7ad: Pop(1)
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7af: Stack[-1] = (bool) 1
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7b1: Push((int) 537729)
0x7b2: Push((int) 39578)
0x7b3: Push((int) 39577)
0x7b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b5: Pop(3)
0x7b6: PushEmpty(bool)
0x7b7: Stack[-1] = (bool) 0
0x7b8: PushEmpty(bool)
0x7b9: Stack[-1] = (bool) 0
0x7ba: PushEmpty(bool, object)
0x7bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7bc: Call2 0xe51

0x7bd: Pop(1)
0x7be: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7bf: PushEmpty(bool, object)
0x7c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c1: Call2 0xe75

0x7c2: Pop(1)
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c4: Stack[-1] = (bool) 1
0x7c5: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7c6: PushEmpty(bool, object)
0x7c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c8: Call2 0xecf

0x7c9: Pop(1)
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7cb: Stack[-1] = (bool) 1
0x7cc: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7cd: Push((int) 537740)
0x7ce: Push((int) 39589)
0x7cf: Push((int) 39588)
0x7d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d1: Pop(3)
0x7d2: PushEmpty(bool, object)
0x7d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d4: Call2 0xe9d

0x7d5: Pop(1)
0x7d6: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d7: Push((int) 537755)
0x7d8: Push((int) 39604)
0x7d9: Push((int) 39603)
0x7da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7db: Pop(3)
0x7dc: Push((int) 537783)
0x7dd: Push((int) -1)
0x7de: Push((int) 39634)
0x7df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e0: Pop(3)
0x7e1: Push((int) 537784)
0x7e2: Push((int) -1)
0x7e3: Push((int) 39635)
0x7e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e5: Pop(3)
0x7e6: GOTO 0x7e9

0x7e7: Return(); Pop(0)

0x7e8: GOTO 0x711

0x7e9: PushEmpty(bool)
0x7ea: Call2 0xfb7

0x7eb: Pop(0)
0x7ec: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7ed: @ lshWaitForAnimEnd()
0x7ee: Pop(0)
0x7ef: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7f0: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7f1: GOTO 0x7f7

0x7f2: PushEmpty(string)
0x7f3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7f4: Call2 0xc49

0x7f5: Pop(1)
0x7f6: GOTO 0x7ed

0x7f7: GOTO 0x806

0x7f8: Push("all")
0x7f9: Push("idle")
0x7fa: @ PlayAnimation(Stack[-2], Stack[-1])
0x7fb: Pop(2)
0x7fc: @ WaitForAnimEnd()
0x7fd: Pop(0)
0x7fe: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7ff: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x800: GOTO 0x806

0x801: Push("all")
0x802: Push("idle")
0x803: @ PlayAnimation(Stack[-2], Stack[-1])
0x804: Pop(2)
0x805: GOTO 0x7fc

0x806: Return(); Pop(0)

0x807: PushEmpty()
0x808: PushEmpty(bool)
0x809: Call2 0xfb7

0x80a: Pop(0)
0x80b: Pop(1); Push((bool) Stack[-1] == 0)
0x80c: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x80d: Return(); Pop(0)

0x80e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x80f: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x810: Return(); Pop(0)

0x811: PushEmpty(string, bool)
0x812: Stack[-2] = Stack[-3]
0x813: Push("")
0x814: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x815: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x816: Stack[-1] = (bool) 0
0x817: GOTO 0x819

0x818: Stack[-1] = (bool) 1
0x819: Call2 0xc59

0x81a: Pop(2)
0x81b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x81c: Return(); Pop(0)

0x81d: PushEmpty()
0x81e: Push((int) 1)
0x81f: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0x820: PushEmpty()
0x821: Call2 0xc73

0x822: Pop(0)
0x823: Push((int) 45744)
0x824: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x825: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x826: PushEmpty(object, object)
0x827: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x828: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x829: Call2 0xe4c

0x82a: Pop(2)
0x82b: Push((int) 39574)
0x82c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82d: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x82e: PushEmpty(object, object)
0x82f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x830: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x831: Call2 0xe4c

0x832: Pop(2)
0x833: Push((int) 39576)
0x834: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x835: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x836: PushEmpty(object, object)
0x837: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x838: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x839: Call2 0xe4c

0x83a: Pop(2)
0x83b: Push((int) 45743)
0x83c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83d: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x83e: PushEmpty(bool, object)
0x83f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x840: Call2 0xe5d

0x841: Pop(1)
0x842: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x843: PushEmpty(string)
0x844: Stack[-1] = "Neutral"
0x845: Call2 0x807

0x846: Pop(1)
0x847: Push((int) 543287)
0x848: @@ SetMessage(Stack[-1])
0x849: Pop(1)
0x84a: @@ ClearReplies()
0x84b: Pop(0)
0x84c: PushEmpty(bool)
0x84d: Stack[-1] = (bool) 1
0x84e: PushEmpty(bool)
0x84f: Stack[-1] = (bool) 1
0x850: PushEmpty(bool, object)
0x851: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x852: Call2 0xe89

0x853: Pop(1)
0x854: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x855: PushEmpty(bool, object)
0x856: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x857: Call2 0xe93

0x858: Pop(1)
0x859: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x85a: Stack[-1] = (bool) 0
0x85b: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x85c: PushEmpty(bool, object)
0x85d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85e: Call2 0xe9d

0x85f: Pop(1)
0x860: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x861: Stack[-1] = (bool) 0
0x862: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x863: Push((int) 543290)
0x864: Push((int) 45747)
0x865: Push((int) 45746)
0x866: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x867: Pop(3)
0x868: PushEmpty(bool)
0x869: Stack[-1] = (bool) 1
0x86a: PushEmpty(bool)
0x86b: Stack[-1] = (bool) 1
0x86c: PushEmpty(bool, object)
0x86d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86e: Call2 0xe7f

0x86f: Pop(1)
0x870: IF (Stack[-1] == 0) GOTO 0x877; Pop(1)

0x871: PushEmpty(bool, object)
0x872: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x873: Call2 0xea7

0x874: Pop(1)
0x875: IF (Stack[-1] == 0) GOTO 0x877; Pop(1)

0x876: Stack[-1] = (bool) 0
0x877: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x878: PushEmpty(bool, object)
0x879: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87a: Call2 0xebb

0x87b: Pop(1)
0x87c: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x87d: Stack[-1] = (bool) 0
0x87e: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x87f: Push((int) 543294)
0x880: Push((int) 45752)
0x881: Push((int) 45750)
0x882: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x883: Pop(3)
0x884: PushEmpty(bool, object)
0x885: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x886: Call2 0xeb1

0x887: Pop(1)
0x888: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x889: Push((int) 543295)
0x88a: Push((int) 45761)
0x88b: Push((int) 45751)
0x88c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88d: Pop(3)
0x88e: Push((int) 543288)
0x88f: Push((int) -1)
0x890: Push((int) 45744)
0x891: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x892: Pop(3)
0x893: Push((int) 543289)
0x894: Push((int) -1)
0x895: Push((int) 45745)
0x896: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x897: Pop(3)
0x898: Push((int) 543304)
0x899: Push((int) -1)
0x89a: Push((int) 45760)
0x89b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89c: Pop(3)
0x89d: Return(); Pop(0)

0x89e: PushEmpty(string)
0x89f: Stack[-1] = "Neutral"
0x8a0: Call2 0x807

0x8a1: Pop(1)
0x8a2: Push((int) 537723)
0x8a3: @@ SetMessage(Stack[-1])
0x8a4: Pop(1)
0x8a5: @@ ClearReplies()
0x8a6: Pop(0)
0x8a7: PushEmpty(bool, object)
0x8a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a9: Call2 0xe51

0x8aa: Pop(1)
0x8ab: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8ac: Push((int) 537724)
0x8ad: Push((int) 39573)
0x8ae: Push((int) 39572)
0x8af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b0: Pop(3)
0x8b1: PushEmpty(bool, object)
0x8b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b3: Call2 0xe51

0x8b4: Pop(1)
0x8b5: Pop(1); Push((bool) Stack[-1] == 0)
0x8b6: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8b7: Push((int) 537728)
0x8b8: Push((int) -1)
0x8b9: Push((int) 39576)
0x8ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bb: Pop(3)
0x8bc: PushEmpty(bool)
0x8bd: Stack[-1] = (bool) 0
0x8be: PushEmpty(bool)
0x8bf: Stack[-1] = (bool) 0
0x8c0: PushEmpty(bool)
0x8c1: Stack[-1] = (bool) 0
0x8c2: PushEmpty(bool, object)
0x8c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c4: Call2 0xe51

0x8c5: Pop(1)
0x8c6: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8c7: PushEmpty(bool, object)
0x8c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c9: Call2 0xe75

0x8ca: Pop(1)
0x8cb: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8cc: Stack[-1] = (bool) 1
0x8cd: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8ce: PushEmpty(bool, object)
0x8cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d0: Call2 0xec5

0x8d1: Pop(1)
0x8d2: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8d3: Stack[-1] = (bool) 1
0x8d4: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8d5: PushEmpty(bool, object)
0x8d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d7: Call2 0xe69

0x8d8: Pop(1)
0x8d9: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8da: Stack[-1] = (bool) 1
0x8db: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8dc: Push((int) 537729)
0x8dd: Push((int) 39578)
0x8de: Push((int) 39577)
0x8df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e0: Pop(3)
0x8e1: PushEmpty(bool)
0x8e2: Stack[-1] = (bool) 0
0x8e3: PushEmpty(bool)
0x8e4: Stack[-1] = (bool) 0
0x8e5: PushEmpty(bool, object)
0x8e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e7: Call2 0xe51

0x8e8: Pop(1)
0x8e9: IF (Stack[-1] == 0) GOTO 0x8f0; Pop(1)

0x8ea: PushEmpty(bool, object)
0x8eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ec: Call2 0xe75

0x8ed: Pop(1)
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f0; Pop(1)

0x8ef: Stack[-1] = (bool) 1
0x8f0: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8f1: PushEmpty(bool, object)
0x8f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f3: Call2 0xecf

0x8f4: Pop(1)
0x8f5: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8f6: Stack[-1] = (bool) 1
0x8f7: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8f8: Push((int) 537740)
0x8f9: Push((int) 39589)
0x8fa: Push((int) 39588)
0x8fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fc: Pop(3)
0x8fd: PushEmpty(bool, object)
0x8fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ff: Call2 0xe9d

0x900: Pop(1)
0x901: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x902: Push((int) 537755)
0x903: Push((int) 39604)
0x904: Push((int) 39603)
0x905: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x906: Pop(3)
0x907: Push((int) 537783)
0x908: Push((int) -1)
0x909: Push((int) 39634)
0x90a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90b: Pop(3)
0x90c: Push((int) 537784)
0x90d: Push((int) -1)
0x90e: Push((int) 39635)
0x90f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x910: Pop(3)
0x911: Return(); Pop(0)

0x912: Push((int) 39604)
0x913: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x914: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x915: PushEmpty(string)
0x916: Stack[-1] = "Neutral"
0x917: Call2 0x807

0x918: Pop(1)
0x919: Push((int) 537756)
0x91a: @@ SetMessage(Stack[-1])
0x91b: Pop(1)
0x91c: @@ ClearReplies()
0x91d: Pop(0)
0x91e: Push((int) 537757)
0x91f: Push((int) 39606)
0x920: Push((int) 39605)
0x921: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x922: Pop(3)
0x923: Push((int) 537766)
0x924: Push((int) 39615)
0x925: Push((int) 39614)
0x926: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x927: Pop(3)
0x928: Push((int) 537782)
0x929: Push((int) -1)
0x92a: Push((int) 39633)
0x92b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92c: Pop(3)
0x92d: Return(); Pop(0)

0x92e: Push((int) 39615)
0x92f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x930: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x931: PushEmpty(string)
0x932: Stack[-1] = "Neutral"
0x933: Call2 0x807

0x934: Pop(1)
0x935: Push((int) 537767)
0x936: @@ SetMessage(Stack[-1])
0x937: Pop(1)
0x938: @@ ClearReplies()
0x939: Pop(0)
0x93a: Push((int) 537768)
0x93b: Push((int) 39617)
0x93c: Push((int) 39616)
0x93d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93e: Pop(3)
0x93f: Push((int) 537781)
0x940: Push((int) -1)
0x941: Push((int) 39632)
0x942: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x943: Pop(3)
0x944: Return(); Pop(0)

0x945: Push((int) 39617)
0x946: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x947: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x948: PushEmpty(string)
0x949: Stack[-1] = "Neutral"
0x94a: Call2 0x807

0x94b: Pop(1)
0x94c: Push((int) 537769)
0x94d: @@ SetMessage(Stack[-1])
0x94e: Pop(1)
0x94f: @@ ClearReplies()
0x950: Pop(0)
0x951: Push((int) 537770)
0x952: Push((int) 39608)
0x953: Push((int) 39618)
0x954: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x955: Pop(3)
0x956: Push((int) 537771)
0x957: Push((int) 39621)
0x958: Push((int) 39620)
0x959: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95a: Pop(3)
0x95b: Return(); Pop(0)

0x95c: Push((int) 39621)
0x95d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95e: IF (Stack[-1] == 0) GOTO 0x978; Pop(1)

0x95f: PushEmpty(string)
0x960: Stack[-1] = "Neutral"
0x961: Call2 0x807

0x962: Pop(1)
0x963: Push((int) 537772)
0x964: @@ SetMessage(Stack[-1])
0x965: Pop(1)
0x966: @@ ClearReplies()
0x967: Pop(0)
0x968: PushEmpty(bool, object)
0x969: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96a: Call2 0xe51

0x96b: Pop(1)
0x96c: IF (Stack[-1] == 0) GOTO 0x972; Pop(1)

0x96d: Push((int) 537773)
0x96e: Push((int) 39623)
0x96f: Push((int) 39622)
0x970: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x971: Pop(3)
0x972: Push((int) 537777)
0x973: Push((int) 39628)
0x974: Push((int) 39627)
0x975: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x976: Pop(3)
0x977: Return(); Pop(0)

0x978: Push((int) 39628)
0x979: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97a: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x97b: PushEmpty(string)
0x97c: Stack[-1] = "Neutral"
0x97d: Call2 0x807

0x97e: Pop(1)
0x97f: Push((int) 537778)
0x980: @@ SetMessage(Stack[-1])
0x981: Pop(1)
0x982: @@ ClearReplies()
0x983: Pop(0)
0x984: Push((int) 537779)
0x985: Push((int) 39608)
0x986: Push((int) 39629)
0x987: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x988: Pop(3)
0x989: PushEmpty(bool, object)
0x98a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98b: Call2 0xe51

0x98c: Pop(1)
0x98d: IF (Stack[-1] == 0) GOTO 0x993; Pop(1)

0x98e: Push((int) 537780)
0x98f: Push((int) -1)
0x990: Push((int) 39631)
0x991: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x992: Pop(3)
0x993: Return(); Pop(0)

0x994: Push((int) 39623)
0x995: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x996: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x997: PushEmpty(string)
0x998: Stack[-1] = "Neutral"
0x999: Call2 0x807

0x99a: Pop(1)
0x99b: Push((int) 537774)
0x99c: @@ SetMessage(Stack[-1])
0x99d: Pop(1)
0x99e: @@ ClearReplies()
0x99f: Pop(0)
0x9a0: Push((int) 537775)
0x9a1: Push((int) 39608)
0x9a2: Push((int) 39624)
0x9a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a4: Pop(3)
0x9a5: Push((int) 537776)
0x9a6: Push((int) -1)
0x9a7: Push((int) 39626)
0x9a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a9: Pop(3)
0x9aa: Return(); Pop(0)

0x9ab: Push((int) 39606)
0x9ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ad: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9ae: PushEmpty(string)
0x9af: Stack[-1] = "Neutral"
0x9b0: Call2 0x807

0x9b1: Pop(1)
0x9b2: Push((int) 537758)
0x9b3: @@ SetMessage(Stack[-1])
0x9b4: Pop(1)
0x9b5: @@ ClearReplies()
0x9b6: Pop(0)
0x9b7: Push((int) 537759)
0x9b8: Push((int) 39608)
0x9b9: Push((int) 39607)
0x9ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bb: Pop(3)
0x9bc: Return(); Pop(0)

0x9bd: Push((int) 39608)
0x9be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bf: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9c0: PushEmpty(string)
0x9c1: Stack[-1] = "Neutral"
0x9c2: Call2 0x807

0x9c3: Pop(1)
0x9c4: Push((int) 537760)
0x9c5: @@ SetMessage(Stack[-1])
0x9c6: Pop(1)
0x9c7: @@ ClearReplies()
0x9c8: Pop(0)
0x9c9: Push((int) 537761)
0x9ca: Push((int) 39610)
0x9cb: Push((int) 39609)
0x9cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cd: Pop(3)
0x9ce: Push((int) 537765)
0x9cf: Push((int) -1)
0x9d0: Push((int) 39613)
0x9d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d2: Pop(3)
0x9d3: Return(); Pop(0)

0x9d4: Push((int) 39610)
0x9d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d6: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9d7: PushEmpty(string)
0x9d8: Stack[-1] = "Neutral"
0x9d9: Call2 0x807

0x9da: Pop(1)
0x9db: Push((int) 537762)
0x9dc: @@ SetMessage(Stack[-1])
0x9dd: Pop(1)
0x9de: @@ ClearReplies()
0x9df: Pop(0)
0x9e0: Push((int) 537763)
0x9e1: Push((int) -1)
0x9e2: Push((int) 39611)
0x9e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e4: Pop(3)
0x9e5: Push((int) 537764)
0x9e6: Push((int) -1)
0x9e7: Push((int) 39612)
0x9e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e9: Pop(3)
0x9ea: Return(); Pop(0)

0x9eb: Push((int) 39589)
0x9ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ed: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0x9ee: PushEmpty(string)
0x9ef: Stack[-1] = "Neutral"
0x9f0: Call2 0x807

0x9f1: Pop(1)
0x9f2: Push((int) 537741)
0x9f3: @@ SetMessage(Stack[-1])
0x9f4: Pop(1)
0x9f5: @@ ClearReplies()
0x9f6: Pop(0)
0x9f7: Push((int) 537742)
0x9f8: Push((int) 39591)
0x9f9: Push((int) 39590)
0x9fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fb: Pop(3)
0x9fc: Push((int) 537747)
0x9fd: Push((int) 39596)
0x9fe: Push((int) 39595)
0x9ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa00: Pop(3)
0xa01: Push((int) 537754)
0xa02: Push((int) -1)
0xa03: Push((int) 39602)
0xa04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa05: Pop(3)
0xa06: Return(); Pop(0)

0xa07: Push((int) 39596)
0xa08: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa09: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa0a: PushEmpty(string)
0xa0b: Stack[-1] = "Neutral"
0xa0c: Call2 0x807

0xa0d: Pop(1)
0xa0e: Push((int) 537748)
0xa0f: @@ SetMessage(Stack[-1])
0xa10: Pop(1)
0xa11: @@ ClearReplies()
0xa12: Pop(0)
0xa13: Push((int) 537749)
0xa14: Push((int) 39598)
0xa15: Push((int) 39597)
0xa16: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa17: Pop(3)
0xa18: Push((int) 537753)
0xa19: Push((int) -1)
0xa1a: Push((int) 39601)
0xa1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1c: Pop(3)
0xa1d: Return(); Pop(0)

0xa1e: Push((int) 39598)
0xa1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa20: IF (Stack[-1] == 0) GOTO 0xa35; Pop(1)

0xa21: PushEmpty(string)
0xa22: Stack[-1] = "Neutral"
0xa23: Call2 0x807

0xa24: Pop(1)
0xa25: Push((int) 537750)
0xa26: @@ SetMessage(Stack[-1])
0xa27: Pop(1)
0xa28: @@ ClearReplies()
0xa29: Pop(0)
0xa2a: Push((int) 537751)
0xa2b: Push((int) -1)
0xa2c: Push((int) 39599)
0xa2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2e: Pop(3)
0xa2f: Push((int) 537752)
0xa30: Push((int) -1)
0xa31: Push((int) 39600)
0xa32: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa33: Pop(3)
0xa34: Return(); Pop(0)

0xa35: Push((int) 39591)
0xa36: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa37: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa38: PushEmpty(string)
0xa39: Stack[-1] = "Neutral"
0xa3a: Call2 0x807

0xa3b: Pop(1)
0xa3c: Push((int) 537743)
0xa3d: @@ SetMessage(Stack[-1])
0xa3e: Pop(1)
0xa3f: @@ ClearReplies()
0xa40: Pop(0)
0xa41: Push((int) 537744)
0xa42: Push((int) -1)
0xa43: Push((int) 39592)
0xa44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa45: Pop(3)
0xa46: Push((int) 537745)
0xa47: Push((int) -1)
0xa48: Push((int) 39593)
0xa49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4a: Pop(3)
0xa4b: Push((int) 537746)
0xa4c: Push((int) -1)
0xa4d: Push((int) 39594)
0xa4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4f: Pop(3)
0xa50: Return(); Pop(0)

0xa51: Push((int) 39578)
0xa52: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa53: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa54: PushEmpty(string)
0xa55: Stack[-1] = "Neutral"
0xa56: Call2 0x807

0xa57: Pop(1)
0xa58: Push((int) 537730)
0xa59: @@ SetMessage(Stack[-1])
0xa5a: Pop(1)
0xa5b: @@ ClearReplies()
0xa5c: Pop(0)
0xa5d: Push((int) 537731)
0xa5e: Push((int) 39580)
0xa5f: Push((int) 39579)
0xa60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa61: Pop(3)
0xa62: Push((int) 537738)
0xa63: Push((int) -1)
0xa64: Push((int) 39586)
0xa65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa66: Pop(3)
0xa67: Return(); Pop(0)

0xa68: Push((int) 39580)
0xa69: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6a: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa6b: PushEmpty(string)
0xa6c: Stack[-1] = "Neutral"
0xa6d: Call2 0x807

0xa6e: Pop(1)
0xa6f: Push((int) 537732)
0xa70: @@ SetMessage(Stack[-1])
0xa71: Pop(1)
0xa72: @@ ClearReplies()
0xa73: Pop(0)
0xa74: Push((int) 537733)
0xa75: Push((int) 39582)
0xa76: Push((int) 39581)
0xa77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa78: Pop(3)
0xa79: Push((int) 537737)
0xa7a: Push((int) -1)
0xa7b: Push((int) 39585)
0xa7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7d: Pop(3)
0xa7e: Return(); Pop(0)

0xa7f: Push((int) 39582)
0xa80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa81: IF (Stack[-1] == 0) GOTO 0xa96; Pop(1)

0xa82: PushEmpty(string)
0xa83: Stack[-1] = "Neutral"
0xa84: Call2 0x807

0xa85: Pop(1)
0xa86: Push((int) 537734)
0xa87: @@ SetMessage(Stack[-1])
0xa88: Pop(1)
0xa89: @@ ClearReplies()
0xa8a: Pop(0)
0xa8b: Push((int) 537735)
0xa8c: Push((int) -1)
0xa8d: Push((int) 39583)
0xa8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8f: Pop(3)
0xa90: Push((int) 537736)
0xa91: Push((int) -1)
0xa92: Push((int) 39584)
0xa93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa94: Pop(3)
0xa95: Return(); Pop(0)

0xa96: Push((int) 39573)
0xa97: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa98: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xa99: PushEmpty(string)
0xa9a: Stack[-1] = "Neutral"
0xa9b: Call2 0x807

0xa9c: Pop(1)
0xa9d: Push((int) 537725)
0xa9e: @@ SetMessage(Stack[-1])
0xa9f: Pop(1)
0xaa0: @@ ClearReplies()
0xaa1: Pop(0)
0xaa2: Push((int) 537726)
0xaa3: Push((int) -1)
0xaa4: Push((int) 39574)
0xaa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa6: Pop(3)
0xaa7: Push((int) 537727)
0xaa8: Push((int) -1)
0xaa9: Push((int) 39575)
0xaaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaab: Pop(3)
0xaac: Return(); Pop(0)

0xaad: Push((int) 45761)
0xaae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaaf: IF (Stack[-1] == 0) GOTO 0xac4; Pop(1)

0xab0: PushEmpty(string)
0xab1: Stack[-1] = "Neutral"
0xab2: Call2 0x807

0xab3: Pop(1)
0xab4: Push((int) 543305)
0xab5: @@ SetMessage(Stack[-1])
0xab6: Pop(1)
0xab7: @@ ClearReplies()
0xab8: Pop(0)
0xab9: Push((int) 543306)
0xaba: Push((int) -1)
0xabb: Push((int) 45762)
0xabc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabd: Pop(3)
0xabe: Push((int) 543307)
0xabf: Push((int) 45766)
0xac0: Push((int) 45763)
0xac1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac2: Pop(3)
0xac3: Return(); Pop(0)

0xac4: Push((int) 45766)
0xac5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac6: IF (Stack[-1] == 0) GOTO 0xadb; Pop(1)

0xac7: PushEmpty(string)
0xac8: Stack[-1] = "Neutral"
0xac9: Call2 0x807

0xaca: Pop(1)
0xacb: Push((int) 543310)
0xacc: @@ SetMessage(Stack[-1])
0xacd: Pop(1)
0xace: @@ ClearReplies()
0xacf: Pop(0)
0xad0: Push((int) 543312)
0xad1: Push((int) -1)
0xad2: Push((int) 45768)
0xad3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad4: Pop(3)
0xad5: Push((int) 543311)
0xad6: Push((int) -1)
0xad7: Push((int) 45767)
0xad8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad9: Pop(3)
0xada: Return(); Pop(0)

0xadb: Push((int) 45752)
0xadc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xadd: IF (Stack[-1] == 0) GOTO 0xaf2; Pop(1)

0xade: PushEmpty(string)
0xadf: Stack[-1] = "Neutral"
0xae0: Call2 0x807

0xae1: Pop(1)
0xae2: Push((int) 543296)
0xae3: @@ SetMessage(Stack[-1])
0xae4: Pop(1)
0xae5: @@ ClearReplies()
0xae6: Pop(0)
0xae7: Push((int) 543297)
0xae8: Push((int) 45755)
0xae9: Push((int) 45753)
0xaea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaeb: Pop(3)
0xaec: Push((int) 543298)
0xaed: Push((int) 45756)
0xaee: Push((int) 45754)
0xaef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf0: Pop(3)
0xaf1: Return(); Pop(0)

0xaf2: Push((int) 45756)
0xaf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf4: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xaf5: PushEmpty(string)
0xaf6: Stack[-1] = "Neutral"
0xaf7: Call2 0x807

0xaf8: Pop(1)
0xaf9: Push((int) 543300)
0xafa: @@ SetMessage(Stack[-1])
0xafb: Pop(1)
0xafc: @@ ClearReplies()
0xafd: Pop(0)
0xafe: Push((int) 543302)
0xaff: Push((int) -1)
0xb00: Push((int) 45758)
0xb01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb02: Pop(3)
0xb03: Push((int) 543303)
0xb04: Push((int) -1)
0xb05: Push((int) 45759)
0xb06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb07: Pop(3)
0xb08: Return(); Pop(0)

0xb09: Push((int) 45755)
0xb0a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0b: IF (Stack[-1] == 0) GOTO 0xb1b; Pop(1)

0xb0c: PushEmpty(string)
0xb0d: Stack[-1] = "Neutral"
0xb0e: Call2 0x807

0xb0f: Pop(1)
0xb10: Push((int) 543299)
0xb11: @@ SetMessage(Stack[-1])
0xb12: Pop(1)
0xb13: @@ ClearReplies()
0xb14: Pop(0)
0xb15: Push((int) 543301)
0xb16: Push((int) -1)
0xb17: Push((int) 45757)
0xb18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb19: Pop(3)
0xb1a: Return(); Pop(0)

0xb1b: Push((int) 45747)
0xb1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1d: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb1e: PushEmpty(string)
0xb1f: Stack[-1] = "Neutral"
0xb20: Call2 0x807

0xb21: Pop(1)
0xb22: Push((int) 543291)
0xb23: @@ SetMessage(Stack[-1])
0xb24: Pop(1)
0xb25: @@ ClearReplies()
0xb26: Pop(0)
0xb27: Push((int) 543292)
0xb28: Push((int) -1)
0xb29: Push((int) 45748)
0xb2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2b: Pop(3)
0xb2c: Push((int) 543293)
0xb2d: Push((int) -1)
0xb2e: Push((int) 45749)
0xb2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb30: Pop(3)
0xb31: Return(); Pop(0)

0xb32: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb33: PushEmpty(bool)
0xb34: Call2 0xfb7

0xb35: Pop(0)
0xb36: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb37: @ lshStopAnimation()
0xb38: Pop(0)
0xb39: GOTO 0xb3c

0xb3a: @ StopAnimation()
0xb3b: Pop(0)
0xb3c: Return(); Pop(0)

0xb3d: GOTO 0x81e

0xb3e: Return(); Pop(0)

0xb3f: PushEmpty(cvector, cvector)
0xb40: @ GetPosition(Stack[-1])
0xb41: Pop(0)
0xb42: Stack[-3] = Stack[-1]
0xb43: Return(); Pop(2)

0xb44: PushEmpty(cvector, cvector, cvector, cvector)
0xb45: @ GetPosition(Stack[-2])
0xb46: Pop(0)
0xb47: @@ GetPosition(Stack[-1])
0xb48: Pop(0)
0xb49: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xb4a: Return(); Pop(4)

0xb4b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xb4c: @ GetPosition(Stack[-3])
0xb4d: Pop(0)
0xb4e: @@ GetPosition(Stack[-2])
0xb4f: Pop(0)
0xb50: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xb51: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xb52: Return(); Pop(6)

0xb53: PushEmpty(bool, bool)
0xb54: @ IsPlayerActor(Stack[-3], Stack[-1])
0xb55: Pop(0)
0xb56: Stack[-4] = Stack[-1]
0xb57: Return(); Pop(2)

0xb58: PushEmpty(bool, bool)
0xb59: Push("HasProperty")
0xb5a: Push((int) 2)
0xb5b: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xb5c: Pop(1); Push((bool) Stack[-1] == 0)
0xb5d: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb5e: Stack[-5] = (bool) 0
0xb5f: Return(); Pop(2)

0xb60: @@ HasProperty(Stack[-3], Stack[-1])
0xb61: Pop(0)
0xb62: Stack[-5] = Stack[-1]
0xb63: Return(); Pop(2)

0xb64: PushEmpty(bool, bool)
0xb65: @@ IsDead(Stack[-1])
0xb66: Pop(0)
0xb67: Stack[-4] = Stack[-1]
0xb68: Return(); Pop(2)

0xb69: PushEmpty(object, object, object, object)
0xb6a: Pop(0); Push((bool) Stack[-5] == 0)
0xb6b: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb6c: Stack[-6] = (bool) 0
0xb6d: Return(); Pop(4)

0xb6e: PushEmpty(bool)
0xb6f: Stack[-1] = (bool) 0
0xb70: Push("IsDead")
0xb71: Push((int) 1)
0xb72: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xb73: IF (Stack[-1] == 0) GOTO 0xb7a; Pop(1)

0xb74: PushEmpty(bool, object)
0xb75: Stack[-1] = Stack[-8]
0xb76: Call2 0xb64

0xb77: Pop(1)
0xb78: IF (Stack[-1] == 0) GOTO 0xb7a; Pop(1)

0xb79: Stack[-1] = (bool) 1
0xb7a: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb7b: Stack[-6] = (bool) 0
0xb7c: Return(); Pop(4)

0xb7d: @ GetScene(Stack[-2])
0xb7e: Pop(0)
0xb7f: Pop(0); Push((bool) Stack[-2] == 0)
0xb80: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb81: Stack[-6] = (bool) 0
0xb82: Return(); Pop(4)

0xb83: @@ GetScene(Stack[-1])
0xb84: Pop(0)
0xb85: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xb86: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb87: Stack[-6] = (bool) 0
0xb88: Return(); Pop(4)

0xb89: Stack[-6] = (bool) 1
0xb8a: Return(); Pop(4)

0xb8b: Stack[-1] = 0
0xb8c: Stack[-2] = 0
0xb8d: PushEmpty(int, int)
0xb8e: PushEmpty(bool, object)
0xb8f: Stack[-1] = Stack[-5]
0xb90: Call2 0xb69

0xb91: Pop(1)
0xb92: Pop(1); Push((bool) Stack[-1] == 0)
0xb93: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xb94: Stack[-4] = (bool) 0
0xb95: Return(); Pop(2)

0xb96: PushEmpty(bool, object, string)
0xb97: Stack[-2] = Stack[-6]
0xb98: Stack[-1] = "noaccess"
0xb99: Call2 0xb58

0xb9a: Pop(2)
0xb9b: Pop(1); Push((bool) Stack[-1] == 0)
0xb9c: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb9d: Stack[-4] = (bool) 1
0xb9e: Return(); Pop(2)

0xb9f: Push("noaccess")
0xba0: @@ GetProperty(Stack[-1], Stack[-2])
0xba1: Pop(1)
0xba2: Push((int) 0)
0xba3: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xba4: Return(); Pop(2)

0xba5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xba6: @@ GetPosition(Stack[-3])
0xba7: Pop(0)
0xba8: @ GetPosition(Stack[-2])
0xba9: Pop(0)
0xbaa: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xbab: Push(CvectorIndex(Stack[-1], 0))
0xbac: Push(CvectorIndex(Stack[-2], 2))
0xbad: @ RotateAsync(Stack[-2], Stack[-1])
0xbae: Pop(2)
0xbaf: Return(); Pop(6)

0xbb0: PushEmpty(bool, bool)
0xbb1: @ IsLoaded(Stack[-1])
0xbb2: Pop(0)
0xbb3: Stack[-3] = Stack[-1]
0xbb4: Return(); Pop(2)

0xbb5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xbb6: @@ GetPosition(Stack[-8])
0xbb7: Pop(0)
0xbb8: @@ GetEyesHeight(Stack[-9])
0xbb9: Pop(0)
0xbba: Push(CvectorIndex(Stack[-8], 1))
0xbbb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xbbc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xbbd: @ GetPosition(Stack[-7])
0xbbe: Pop(0)
0xbbf: @ GetEyesHeight(Stack[-9])
0xbc0: Pop(0)
0xbc1: Push(CvectorIndex(Stack[-7], 1))
0xbc2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xbc3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xbc4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xbc5: Push(CvectorIndex(Stack[-6], 1))
0xbc6: Stack[-1] = (int) 0
0xbc7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xbc8: Pop(0); Push(Stack[-6] | Stack[-6]);
0xbc9: Pop(1); Push(Sqrt(Stack[-1]))
0xbca: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xbcb: Stack[-5] = -Stack[-6]; Pop(0);
0xbcc: Pop(0); Push(Stack[-6] * Stack[-19]);
0xbcd: PushEmpty(cvector, cvector)
0xbce: Push(CVector(0.0, 1.0, 0.0))
0xbcf: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xbd0: Call2 0xc9a

0xbd1: Pop(1)
0xbd2: Push((int) 25)
0xbd3: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbd4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbd5: Push(CVector(0.0, 10.0, 0.0))
0xbd6: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xbd7: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xbd8: @ IsOverrideActive(Stack[-2])
0xbd9: Pop(0)
0xbda: Push(Stack[-2])
0xbdb: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbdc: Stack[-21] = (bool) 0
0xbdd: Return(); Pop(18)

0xbde: @ StopWorld()
0xbdf: Pop(0)
0xbe0: Push((bool) 1)
0xbe1: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xbe2: Pop(1)
0xbe3: Push(CvectorIndex(Stack[-4], 0))
0xbe4: Push(CvectorIndex(Stack[-5], 2))
0xbe5: @ Rotate(Stack[-2], Stack[-1])
0xbe6: Pop(2)
0xbe7: PushEmpty(bool)
0xbe8: Call2 0xfb7

0xbe9: Pop(0)
0xbea: IF (Stack[-1] == 0) GOTO 0xbec; Pop(1)

0xbeb: GOTO 0xbf4

0xbec: Push("head")
0xbed: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbee: Pop(1)
0xbef: Push(Stack[-1])
0xbf0: IF (Stack[-1] == 0) GOTO 0xbf4; Pop(1)

0xbf1: Push("head")
0xbf2: @ LookAsyncCamera(Stack[-1])
0xbf3: Pop(1)
0xbf4: @ CameraWaitForPlayFinish()
0xbf5: Pop(0)
0xbf6: @ ResumeWorld()
0xbf7: Pop(0)
0xbf8: Stack[-21] = (bool) 1
0xbf9: Return(); Pop(18)

0xbfa: PushEmpty(bool, bool)
0xbfb: Push((bool) 1)
0xbfc: @ CameraSwitchToNormal(Stack[-1])
0xbfd: Pop(1)
0xbfe: PushEmpty(bool)
0xbff: Call2 0xfb7

0xc00: Pop(0)
0xc01: IF (Stack[-1] == 0) GOTO 0xc03; Pop(1)

0xc02: GOTO 0xc0b

0xc03: Push("head")
0xc04: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc05: Pop(1)
0xc06: Push(Stack[-1])
0xc07: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xc08: Push("head")
0xc09: @ UnlookAsync(Stack[-1])
0xc0a: Pop(1)
0xc0b: Return(); Pop(2)

0xc0c: PushEmpty()
0xc0d: PushEmpty(bool, object, float)
0xc0e: Stack[-2] = Stack[-4]
0xc0f: Stack[-1] = (int) 70
0xc10: Call2 0xc14

0xc11: Stack[-5] = Stack[-3]
0xc12: Pop(3)
0xc13: Return(); Pop(0)

0xc14: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xc15: @@ GetPosition(Stack[-7])
0xc16: Pop(0)
0xc17: @@ GetEyesHeight(Stack[-8])
0xc18: Pop(0)
0xc19: Push(CvectorIndex(Stack[-7], 1))
0xc1a: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xc1b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc1c: @ GetPosition(Stack[-6])
0xc1d: Pop(0)
0xc1e: @ GetEyesHeight(Stack[-8])
0xc1f: Pop(0)
0xc20: Push(CvectorIndex(Stack[-6], 1))
0xc21: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xc22: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xc23: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xc24: Push(CvectorIndex(Stack[-5], 1))
0xc25: Stack[-1] = (int) 0
0xc26: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xc27: Pop(0); Push(Stack[-5] | Stack[-5]);
0xc28: Pop(1); Push(Sqrt(Stack[-1]))
0xc29: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xc2a: Stack[-4] = -Stack[-5]; Pop(0);
0xc2b: Pop(0); Push(Stack[-5] * Stack[-17]);
0xc2c: Push(CVector(0.0, 10.0, 0.0))
0xc2d: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xc2e: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xc2f: @ IsOverrideActive(Stack[-1])
0xc30: Pop(0)
0xc31: Push(Stack[-1])
0xc32: IF (Stack[-1] == 0) GOTO 0xc35; Pop(1)

0xc33: Stack[-19] = (bool) 0
0xc34: Return(); Pop(16)

0xc35: @ StopWorld()
0xc36: Pop(0)
0xc37: Push((bool) 1)
0xc38: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0xc39: Pop(1)
0xc3a: Push(CvectorIndex(Stack[-3], 0))
0xc3b: Push(CvectorIndex(Stack[-4], 2))
0xc3c: @ Rotate(Stack[-2], Stack[-1])
0xc3d: Pop(2)
0xc3e: @ CameraWaitForPlayFinish()
0xc3f: Pop(0)
0xc40: @ ResumeWorld()
0xc41: Pop(0)
0xc42: Stack[-19] = (bool) 1
0xc43: Return(); Pop(16)

0xc44: PushEmpty()
0xc45: Push((bool) 1)
0xc46: @ CameraSwitchToNormal(Stack[-1])
0xc47: Pop(1)
0xc48: Return(); Pop(0)

0xc49: PushEmpty(bool, float, float, bool, float, float)
0xc4a: @ lshHasAnimation(Stack[-3], Stack[-7])
0xc4b: Pop(0)
0xc4c: Push(Stack[-3])
0xc4d: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc4e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xc4f: Pop(0)
0xc50: Push((bool) 0)
0xc51: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc52: Pop(1)
0xc53: GOTO 0xc58

0xc54: Push("Can't find lsh animation : ")
0xc55: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc56: @ Trace(Stack[-1])
0xc57: Pop(1)
0xc58: Return(); Pop(6)

0xc59: PushEmpty(bool, float, float, bool, float, float)
0xc5a: @ lshHasAnimation(Stack[-3], Stack[-8])
0xc5b: Pop(0)
0xc5c: Push(Stack[-3])
0xc5d: IF (Stack[-1] == 0) GOTO 0xc63; Pop(1)

0xc5e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xc5f: Pop(0)
0xc60: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xc61: Pop(0)
0xc62: GOTO 0xc67

0xc63: Push("Can't find lsh animation : ")
0xc64: Pop(1); Push(Stack[-1] + Stack[-9]);
0xc65: @ Trace(Stack[-1])
0xc66: Pop(1)
0xc67: Return(); Pop(6)

0xc68: PushEmpty(float, cvector, float, cvector)
0xc69: @@ GetEyesHeight(Stack[-2])
0xc6a: Pop(0)
0xc6b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xc6c: Push(CvectorIndex(Stack[-1], 1))
0xc6d: Stack[-1] = Stack[-3]
0xc6e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xc6f: Push("head")
0xc70: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xc71: Pop(1)
0xc72: Return(); Pop(4)

0xc73: PushEmpty(bool)
0xc74: Call2 0xfb7

0xc75: Pop(0)
0xc76: IF (Stack[-1] == 0) GOTO 0xc79; Pop(1)

0xc77: @ lshStopSpeech()
0xc78: Pop(0)
0xc79: Return(); Pop(0)

0xc7a: PushEmpty(bool, bool)
0xc7b: PushEmpty(bool, int, int)
0xc7c: Stack[-2] = Stack[-7]
0xc7d: Stack[-1] = Stack[-6]
0xc7e: Call2 0xca4

0xc7f: Pop(2)
0xc80: IF (Stack[-1] == 0) GOTO 0xc84; Pop(1)

0xc81: Push((int) 0)
0xc82: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xc83: Pop(1)
0xc84: Return(); Pop(2)

0xc85: PushEmpty(int, bool, int, bool)
0xc86: PushEmpty(bool, int, int)
0xc87: Stack[-2] = Stack[-10]
0xc88: Stack[-1] = Stack[-9]
0xc89: Call2 0xca4

0xc8a: Pop(2)
0xc8b: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc8c: @ irand(Stack[-2], Stack[-5])
0xc8d: Pop(0)
0xc8e: Push((int) 0)
0xc8f: Push((int) 1)
0xc90: Pop(1); Push(Stack[-4] + Stack[-1]);
0xc91: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xc92: Pop(2)
0xc93: Return(); Pop(4)

0xc94: PushEmpty(object, object)
0xc95: @ self(Stack[-1])
0xc96: Pop(0)
0xc97: Stack[-3] = Stack[-1]
0xc98: Return(); Pop(2)

0xc99: Stack[-1] = 0
0xc9a: PushEmpty(float, float)
0xc9b: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc9c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xc9d: Push((float)0.0)
0xc9e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc9f: IF (Stack[-1] == 0) GOTO 0xca2; Pop(1)

0xca0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xca1: Return(); Pop(2)

0xca2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xca3: Return(); Pop(2)

0xca4: PushEmpty(int, int)
0xca5: @ irand(Stack[-1], Stack[-3])
0xca6: Pop(0)
0xca7: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xca8: Return(); Pop(2)

0xca9: PushEmpty()
0xcaa: Pop(0); Push(Stack[-2] | Stack[-1]);
0xcab: Pop(0); Push(Stack[-3] | Stack[-3]);
0xcac: Pop(0); Push(Stack[-3] | Stack[-3]);
0xcad: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcae: Pop(1); Push(Sqrt(Stack[-1]))
0xcaf: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xcb0: Return(); Pop(0)

0xcb1: PushEmpty()
0xcb2: Push(CvectorIndex(Stack[-2], 0))
0xcb3: Push(CvectorIndex(Stack[-2], 0))
0xcb4: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcb5: Push(CvectorIndex(Stack[-3], 2))
0xcb6: Push(CvectorIndex(Stack[-3], 2))
0xcb7: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcb8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xcb9: Return(); Pop(0)

0xcba: PushEmpty()
0xcbb: Push(CvectorIndex(Stack[-1], 0))
0xcbc: Push(CvectorIndex(Stack[-2], 0))
0xcbd: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcbe: Push(CvectorIndex(Stack[-2], 2))
0xcbf: Push(CvectorIndex(Stack[-3], 2))
0xcc0: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcc1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcc2: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xcc3: Return(); Pop(0)

0xcc4: PushEmpty()
0xcc5: PushEmpty(float, cvector, cvector)
0xcc6: Stack[-2] = Stack[-5]
0xcc7: Stack[-1] = Stack[-4]
0xcc8: Call2 0xcb1

0xcc9: Pop(2)
0xcca: PushEmpty(float, cvector)
0xccb: Stack[-1] = Stack[-5]
0xccc: Call2 0xcba

0xccd: Pop(1)
0xcce: PushEmpty(float, cvector)
0xccf: Stack[-1] = Stack[-5]
0xcd0: Call2 0xcba

0xcd1: Pop(1)
0xcd2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcd3: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xcd4: Return(); Pop(0)

0xcd5: PushEmpty(int, int)
0xcd6: @ GetVariable(Stack[-3], Stack[-1])
0xcd7: Pop(0)
0xcd8: Stack[-4] = Stack[-1]
0xcd9: Return(); Pop(2)

0xcda: PushEmpty(float, float)
0xcdb: @ GetGameTime(Stack[-1])
0xcdc: Pop(0)
0xcdd: Push((int) 1)
0xcde: PushEmpty(int)
0xcdf: Push((int) 24)
0xce0: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xce1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xce2: Return(); Pop(2)

0xce3: PushEmpty(float, float)
0xce4: @ GetGameTime(Stack[-1])
0xce5: Pop(0)
0xce6: PushEmpty(int)
0xce7: Stack[-1] = Stack[-2]
0xce8: Push((int) 24)
0xce9: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xcea: Return(); Pop(2)

0xceb: PushEmpty()
0xcec: Return(); Pop(0)

0xced: PushEmpty()
0xcee: Return(); Pop(0)

0xcef: PushEmpty()
0xcf0: Return(); Pop(0)

0xcf1: PushEmpty()
0xcf2: Return(); Pop(0)

0xcf3: PushEmpty()
0xcf4: Push("unholster")
0xcf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf6: IF (Stack[-1] == 0) GOTO 0xcfe; Pop(1)

0xcf7: PushEmpty(bool, object)
0xcf8: Stack[-1] = Stack[-4]
0xcf9: Call2 0xe16

0xcfa: Stack[-5] = Stack[-2]
0xcfb: Pop(2)
0xcfc: Return(); Pop(0)

0xcfd: GOTO 0xd11

0xcfe: Push("player_shot")
0xcff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd00: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xd01: PushEmpty(bool, object)
0xd02: Stack[-1] = Stack[-4]
0xd03: Call2 0xe23

0xd04: Stack[-5] = Stack[-2]
0xd05: Pop(2)
0xd06: Return(); Pop(0)

0xd07: GOTO 0xd11

0xd08: Push("battle")
0xd09: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0a: IF (Stack[-1] == 0) GOTO 0xd11; Pop(1)

0xd0b: PushEmpty(bool, object)
0xd0c: Stack[-1] = Stack[-4]
0xd0d: Call2 0xe3a

0xd0e: Stack[-5] = Stack[-2]
0xd0f: Pop(2)
0xd10: Return(); Pop(0)

0xd11: Stack[-3] = (bool) 0
0xd12: Return(); Pop(0)

0xd13: PushEmpty()
0xd14: Push("unholster")
0xd15: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd16: IF (Stack[-1] == 0) GOTO 0xd1c; Pop(1)

0xd17: PushEmpty(object)
0xd18: Stack[-1] = Stack[-3]
0xd19: Call2 0xe1b

0xd1a: Pop(1)
0xd1b: GOTO 0xd2b

0xd1c: Push("player_shot")
0xd1d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd1e: IF (Stack[-1] == 0) GOTO 0xd24; Pop(1)

0xd1f: PushEmpty(object)
0xd20: Stack[-1] = Stack[-3]
0xd21: Call2 0xe32

0xd22: Pop(1)
0xd23: GOTO 0xd2b

0xd24: Push("battle")
0xd25: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd26: IF (Stack[-1] == 0) GOTO 0xd2b; Pop(1)

0xd27: PushEmpty(object)
0xd28: Stack[-1] = Stack[-3]
0xd29: Call2 0xe41

0xd2a: Pop(1)
0xd2b: Return(); Pop(0)

0xd2c: PushEmpty(bool, bool)
0xd2d: PushEmpty(bool)
0xd2e: Stack[-1] = (bool) 0
0xd2f: PushEmpty(bool, object)
0xd30: Stack[-1] = Stack[-6]
0xd31: Call2 0xe16

0xd32: Pop(1)
0xd33: IF (Stack[-1] == 0) GOTO 0xd3a; Pop(1)

0xd34: PushEmpty(bool, object)
0xd35: Stack[-1] = Stack[-6]
0xd36: Call2 0xb53

0xd37: Pop(1)
0xd38: IF (Stack[-1] == 0) GOTO 0xd3a; Pop(1)

0xd39: Stack[-1] = (bool) 1
0xd3a: IF (Stack[-1] == 0) GOTO 0xd41; Pop(1)

0xd3b: @@ IsWeaponHolstered(Stack[-1])
0xd3c: Pop(0)
0xd3d: Pop(0); Push((bool) Stack[-1] == 0)
0xd3e: IF (Stack[-1] == 0) GOTO 0xd41; Pop(1)

0xd3f: Stack[-4] = (bool) 1
0xd40: Return(); Pop(2)

0xd41: Stack[-4] = (bool) 0
0xd42: Return(); Pop(2)

0xd43: PushEmpty()
0xd44: PushEmpty(object)
0xd45: Stack[-1] = Stack[-2]
0xd46: Call2 0xe1b

0xd47: Pop(1)
0xd48: Return(); Pop(0)

0xd49: PushEmpty()
0xd4a: PushEmpty(bool, object)
0xd4b: Stack[-1] = Stack[-3]
0xd4c: Call2 0xb53

0xd4d: Pop(1)
0xd4e: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd4f: PushEmpty(object)
0xd50: Call2 0xc94

0xd51: Pop(0)
0xd52: Push((float)-0.03)
0xd53: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xd54: Pop(2)
0xd55: Return(); Pop(0)

0xd56: PushEmpty(object, object)
0xd57: Push("heal")
0xd58: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd59: IF (Stack[-1] == 0) GOTO 0xd64; Pop(1)

0xd5a: Push("player")
0xd5b: @ FindActor(Stack[-2], Stack[-1])
0xd5c: Pop(1)
0xd5d: PushEmpty(bool, object)
0xd5e: Stack[-1] = Stack[-3]
0xd5f: Call2 0xe47

0xd60: Stack[-6] = Stack[-2]
0xd61: Pop(2)
0xd62: Return(); Pop(2)

0xd63: Stack[-1] = 0
0xd64: Stack[-4] = (bool) 0
0xd65: Return(); Pop(2)

0xd66: PushEmpty(object, object)
0xd67: Push("heal")
0xd68: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd69: IF (Stack[-1] == 0) GOTO 0xd72; Pop(1)

0xd6a: Push("player")
0xd6b: @ FindActor(Stack[-2], Stack[-1])
0xd6c: Pop(1)
0xd6d: PushEmpty(object)
0xd6e: Stack[-1] = Stack[-2]
0xd6f: Call2 0xe4a

0xd70: Pop(1)
0xd71: Stack[-1] = 0
0xd72: Return(); Pop(2)

0xd73: PushEmpty(string, string)
0xd74: Stack[-1] = "idle"
0xd75: Push(Stack[-3])
0xd76: IF (Stack[-1] == 0) GOTO 0xd78; Pop(1)

0xd77: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xd78: Stack[-4] = Stack[-1]
0xd79: Return(); Pop(2)

0xd7a: PushEmpty(int, bool, int, bool)
0xd7b: Stack[-2] = (int) 0
0xd7c: Push("all")
0xd7d: PushEmpty(string, int)
0xd7e: Stack[-1] = Stack[-5]
0xd7f: Call2 0xd73

0xd80: Pop(1)
0xd81: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd82: Pop(2)
0xd83: Pop(0); Push((bool) Stack[-1] == 0)
0xd84: IF (Stack[-1] == 0) GOTO 0xd86; Pop(1)

0xd85: GOTO 0xd89

0xd86: Push((int) 1)
0xd87: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd88: GOTO 0xd7c

0xd89: Stack[-5] = Stack[-2]
0xd8a: Return(); Pop(4)

0xd8b: PushEmpty()
0xd8c: PushEmpty(bool)
0xd8d: Call2 0xfe9

0xd8e: Pop(0)
0xd8f: IF (Stack[-1] == 0) GOTO 0xd92; Pop(1)

0xd90: Stack[-2] = (int) 2
0xd91: GOTO 0xd93

0xd92: Stack[-2] = (int) 0
0xd93: Return(); Pop(0)

0xd94: PushEmpty()
0xd95: PushEmpty(object)
0xd96: Stack[-1] = Stack[-2]
0xd97: Push(-1, 1); TaskCall(3)
0xd98: Call2 0x293

0xd99: Pop(-1, 1); TaskReturn
0xd9a: Pop(1)
0xd9b: Return(); Pop(0)

0xd9c: PushEmpty()
0xd9d: PushEmpty(bool, object)
0xd9e: Stack[-1] = Stack[-3]
0xd9f: Call2 0xb8d

0xda0: Pop(1)
0xda1: IF (Stack[-1] == 0) GOTO 0xda4; Pop(1)

0xda2: Stack[-2] = (int) 2
0xda3: GOTO 0xda5

0xda4: Stack[-2] = (int) 0
0xda5: Return(); Pop(0)

0xda6: PushEmpty()
0xda7: PushEmpty(object)
0xda8: Stack[-1] = Stack[-2]
0xda9: Push(-1, 3); TaskCall(4)
0xdaa: Call2 0x3a6

0xdab: Pop(-1, 3); TaskReturn
0xdac: Pop(1)
0xdad: Return(); Pop(0)

0xdae: PushEmpty()
0xdaf: PushEmpty(bool, object)
0xdb0: Stack[-1] = Stack[-4]
0xdb1: Call2 0xb8d

0xdb2: Pop(1)
0xdb3: IF (Stack[-1] == 0) GOTO 0xdb6; Pop(1)

0xdb4: Stack[-3] = (int) 2
0xdb5: GOTO 0xdb7

0xdb6: Stack[-3] = (int) 0
0xdb7: Return(); Pop(0)

0xdb8: PushEmpty()
0xdb9: PushEmpty(object)
0xdba: Stack[-1] = Stack[-2]
0xdbb: Push(-1, 3); TaskCall(5)
0xdbc: Call2 0x4a2

0xdbd: Pop(-1, 3); TaskReturn
0xdbe: Pop(1)
0xdbf: Return(); Pop(0)

0xdc0: PushEmpty(string, bool, string, bool)
0xdc1: PushEmpty(bool, object, string)
0xdc2: Stack[-2] = Stack[-9]
0xdc3: Stack[-1] = "class"
0xdc4: Call2 0xb58

0xdc5: Pop(2)
0xdc6: Pop(1); Push((bool) Stack[-1] == 0)
0xdc7: IF (Stack[-1] == 0) GOTO 0xdca; Pop(1)

0xdc8: Stack[-8] = (bool) 0
0xdc9: Return(); Pop(4)

0xdca: Push("class")
0xdcb: @@ GetProperty(Stack[-1], Stack[-3])
0xdcc: Pop(1)
0xdcd: Push("rat")
0xdce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdcf: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdd0: Stack[-8] = (bool) 0
0xdd1: Return(); Pop(4)

0xdd2: GOTO 0xdde

0xdd3: Push("rat_big")
0xdd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd5: IF (Stack[-1] == 0) GOTO 0xdd9; Pop(1)

0xdd6: Stack[-8] = (bool) 0
0xdd7: Return(); Pop(4)

0xdd8: GOTO 0xdde

0xdd9: Push("dog")
0xdda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xddb: IF (Stack[-1] == 0) GOTO 0xdde; Pop(1)

0xddc: Stack[-8] = (bool) 0
0xddd: Return(); Pop(4)

0xdde: @ CanSee(Stack[-1], Stack[-7])
0xddf: Pop(0)
0xde0: PushEmpty(bool)
0xde1: Stack[-1] = (bool) 1
0xde2: Push(Stack[-2])
0xde3: IF (Stack[-1] == 0) GOTO 0xdec; Pop(1)

0xde4: PushEmpty(float, object)
0xde5: Stack[-1] = Stack[-10]
0xde6: Call2 0xb4b

0xde7: Pop(1)
0xde8: Pop(0); Push(Stack[-7] * Stack[-7]);
0xde9: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xdea: IF (Stack[-1] == 0) GOTO 0xdec; Pop(1)

0xdeb: Stack[-1] = (bool) 0
0xdec: IF (Stack[-1] == 0) GOTO 0xdef; Pop(1)

0xded: Stack[-8] = (bool) 1
0xdee: Return(); Pop(4)

0xdef: @ CanSee(Stack[-1], Stack[-6])
0xdf0: Pop(0)
0xdf1: PushEmpty(bool)
0xdf2: Stack[-1] = (bool) 1
0xdf3: Push(Stack[-2])
0xdf4: IF (Stack[-1] == 0) GOTO 0xdfd; Pop(1)

0xdf5: PushEmpty(float, object)
0xdf6: Stack[-1] = Stack[-9]
0xdf7: Call2 0xb4b

0xdf8: Pop(1)
0xdf9: Pop(0); Push(Stack[-7] * Stack[-7]);
0xdfa: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xdfb: IF (Stack[-1] == 0) GOTO 0xdfd; Pop(1)

0xdfc: Stack[-1] = (bool) 0
0xdfd: IF (Stack[-1] == 0) GOTO 0xe00; Pop(1)

0xdfe: Stack[-8] = (bool) 1
0xdff: Return(); Pop(4)

0xe00: Stack[-8] = (bool) 0
0xe01: Return(); Pop(4)

0xe02: PushEmpty()
0xe03: Stack[-2] = (int) 0
0xe04: Return(); Pop(0)

0xe05: PushEmpty()
0xe06: Return(); Pop(0)

0xe07: PushEmpty()
0xe08: Stack[-3] = (int) 0
0xe09: Return(); Pop(0)

0xe0a: PushEmpty()
0xe0b: Return(); Pop(0)

0xe0c: PushEmpty()
0xe0d: Stack[-2] = (int) 2
0xe0e: Return(); Pop(0)

0xe0f: PushEmpty()
0xe10: PushEmpty(object)
0xe11: Stack[-1] = Stack[-2]
0xe12: Call2 0xfc1

0xe13: Pop(1)
0xe14: Return(); Pop(0)

0xe15: Return(); Pop(0)

0xe16: PushEmpty(bool, bool)
0xe17: @ CanSee(Stack[-1], Stack[-3])
0xe18: Pop(0)
0xe19: Stack[-4] = Stack[-1]
0xe1a: Return(); Pop(2)

0xe1b: PushEmpty()
0xe1c: PushEmpty(object)
0xe1d: Stack[-1] = Stack[-2]
0xe1e: Push(-1, 3); TaskCall(6)
0xe1f: Call2 0x564

0xe20: Pop(-1, 3); TaskReturn
0xe21: Pop(1)
0xe22: Return(); Pop(0)

0xe23: PushEmpty(bool, bool)
0xe24: @ CanSee(Stack[-1], Stack[-3])
0xe25: Pop(0)
0xe26: Stack[-4] = (bool) 1
0xe27: Push(Stack[-1])
0xe28: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe29: PushEmpty(float, object)
0xe2a: Stack[-1] = Stack[-5]
0xe2b: Call2 0xb4b

0xe2c: Pop(1)
0xe2d: Push((int) 4000000)
0xe2e: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xe2f: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe30: Stack[-4] = (bool) 0
0xe31: Return(); Pop(2)

0xe32: PushEmpty()
0xe33: PushEmpty(object)
0xe34: Stack[-1] = Stack[-2]
0xe35: Push(-1, 3); TaskCall(7)
0xe36: Call2 0x626

0xe37: Pop(-1, 3); TaskReturn
0xe38: Pop(1)
0xe39: Return(); Pop(0)

0xe3a: PushEmpty()
0xe3b: PushEmpty(bool, object)
0xe3c: Stack[-1] = Stack[-3]
0xe3d: Call2 0xe23

0xe3e: Stack[-4] = Stack[-2]
0xe3f: Pop(2)
0xe40: Return(); Pop(0)

0xe41: PushEmpty()
0xe42: PushEmpty(object)
0xe43: Stack[-1] = Stack[-2]
0xe44: Call2 0xe32

0xe45: Pop(1)
0xe46: Return(); Pop(0)

0xe47: PushEmpty()
0xe48: Stack[-2] = (bool) 0
0xe49: Return(); Pop(0)

0xe4a: PushEmpty()
0xe4b: Return(); Pop(0)

0xe4c: PushEmpty()
0xe4d: Push((int) 1000)
0xe4e: @@ SetReturnValue(Stack[-1])
0xe4f: Pop(1)
0xe50: Return(); Pop(0)

0xe51: PushEmpty()
0xe52: PushEmpty(int, string)
0xe53: Stack[-1] = "branch"
0xe54: Call2 0xcd5

0xe55: Pop(1)
0xe56: Push((int) 0)
0xe57: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe58: IF (Stack[-1] == 0) GOTO 0xe5b; Pop(1)

0xe59: Stack[-2] = (bool) 1
0xe5a: Return(); Pop(0)

0xe5b: Stack[-2] = (bool) 0
0xe5c: Return(); Pop(0)

0xe5d: PushEmpty()
0xe5e: PushEmpty(int, string)
0xe5f: Stack[-1] = "branch"
0xe60: Call2 0xcd5

0xe61: Pop(1)
0xe62: Push((int) 2)
0xe63: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe64: IF (Stack[-1] == 0) GOTO 0xe67; Pop(1)

0xe65: Stack[-2] = (bool) 1
0xe66: Return(); Pop(0)

0xe67: Stack[-2] = (bool) 0
0xe68: Return(); Pop(0)

0xe69: PushEmpty()
0xe6a: PushEmpty(int, string)
0xe6b: Stack[-1] = "d1q01FirstGeorgVisit"
0xe6c: Call2 0xcd5

0xe6d: Pop(1)
0xe6e: Push((int) 1)
0xe6f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe70: IF (Stack[-1] == 0) GOTO 0xe73; Pop(1)

0xe71: Stack[-2] = (bool) 1
0xe72: Return(); Pop(0)

0xe73: Stack[-2] = (bool) 0
0xe74: Return(); Pop(0)

0xe75: PushEmpty()
0xe76: PushEmpty(bool, object)
0xe77: Stack[-1] = Stack[-3]
0xe78: Call2 0xed9

0xe79: Pop(1)
0xe7a: IF (Stack[-1] == 0) GOTO 0xe7d; Pop(1)

0xe7b: Stack[-2] = (bool) 1
0xe7c: Return(); Pop(0)

0xe7d: Stack[-2] = (bool) 0
0xe7e: Return(); Pop(0)

0xe7f: PushEmpty()
0xe80: PushEmpty(bool, object)
0xe81: Stack[-1] = Stack[-3]
0xe82: Call2 0xee0

0xe83: Pop(1)
0xe84: IF (Stack[-1] == 0) GOTO 0xe87; Pop(1)

0xe85: Stack[-2] = (bool) 1
0xe86: Return(); Pop(0)

0xe87: Stack[-2] = (bool) 0
0xe88: Return(); Pop(0)

0xe89: PushEmpty()
0xe8a: PushEmpty(bool, object)
0xe8b: Stack[-1] = Stack[-3]
0xe8c: Call2 0xee7

0xe8d: Pop(1)
0xe8e: IF (Stack[-1] == 0) GOTO 0xe91; Pop(1)

0xe8f: Stack[-2] = (bool) 1
0xe90: Return(); Pop(0)

0xe91: Stack[-2] = (bool) 0
0xe92: Return(); Pop(0)

0xe93: PushEmpty()
0xe94: PushEmpty(bool, object)
0xe95: Stack[-1] = Stack[-3]
0xe96: Call2 0xeee

0xe97: Pop(1)
0xe98: IF (Stack[-1] == 0) GOTO 0xe9b; Pop(1)

0xe99: Stack[-2] = (bool) 1
0xe9a: Return(); Pop(0)

0xe9b: Stack[-2] = (bool) 0
0xe9c: Return(); Pop(0)

0xe9d: PushEmpty()
0xe9e: PushEmpty(bool, object)
0xe9f: Stack[-1] = Stack[-3]
0xea0: Call2 0xef5

0xea1: Pop(1)
0xea2: IF (Stack[-1] == 0) GOTO 0xea5; Pop(1)

0xea3: Stack[-2] = (bool) 1
0xea4: Return(); Pop(0)

0xea5: Stack[-2] = (bool) 0
0xea6: Return(); Pop(0)

0xea7: PushEmpty()
0xea8: PushEmpty(bool, object)
0xea9: Stack[-1] = Stack[-3]
0xeaa: Call2 0xefc

0xeab: Pop(1)
0xeac: IF (Stack[-1] == 0) GOTO 0xeaf; Pop(1)

0xead: Stack[-2] = (bool) 1
0xeae: Return(); Pop(0)

0xeaf: Stack[-2] = (bool) 0
0xeb0: Return(); Pop(0)

0xeb1: PushEmpty()
0xeb2: PushEmpty(bool, object)
0xeb3: Stack[-1] = Stack[-3]
0xeb4: Call2 0xf03

0xeb5: Pop(1)
0xeb6: IF (Stack[-1] == 0) GOTO 0xeb9; Pop(1)

0xeb7: Stack[-2] = (bool) 1
0xeb8: Return(); Pop(0)

0xeb9: Stack[-2] = (bool) 0
0xeba: Return(); Pop(0)

0xebb: PushEmpty()
0xebc: PushEmpty(bool, object)
0xebd: Stack[-1] = Stack[-3]
0xebe: Call2 0xf0a

0xebf: Pop(1)
0xec0: IF (Stack[-1] == 0) GOTO 0xec3; Pop(1)

0xec1: Stack[-2] = (bool) 1
0xec2: Return(); Pop(0)

0xec3: Stack[-2] = (bool) 0
0xec4: Return(); Pop(0)

0xec5: PushEmpty()
0xec6: PushEmpty(bool, object)
0xec7: Stack[-1] = Stack[-3]
0xec8: Call2 0xf11

0xec9: Pop(1)
0xeca: IF (Stack[-1] == 0) GOTO 0xecd; Pop(1)

0xecb: Stack[-2] = (bool) 1
0xecc: Return(); Pop(0)

0xecd: Stack[-2] = (bool) 0
0xece: Return(); Pop(0)

0xecf: PushEmpty()
0xed0: PushEmpty(bool, object)
0xed1: Stack[-1] = Stack[-3]
0xed2: Call2 0xf26

0xed3: Pop(1)
0xed4: IF (Stack[-1] == 0) GOTO 0xed7; Pop(1)

0xed5: Stack[-2] = (bool) 1
0xed6: Return(); Pop(0)

0xed7: Stack[-2] = (bool) 0
0xed8: Return(); Pop(0)

0xed9: PushEmpty()
0xeda: PushEmpty(int)
0xedb: Call2 0xcda

0xedc: Pop(0)
0xedd: Push((int) 1)
0xede: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xedf: Return(); Pop(0)

0xee0: PushEmpty()
0xee1: PushEmpty(int)
0xee2: Call2 0xcda

0xee3: Pop(0)
0xee4: Push((int) 2)
0xee5: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xee6: Return(); Pop(0)

0xee7: PushEmpty()
0xee8: PushEmpty(int)
0xee9: Call2 0xcda

0xeea: Pop(0)
0xeeb: Push((int) 3)
0xeec: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xeed: Return(); Pop(0)

0xeee: PushEmpty()
0xeef: PushEmpty(int)
0xef0: Call2 0xcda

0xef1: Pop(0)
0xef2: Push((int) 4)
0xef3: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xef4: Return(); Pop(0)

0xef5: PushEmpty()
0xef6: PushEmpty(int)
0xef7: Call2 0xcda

0xef8: Pop(0)
0xef9: Push((int) 5)
0xefa: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xefb: Return(); Pop(0)

0xefc: PushEmpty()
0xefd: PushEmpty(int)
0xefe: Call2 0xcda

0xeff: Pop(0)
0xf00: Push((int) 6)
0xf01: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf02: Return(); Pop(0)

0xf03: PushEmpty()
0xf04: PushEmpty(int)
0xf05: Call2 0xcda

0xf06: Pop(0)
0xf07: Push((int) 8)
0xf08: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf09: Return(); Pop(0)

0xf0a: PushEmpty()
0xf0b: PushEmpty(int)
0xf0c: Call2 0xcda

0xf0d: Pop(0)
0xf0e: Push((int) 10)
0xf0f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf10: Return(); Pop(0)

0xf11: PushEmpty()
0xf12: PushEmpty(bool)
0xf13: Stack[-1] = (bool) 0
0xf14: PushEmpty(int)
0xf15: Call2 0xce3

0xf16: Pop(0)
0xf17: Push((int) 0)
0xf18: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf19: IF (Stack[-1] == 0) GOTO 0xf21; Pop(1)

0xf1a: PushEmpty(int)
0xf1b: Call2 0xce3

0xf1c: Pop(0)
0xf1d: Push((int) 12)
0xf1e: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xf1f: IF (Stack[-1] == 0) GOTO 0xf21; Pop(1)

0xf20: Stack[-1] = (bool) 1
0xf21: IF (Stack[-1] == 0) GOTO 0xf24; Pop(1)

0xf22: Stack[-2] = (bool) 1
0xf23: Return(); Pop(0)

0xf24: Stack[-2] = (bool) 0
0xf25: Return(); Pop(0)

0xf26: PushEmpty()
0xf27: PushEmpty(int)
0xf28: Call2 0xce3

0xf29: Pop(0)
0xf2a: Push((int) 12)
0xf2b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf2c: IF (Stack[-1] == 0) GOTO 0xf2f; Pop(1)

0xf2d: Stack[-2] = (bool) 1
0xf2e: Return(); Pop(0)

0xf2f: Stack[-2] = (bool) 0
0xf30: Return(); Pop(0)

0xf31: PushEmpty(int, int)
0xf32: Push("branch")
0xf33: @ GetVariable(Stack[-1], Stack[-2])
0xf34: Pop(1)
0xf35: Push((int) 0)
0xf36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf37: IF (Stack[-1] == 0) GOTO 0xf3b; Pop(1)

0xf38: Stack[-3] = (int) 1
0xf39: Return(); Pop(2)

0xf3a: GOTO 0xf40

0xf3b: Push((int) 1)
0xf3c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf3d: IF (Stack[-1] == 0) GOTO 0xf40; Pop(1)

0xf3e: Stack[-3] = (int) 2
0xf3f: Return(); Pop(2)

0xf40: Stack[-3] = (int) 3
0xf41: Return(); Pop(2)

0xf42: PushEmpty(int, int)
0xf43: Push("branch")
0xf44: @ GetVariable(Stack[-1], Stack[-2])
0xf45: Pop(1)
0xf46: Stack[-3] = Stack[-1]
0xf47: Return(); Pop(2)

0xf48: PushEmpty(object, float, object, float)
0xf49: Push("player")
0xf4a: @ FindActor(Stack[-3], Stack[-1])
0xf4b: Pop(1)
0xf4c: Pop(0); Push((bool) Stack[-2] == 0)
0xf4d: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf4e: Stack[-5] = (int) 0
0xf4f: Return(); Pop(4)

0xf50: Push("reputation")
0xf51: @@ GetProperty(Stack[-1], Stack[-2])
0xf52: Pop(1)
0xf53: Stack[-5] = Stack[-1]
0xf54: Return(); Pop(4)

0xf55: Stack[-2] = 0
0xf56: PushEmpty()
0xf57: PushEmpty(int)
0xf58: Call2 0xf42

0xf59: Pop(0)
0xf5a: Push((int) 1)
0xf5b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf5c: IF (Stack[-1] == 0) GOTO 0xf60; Pop(1)

0xf5d: @ WorkWithCorpse(Stack[-1])
0xf5e: Pop(0)
0xf5f: GOTO 0xf62

0xf60: @ Barter(Stack[-1])
0xf61: Pop(0)
0xf62: Return(); Pop(0)

0xf63: PushEmpty(int, int)
0xf64: Push((int) 0)
0xf65: @ ClearSubContainer(Stack[-1])
0xf66: Pop(1)
0xf67: Push(Stack[-3])
0xf68: IF (Stack[-1] == 0) GOTO 0xf7f; Pop(1)

0xf69: PushEmpty(string, int, int, int)
0xf6a: Stack[-4] = "rifle_ammo"
0xf6b: Stack[-3] = (int) 1
0xf6c: Stack[-2] = (int) 2
0xf6d: Stack[-1] = (int) 2
0xf6e: Call2 0xc85

0xf6f: Pop(4)
0xf70: PushEmpty(string, int, int, int)
0xf71: Stack[-4] = "revolver_ammo"
0xf72: Stack[-3] = (int) 1
0xf73: Stack[-2] = (int) 2
0xf74: Stack[-1] = (int) 2
0xf75: Call2 0xc85

0xf76: Pop(4)
0xf77: PushEmpty(string, int, int, int)
0xf78: Stack[-4] = "samopal_ammo"
0xf79: Stack[-3] = (int) 2
0xf7a: Stack[-2] = (int) 2
0xf7b: Stack[-1] = (int) 2
0xf7c: Call2 0xc85

0xf7d: Pop(4)
0xf7e: GOTO 0xfae

0xf7f: PushEmpty(string, int, int)
0xf80: Stack[-3] = "lockpick"
0xf81: Stack[-2] = (int) 1
0xf82: Stack[-1] = (int) 4
0xf83: Call2 0xc7a

0xf84: Pop(3)
0xf85: PushEmpty(string, int, int, int)
0xf86: Stack[-4] = "alpha_pills"
0xf87: Stack[-3] = (int) 1
0xf88: Stack[-2] = (int) 2
0xf89: Stack[-1] = (int) 3
0xf8a: Call2 0xc85

0xf8b: Pop(4)
0xf8c: PushEmpty(string, int, int)
0xf8d: Stack[-3] = "meradorm"
0xf8e: Stack[-2] = (int) 1
0xf8f: Stack[-1] = (int) 2
0xf90: Call2 0xc7a

0xf91: Pop(3)
0xf92: PushEmpty(string, int, int)
0xf93: Stack[-3] = "powder"
0xf94: Stack[-2] = (int) 1
0xf95: Stack[-1] = (int) 15
0xf96: Call2 0xc7a

0xf97: Pop(3)
0xf98: PushEmpty(int)
0xf99: Call2 0xcda

0xf9a: Stack[-2] = Stack[-1]
0xf9b: Pop(1)
0xf9c: Push((int) 4)
0xf9d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xf9e: IF (Stack[-1] == 0) GOTO 0xfa5; Pop(1)

0xf9f: PushEmpty(string, int, int)
0xfa0: Stack[-3] = "beta_pills"
0xfa1: Stack[-2] = (int) 1
0xfa2: Stack[-1] = (int) 2
0xfa3: Call2 0xc7a

0xfa4: Pop(3)
0xfa5: Push((int) 6)
0xfa6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xfa7: IF (Stack[-1] == 0) GOTO 0xfae; Pop(1)

0xfa8: PushEmpty(string, int, int)
0xfa9: Stack[-3] = "gamma_pills"
0xfaa: Stack[-2] = (int) 1
0xfab: Stack[-1] = (int) 7
0xfac: Call2 0xc7a

0xfad: Pop(3)
0xfae: Return(); Pop(2)

0xfaf: Stack[-1] = (int) 515561
0xfb0: Return(); Pop(0)

0xfb1: Stack[-1] = (int) 503346
0xfb2: Return(); Pop(0)

0xfb3: Stack[-1] = "ui/NPC_Citizen1.png"
0xfb4: Return(); Pop(0)

0xfb5: Stack[-1] = "ui/NPC_Citizen1_b.png"
0xfb6: Return(); Pop(0)

0xfb7: Stack[-1] = (bool) 0
0xfb8: Return(); Pop(0)

0xfb9: Push(GlobalVars[0])
0xfba: Stack[-1] = (bool) 0
0xfbb: GlobalVars[0] = Stack[-1]; Pop(1)
0xfbc: PushEmpty(bool)
0xfbd: Stack[-1] = (bool) 0
0xfbe: Call2 0xf63

0xfbf: Pop(1)
0xfc0: Return(); Pop(0)

0xfc1: PushEmpty(bool, bool)
0xfc2: Push(GlobalVars[0])
0xfc3: IF (Stack[-1] == 0) GOTO 0xfce; Pop(1)

0xfc4: @ IsOverrideActive(Stack[-1])
0xfc5: Pop(0)
0xfc6: Pop(0); Push((bool) Stack[-1] == 0)
0xfc7: IF (Stack[-1] == 0) GOTO 0xfcc; Pop(1)

0xfc8: PushEmpty(object)
0xfc9: Stack[-1] = Stack[-4]
0xfca: Call2 0xf56

0xfcb: Pop(1)
0xfcc: Return(); Pop(2)

0xfcd: GOTO 0xfe8

0xfce: Push((int) 1000)
0xfcf: PushEmpty(int, object)
0xfd0: Stack[-1] = Stack[-6]
0xfd1: Push(-2, 1); TaskCall(8)
0xfd2: Call2 0x6c3

0xfd3: Pop(-2, 1); TaskReturn
0xfd4: Pop(1)
0xfd5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfd6: IF (Stack[-1] == 0) GOTO 0xfe8; Pop(1)

0xfd7: PushEmpty(bool, object)
0xfd8: Stack[-1] = Stack[-5]
0xfd9: Call2 0xc0c

0xfda: Pop(1)
0xfdb: Pop(1); Push((bool) Stack[-1] == 0)
0xfdc: IF (Stack[-1] == 0) GOTO 0xfde; Pop(1)

0xfdd: Return(); Pop(2)

0xfde: PushEmpty(object)
0xfdf: Stack[-1] = Stack[-4]
0xfe0: Push(-1, 1); TaskCall(0)
0xfe1: Call2 0x0

0xfe2: Pop(-1, 1); TaskReturn
0xfe3: Pop(1)
0xfe4: PushEmpty(object)
0xfe5: Stack[-1] = Stack[-4]
0xfe6: Call2 0xc44

0xfe7: Pop(1)
0xfe8: Return(); Pop(2)

0xfe9: PushEmpty(float)
0xfea: Call2 0xf48

0xfeb: Pop(0)
0xfec: Push((float)0.2)
0xfed: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0xfee: Return(); Pop(0)

0xfef: PushEmpty()
0xff0: PushEmpty(bool, object, object, float)
0xff1: Stack[-3] = Stack[-7]
0xff2: Stack[-2] = Stack[-6]
0xff3: Stack[-1] = (float) 700.0
0xff4: Call2 0xdc0

0xff5: Stack[-8] = Stack[-4]
0xff6: Pop(4)
0xff7: Return(); Pop(0)

