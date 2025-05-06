GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Untrust
	Rage
	Patronage
	Discontent
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Mat.png
	ui/NPC_Mat_b.png
	k8q01
	quest_k8_01
	unlock_boiny
	fail
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x4c8
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9c Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x18d Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3a0 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x49e Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x514 Vars = (int)
		EVENT_6 Op = 0x53a Vars = ()
		EVENT_5 Op = 0x549 Vars = ()
		EVENT_45 Op = 0x556 Vars = (bool)
		EVENT_0 Op = 0x562 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x5eb

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x74b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x749

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x74d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x74f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7dc

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x701

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x642

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x630

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x86

0x5a: Pop(1)
0x5b: Push((int) 525507)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 525508)
0x61: Push((int) 30772)
0x62: Push((int) 26864)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: GOTO 0x68

0x66: Return(); Pop(0)

0x67: GOTO 0x55

0x68: PushEmpty(bool)
0x69: Call2 0x751

0x6a: Pop(0)
0x6b: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x6c: @ lshWaitForAnimEnd()
0x6d: Pop(0)
0x6e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: GOTO 0x76

0x71: PushEmpty(string)
0x72: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x73: Call2 0x6cc

0x74: Pop(1)
0x75: GOTO 0x6c

0x76: GOTO 0x85

0x77: Push("all")
0x78: Push("idle")
0x79: @ PlayAnimation(Stack[-2], Stack[-1])
0x7a: Pop(2)
0x7b: @ WaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: Push("all")
0x81: Push("idle")
0x82: @ PlayAnimation(Stack[-2], Stack[-1])
0x83: Pop(2)
0x84: GOTO 0x7b

0x85: Return(); Pop(0)

0x86: PushEmpty()
0x87: PushEmpty(bool)
0x88: Call2 0x751

0x89: Pop(0)
0x8a: Pop(1); Push((bool) Stack[-1] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Return(); Pop(0)

0x8d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: PushEmpty(string, bool)
0x91: Stack[-2] = Stack[-3]
0x92: Push("")
0x93: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: Stack[-1] = (bool) 0
0x96: GOTO 0x98

0x97: Stack[-1] = (bool) 1
0x98: Call2 0x6dc

0x99: Pop(2)
0x9a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9b: Return(); Pop(0)

0x9c: PushEmpty()
0x9d: Push((int) 1)
0x9e: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0x9f: PushEmpty()
0xa0: Call2 0x6fa

0xa1: Pop(0)
0xa2: Push((int) 26863)
0xa3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xa5: PushEmpty(string)
0xa6: Stack[-1] = "Neutral"
0xa7: Call2 0x86

0xa8: Pop(1)
0xa9: Push((int) 525507)
0xaa: @@ SetMessage(Stack[-1])
0xab: Pop(1)
0xac: @@ ClearReplies()
0xad: Pop(0)
0xae: Push((int) 525508)
0xaf: Push((int) 30772)
0xb0: Push((int) 26864)
0xb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2: Pop(3)
0xb3: Return(); Pop(0)

0xb4: Push((int) 30772)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral"
0xb9: Call2 0x86

0xba: Pop(1)
0xbb: Push((int) 529318)
0xbc: @@ SetMessage(Stack[-1])
0xbd: Pop(1)
0xbe: @@ ClearReplies()
0xbf: Pop(0)
0xc0: Push((int) 529319)
0xc1: Push((int) -1)
0xc2: Push((int) 30773)
0xc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4: Pop(3)
0xc5: Push((int) 529320)
0xc6: Push((int) -1)
0xc7: Push((int) 30774)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xcc: PushEmpty(bool)
0xcd: Call2 0x751

0xce: Pop(0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd0: @ lshStopAnimation()
0xd1: Pop(0)
0xd2: GOTO 0xd5

0xd3: @ StopAnimation()
0xd4: Pop(0)
0xd5: Return(); Pop(0)

0xd6: GOTO 0x9d

0xd7: Return(); Pop(0)

0xd8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xda: PushEmpty(bool, object, float)
0xdb: Stack[-2] = Stack[-12]
0xdc: Stack[-1] = (float) 70.0
0xdd: Call2 0x5eb

0xde: Pop(2)
0xdf: Pop(1); Push((bool) Stack[-1] == 0)
0xe0: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe1: Stack[-10] = (int) -2
0xe2: Return(); Pop(8)

0xe3: @ CreateDialog(Stack[-4])
0xe4: Pop(0)
0xe5: PushEmpty(int)
0xe6: Call2 0x74b

0xe7: Pop(0)
0xe8: @@ SetNPCName(Stack[-1])
0xe9: Pop(1)
0xea: PushEmpty(int)
0xeb: Call2 0x749

0xec: Pop(0)
0xed: @@ SetNPCDescription(Stack[-1])
0xee: Pop(1)
0xef: PushEmpty(string)
0xf0: Call2 0x74d

0xf1: Pop(0)
0xf2: @@ SetPhoto(Stack[-1])
0xf3: Pop(1)
0xf4: PushEmpty(string)
0xf5: Call2 0x74f

0xf6: Pop(0)
0xf7: @@ SetPhoto2(Stack[-1])
0xf8: Pop(1)
0xf9: PushEmpty(int)
0xfa: Call2 0x7dc

0xfb: Pop(0)
0xfc: @@ SetPlayerName(Stack[-1])
0xfd: Pop(1)
0xfe: Stack[-2] = (int) -1
0xff: @ IsOverrideActive(Stack[-3])
0x100: Pop(0)
0x101: Push(Stack[-3])
0x102: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x103: Stack[-10] = (int) -2
0x104: Return(); Pop(8)

0x105: @ DoDialog(Stack[-4])
0x106: Pop(0)
0x107: PushEmpty(bool, object)
0x108: PushEmpty(object)
0x109: Call2 0x701

0x10a: Stack[-2] = Stack[-1]
0x10b: Pop(1)
0x10c: Call2 0x642

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[-11]
0x110: Stack[-1] = Stack[-6]
0x111: Push(-2, 4); TaskCall(3)
0x112: Call2 0x129

0x113: Pop(-2, 4); TaskReturn
0x114: Pop(2)
0x115: @@ IsDialogEnd(Stack[-1])
0x116: Pop(0)
0x117: Pop(0); Push((bool) Stack[-1] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: @ sync()
0x11a: Pop(0)
0x11b: @@ IsDialogEnd(Stack[-1])
0x11c: Pop(0)
0x11d: GOTO 0x117

0x11e: PushEmpty(object)
0x11f: Stack[-1] = Stack[-10]
0x120: Call2 0x630

0x121: Pop(1)
0x122: @ StopDialog(Stack[-4])
0x123: Pop(0)
0x124: @@ GetReturnValue(Stack[-2])
0x125: Pop(0)
0x126: Stack[-10] = Stack[-2]
0x127: Return(); Pop(8)

0x128: Stack[-4] = 0
0x129: PushEmpty()
0x12a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x12b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x12c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x12d: Push((int) 1)
0x12e: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call2 0x177

0x132: Pop(1)
0x133: Push((int) 526405)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: PushEmpty(bool, object)
0x139: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Call2 0x774

0x13b: Pop(1)
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: Push((int) 526406)
0x13e: Push((int) 27682)
0x13f: Push((int) 27681)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: PushEmpty(bool, object)
0x143: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144: Call2 0x780

0x145: Pop(1)
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: Push((int) 526420)
0x148: Push((int) 27696)
0x149: Push((int) 27695)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Push((int) 526411)
0x14d: Push((int) -1)
0x14e: Push((int) 27686)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Push((int) 529012)
0x152: Push((int) -1)
0x153: Push((int) 30452)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: GOTO 0x159

0x157: Return(); Pop(0)

0x158: GOTO 0x12d

0x159: PushEmpty(bool)
0x15a: Call2 0x751

0x15b: Pop(0)
0x15c: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x15d: @ lshWaitForAnimEnd()
0x15e: Pop(0)
0x15f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x160: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x161: GOTO 0x167

0x162: PushEmpty(string)
0x163: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x164: Call2 0x6cc

0x165: Pop(1)
0x166: GOTO 0x15d

0x167: GOTO 0x176

0x168: Push("all")
0x169: Push("idle")
0x16a: @ PlayAnimation(Stack[-2], Stack[-1])
0x16b: Pop(2)
0x16c: @ WaitForAnimEnd()
0x16d: Pop(0)
0x16e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x16f: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x170: GOTO 0x176

0x171: Push("all")
0x172: Push("idle")
0x173: @ PlayAnimation(Stack[-2], Stack[-1])
0x174: Pop(2)
0x175: GOTO 0x16c

0x176: Return(); Pop(0)

0x177: PushEmpty()
0x178: PushEmpty(bool)
0x179: Call2 0x751

0x17a: Pop(0)
0x17b: Pop(1); Push((bool) Stack[-1] == 0)
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Return(); Pop(0)

0x17e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: Return(); Pop(0)

0x181: PushEmpty(string, bool)
0x182: Stack[-2] = Stack[-3]
0x183: Push("")
0x184: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x186: Stack[-1] = (bool) 0
0x187: GOTO 0x189

0x188: Stack[-1] = (bool) 1
0x189: Call2 0x6dc

0x18a: Pop(2)
0x18b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x18c: Return(); Pop(0)

0x18d: PushEmpty()
0x18e: Push((int) 1)
0x18f: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x190: PushEmpty()
0x191: Call2 0x6fa

0x192: Pop(0)
0x193: Push((int) 27685)
0x194: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x196: PushEmpty(object, object)
0x197: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x198: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x199: Call2 0x753

0x19a: Pop(2)
0x19b: Push((int) 30467)
0x19c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19e: PushEmpty(object, object)
0x19f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a1: Call2 0x76a

0x1a2: Pop(2)
0x1a3: Push((int) 30471)
0x1a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a6: PushEmpty(object, object)
0x1a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a9: Call2 0x76a

0x1aa: Pop(2)
0x1ab: Push((int) 27703)
0x1ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ae: PushEmpty(object, object)
0x1af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b1: Call2 0x75c

0x1b2: Pop(2)
0x1b3: Push((int) 30462)
0x1b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: PushEmpty(object, object)
0x1b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b9: Call2 0x76a

0x1ba: Pop(2)
0x1bb: Push((int) 27680)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral"
0x1c0: Call2 0x177

0x1c1: Pop(1)
0x1c2: Push((int) 526405)
0x1c3: @@ SetMessage(Stack[-1])
0x1c4: Pop(1)
0x1c5: @@ ClearReplies()
0x1c6: Pop(0)
0x1c7: PushEmpty(bool, object)
0x1c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c9: Call2 0x774

0x1ca: Pop(1)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: Push((int) 526406)
0x1cd: Push((int) 27682)
0x1ce: Push((int) 27681)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: PushEmpty(bool, object)
0x1d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Call2 0x780

0x1d4: Pop(1)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d6: Push((int) 526420)
0x1d7: Push((int) 27696)
0x1d8: Push((int) 27695)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Push((int) 526411)
0x1dc: Push((int) -1)
0x1dd: Push((int) 27686)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Push((int) 529012)
0x1e1: Push((int) -1)
0x1e2: Push((int) 30452)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: Return(); Pop(0)

0x1e6: Push((int) 27696)
0x1e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1e9: PushEmpty(string)
0x1ea: Stack[-1] = "Untrust"
0x1eb: Call2 0x177

0x1ec: Pop(1)
0x1ed: Push((int) 526421)
0x1ee: @@ SetMessage(Stack[-1])
0x1ef: Pop(1)
0x1f0: @@ ClearReplies()
0x1f1: Pop(0)
0x1f2: Push((int) 526422)
0x1f3: Push((int) 30457)
0x1f4: Push((int) 27697)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: Return(); Pop(0)

0x1f8: Push((int) 30457)
0x1f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1fb: PushEmpty(string)
0x1fc: Stack[-1] = "Untrust"
0x1fd: Call2 0x177

0x1fe: Pop(1)
0x1ff: Push((int) 529017)
0x200: @@ SetMessage(Stack[-1])
0x201: Pop(1)
0x202: @@ ClearReplies()
0x203: Pop(0)
0x204: Push((int) 529018)
0x205: Push((int) 27698)
0x206: Push((int) 30458)
0x207: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x208: Pop(3)
0x209: Return(); Pop(0)

0x20a: Push((int) 27698)
0x20b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x20d: PushEmpty(string)
0x20e: Stack[-1] = "Neutral"
0x20f: Call2 0x177

0x210: Pop(1)
0x211: Push((int) 526423)
0x212: @@ SetMessage(Stack[-1])
0x213: Pop(1)
0x214: @@ ClearReplies()
0x215: Pop(0)
0x216: Push((int) 529019)
0x217: Push((int) 30464)
0x218: Push((int) 30459)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Push((int) 529020)
0x21c: Push((int) 30468)
0x21d: Push((int) 30460)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Push((int) 526424)
0x221: Push((int) 30461)
0x222: Push((int) 27699)
0x223: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x224: Pop(3)
0x225: Return(); Pop(0)

0x226: Push((int) 30461)
0x227: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x229: PushEmpty(string)
0x22a: Stack[-1] = "Rage"
0x22b: Call2 0x177

0x22c: Pop(1)
0x22d: Push((int) 529021)
0x22e: @@ SetMessage(Stack[-1])
0x22f: Pop(1)
0x230: @@ ClearReplies()
0x231: Pop(0)
0x232: Push((int) 529023)
0x233: Push((int) 30472)
0x234: Push((int) 30463)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: Push((int) 529022)
0x238: Push((int) -1)
0x239: Push((int) 30462)
0x23a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23b: Pop(3)
0x23c: Return(); Pop(0)

0x23d: Push((int) 30472)
0x23e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x240: PushEmpty(string)
0x241: Stack[-1] = "Untrust"
0x242: Call2 0x177

0x243: Pop(1)
0x244: Push((int) 529032)
0x245: @@ SetMessage(Stack[-1])
0x246: Pop(1)
0x247: @@ ClearReplies()
0x248: Pop(0)
0x249: Push((int) 529033)
0x24a: Push((int) 27700)
0x24b: Push((int) 30473)
0x24c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24d: Pop(3)
0x24e: Return(); Pop(0)

0x24f: Push((int) 27700)
0x250: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x252: PushEmpty(string)
0x253: Stack[-1] = "Patronage"
0x254: Call2 0x177

0x255: Pop(1)
0x256: Push((int) 526425)
0x257: @@ SetMessage(Stack[-1])
0x258: Pop(1)
0x259: @@ ClearReplies()
0x25a: Pop(0)
0x25b: Push((int) 526426)
0x25c: Push((int) 27702)
0x25d: Push((int) 27701)
0x25e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(3)
0x260: Return(); Pop(0)

0x261: Push((int) 27702)
0x262: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x264: PushEmpty(string)
0x265: Stack[-1] = "Neutral"
0x266: Call2 0x177

0x267: Pop(1)
0x268: Push((int) 526427)
0x269: @@ SetMessage(Stack[-1])
0x26a: Pop(1)
0x26b: @@ ClearReplies()
0x26c: Pop(0)
0x26d: Push((int) 526428)
0x26e: Push((int) -1)
0x26f: Push((int) 27703)
0x270: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(3)
0x272: Return(); Pop(0)

0x273: Push((int) 30468)
0x274: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x276: PushEmpty(string)
0x277: Stack[-1] = "Discontent"
0x278: Call2 0x177

0x279: Pop(1)
0x27a: Push((int) 529028)
0x27b: @@ SetMessage(Stack[-1])
0x27c: Pop(1)
0x27d: @@ ClearReplies()
0x27e: Pop(0)
0x27f: Push((int) 529029)
0x280: Push((int) 30470)
0x281: Push((int) 30469)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: Return(); Pop(0)

0x285: Push((int) 30470)
0x286: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x288: PushEmpty(string)
0x289: Stack[-1] = "Rage"
0x28a: Call2 0x177

0x28b: Pop(1)
0x28c: Push((int) 529030)
0x28d: @@ SetMessage(Stack[-1])
0x28e: Pop(1)
0x28f: @@ ClearReplies()
0x290: Pop(0)
0x291: Push((int) 529031)
0x292: Push((int) -1)
0x293: Push((int) 30471)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: Return(); Pop(0)

0x297: Push((int) 30464)
0x298: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x29a: PushEmpty(string)
0x29b: Stack[-1] = "Discontent"
0x29c: Call2 0x177

0x29d: Pop(1)
0x29e: Push((int) 529024)
0x29f: @@ SetMessage(Stack[-1])
0x2a0: Pop(1)
0x2a1: @@ ClearReplies()
0x2a2: Pop(0)
0x2a3: Push((int) 529025)
0x2a4: Push((int) 30466)
0x2a5: Push((int) 30465)
0x2a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(3)
0x2a8: Return(); Pop(0)

0x2a9: Push((int) 30466)
0x2aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ac: PushEmpty(string)
0x2ad: Stack[-1] = "Rage"
0x2ae: Call2 0x177

0x2af: Pop(1)
0x2b0: Push((int) 529026)
0x2b1: @@ SetMessage(Stack[-1])
0x2b2: Pop(1)
0x2b3: @@ ClearReplies()
0x2b4: Pop(0)
0x2b5: Push((int) 529027)
0x2b6: Push((int) -1)
0x2b7: Push((int) 30467)
0x2b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b9: Pop(3)
0x2ba: Return(); Pop(0)

0x2bb: Push((int) 27682)
0x2bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2be: Push((int) 526407)
0x2bf: @@ SetMessage(Stack[-1])
0x2c0: Pop(1)
0x2c1: @@ ClearReplies()
0x2c2: Pop(0)
0x2c3: Push((int) 526408)
0x2c4: Push((int) 30453)
0x2c5: Push((int) 27683)
0x2c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c7: Pop(3)
0x2c8: Return(); Pop(0)

0x2c9: Push((int) 30453)
0x2ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2cc: PushEmpty(string)
0x2cd: Stack[-1] = "Discontent"
0x2ce: Call2 0x177

0x2cf: Pop(1)
0x2d0: Push((int) 529013)
0x2d1: @@ SetMessage(Stack[-1])
0x2d2: Pop(1)
0x2d3: @@ ClearReplies()
0x2d4: Pop(0)
0x2d5: Push((int) 529014)
0x2d6: Push((int) 27684)
0x2d7: Push((int) 30454)
0x2d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d9: Pop(3)
0x2da: Return(); Pop(0)

0x2db: Push((int) 27684)
0x2dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2de: PushEmpty(string)
0x2df: Stack[-1] = "Rage"
0x2e0: Call2 0x177

0x2e1: Pop(1)
0x2e2: Push((int) 526409)
0x2e3: @@ SetMessage(Stack[-1])
0x2e4: Pop(1)
0x2e5: @@ ClearReplies()
0x2e6: Pop(0)
0x2e7: Push((int) 526410)
0x2e8: Push((int) -1)
0x2e9: Push((int) 27685)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: Return(); Pop(0)

0x2ed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ee: PushEmpty(bool)
0x2ef: Call2 0x751

0x2f0: Pop(0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f2: @ lshStopAnimation()
0x2f3: Pop(0)
0x2f4: GOTO 0x2f7

0x2f5: @ StopAnimation()
0x2f6: Pop(0)
0x2f7: Return(); Pop(0)

0x2f8: GOTO 0x18e

0x2f9: Return(); Pop(0)

0x2fa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2fc: PushEmpty(bool, object, float)
0x2fd: Stack[-2] = Stack[-12]
0x2fe: Stack[-1] = (float) 70.0
0x2ff: Call2 0x5eb

0x300: Pop(2)
0x301: Pop(1); Push((bool) Stack[-1] == 0)
0x302: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x303: Stack[-10] = (int) -2
0x304: Return(); Pop(8)

0x305: @ CreateDialog(Stack[-4])
0x306: Pop(0)
0x307: PushEmpty(int)
0x308: Call2 0x74b

0x309: Pop(0)
0x30a: @@ SetNPCName(Stack[-1])
0x30b: Pop(1)
0x30c: PushEmpty(int)
0x30d: Call2 0x749

0x30e: Pop(0)
0x30f: @@ SetNPCDescription(Stack[-1])
0x310: Pop(1)
0x311: PushEmpty(string)
0x312: Call2 0x74d

0x313: Pop(0)
0x314: @@ SetPhoto(Stack[-1])
0x315: Pop(1)
0x316: PushEmpty(string)
0x317: Call2 0x74f

0x318: Pop(0)
0x319: @@ SetPhoto2(Stack[-1])
0x31a: Pop(1)
0x31b: PushEmpty(int)
0x31c: Call2 0x7dc

0x31d: Pop(0)
0x31e: @@ SetPlayerName(Stack[-1])
0x31f: Pop(1)
0x320: Stack[-2] = (int) -1
0x321: @ IsOverrideActive(Stack[-3])
0x322: Pop(0)
0x323: Push(Stack[-3])
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-10] = (int) -2
0x326: Return(); Pop(8)

0x327: @ DoDialog(Stack[-4])
0x328: Pop(0)
0x329: PushEmpty(bool, object)
0x32a: PushEmpty(object)
0x32b: Call2 0x701

0x32c: Stack[-2] = Stack[-1]
0x32d: Pop(1)
0x32e: Call2 0x642

0x32f: Pop(2)
0x330: PushEmpty(object, object)
0x331: Stack[-2] = Stack[-11]
0x332: Stack[-1] = Stack[-6]
0x333: Push(-2, 4); TaskCall(5)
0x334: Call2 0x34b

0x335: Pop(-2, 4); TaskReturn
0x336: Pop(2)
0x337: @@ IsDialogEnd(Stack[-1])
0x338: Pop(0)
0x339: Pop(0); Push((bool) Stack[-1] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33b: @ sync()
0x33c: Pop(0)
0x33d: @@ IsDialogEnd(Stack[-1])
0x33e: Pop(0)
0x33f: GOTO 0x339

0x340: PushEmpty(object)
0x341: Stack[-1] = Stack[-10]
0x342: Call2 0x630

0x343: Pop(1)
0x344: @ StopDialog(Stack[-4])
0x345: Pop(0)
0x346: @@ GetReturnValue(Stack[-2])
0x347: Pop(0)
0x348: Stack[-10] = Stack[-2]
0x349: Return(); Pop(8)

0x34a: Stack[-4] = 0
0x34b: PushEmpty()
0x34c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x34d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x34e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x34f: Push((int) 1)
0x350: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x351: PushEmpty(string)
0x352: Stack[-1] = "Neutral"
0x353: Call2 0x38a

0x354: Pop(1)
0x355: Push((int) 535284)
0x356: @@ SetMessage(Stack[-1])
0x357: Pop(1)
0x358: @@ ClearReplies()
0x359: Pop(0)
0x35a: Push((int) 535285)
0x35b: Push((int) 36962)
0x35c: Push((int) 36961)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: Push((int) 535292)
0x360: Push((int) -1)
0x361: Push((int) 36968)
0x362: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x363: Pop(3)
0x364: Push((int) 535293)
0x365: Push((int) -1)
0x366: Push((int) 36969)
0x367: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x368: Pop(3)
0x369: GOTO 0x36c

0x36a: Return(); Pop(0)

0x36b: GOTO 0x34f

0x36c: PushEmpty(bool)
0x36d: Call2 0x751

0x36e: Pop(0)
0x36f: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x370: @ lshWaitForAnimEnd()
0x371: Pop(0)
0x372: Push( Stack[3 + Tasks[-1].StackPointer] )
0x373: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x374: GOTO 0x37a

0x375: PushEmpty(string)
0x376: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x377: Call2 0x6cc

0x378: Pop(1)
0x379: GOTO 0x370

0x37a: GOTO 0x389

0x37b: Push("all")
0x37c: Push("idle")
0x37d: @ PlayAnimation(Stack[-2], Stack[-1])
0x37e: Pop(2)
0x37f: @ WaitForAnimEnd()
0x380: Pop(0)
0x381: Push( Stack[3 + Tasks[-1].StackPointer] )
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: GOTO 0x389

0x384: Push("all")
0x385: Push("idle")
0x386: @ PlayAnimation(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: GOTO 0x37f

0x389: Return(); Pop(0)

0x38a: PushEmpty()
0x38b: PushEmpty(bool)
0x38c: Call2 0x751

0x38d: Pop(0)
0x38e: Pop(1); Push((bool) Stack[-1] == 0)
0x38f: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x390: Return(); Pop(0)

0x391: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: Return(); Pop(0)

0x394: PushEmpty(string, bool)
0x395: Stack[-2] = Stack[-3]
0x396: Push("")
0x397: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: Stack[-1] = (bool) 0
0x39a: GOTO 0x39c

0x39b: Stack[-1] = (bool) 1
0x39c: Call2 0x6dc

0x39d: Pop(2)
0x39e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x39f: Return(); Pop(0)

0x3a0: PushEmpty()
0x3a1: Push((int) 1)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3a3: PushEmpty()
0x3a4: Call2 0x6fa

0x3a5: Pop(0)
0x3a6: Push((int) 36960)
0x3a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3a9: PushEmpty(string)
0x3aa: Stack[-1] = "Neutral"
0x3ab: Call2 0x38a

0x3ac: Pop(1)
0x3ad: Push((int) 535284)
0x3ae: @@ SetMessage(Stack[-1])
0x3af: Pop(1)
0x3b0: @@ ClearReplies()
0x3b1: Pop(0)
0x3b2: Push((int) 535285)
0x3b3: Push((int) 36962)
0x3b4: Push((int) 36961)
0x3b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b6: Pop(3)
0x3b7: Push((int) 535292)
0x3b8: Push((int) -1)
0x3b9: Push((int) 36968)
0x3ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bb: Pop(3)
0x3bc: Push((int) 535293)
0x3bd: Push((int) -1)
0x3be: Push((int) 36969)
0x3bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(3)
0x3c1: Return(); Pop(0)

0x3c2: Push((int) 36962)
0x3c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3c5: PushEmpty(string)
0x3c6: Stack[-1] = "Neutral"
0x3c7: Call2 0x38a

0x3c8: Pop(1)
0x3c9: Push((int) 535286)
0x3ca: @@ SetMessage(Stack[-1])
0x3cb: Pop(1)
0x3cc: @@ ClearReplies()
0x3cd: Pop(0)
0x3ce: Push((int) 535287)
0x3cf: Push((int) 36964)
0x3d0: Push((int) 36963)
0x3d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(3)
0x3d3: Push((int) 535291)
0x3d4: Push((int) -1)
0x3d5: Push((int) 36967)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: Return(); Pop(0)

0x3d9: Push((int) 36964)
0x3da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3dc: PushEmpty(string)
0x3dd: Stack[-1] = "Neutral"
0x3de: Call2 0x38a

0x3df: Pop(1)
0x3e0: Push((int) 535288)
0x3e1: @@ SetMessage(Stack[-1])
0x3e2: Pop(1)
0x3e3: @@ ClearReplies()
0x3e4: Pop(0)
0x3e5: Push((int) 535289)
0x3e6: Push((int) -1)
0x3e7: Push((int) 36965)
0x3e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e9: Pop(3)
0x3ea: Push((int) 535290)
0x3eb: Push((int) -1)
0x3ec: Push((int) 36966)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: Return(); Pop(0)

0x3f0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3f1: PushEmpty(bool)
0x3f2: Call2 0x751

0x3f3: Pop(0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f5: @ lshStopAnimation()
0x3f6: Pop(0)
0x3f7: GOTO 0x3fa

0x3f8: @ StopAnimation()
0x3f9: Pop(0)
0x3fa: Return(); Pop(0)

0x3fb: GOTO 0x3a1

0x3fc: Return(); Pop(0)

0x3fd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3fe: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3ff: PushEmpty(bool, object, float)
0x400: Stack[-2] = Stack[-12]
0x401: Stack[-1] = (float) 70.0
0x402: Call2 0x5eb

0x403: Pop(2)
0x404: Pop(1); Push((bool) Stack[-1] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: Stack[-10] = (int) -2
0x407: Return(); Pop(8)

0x408: @ CreateDialog(Stack[-4])
0x409: Pop(0)
0x40a: PushEmpty(int)
0x40b: Call2 0x74b

0x40c: Pop(0)
0x40d: @@ SetNPCName(Stack[-1])
0x40e: Pop(1)
0x40f: PushEmpty(int)
0x410: Call2 0x749

0x411: Pop(0)
0x412: @@ SetNPCDescription(Stack[-1])
0x413: Pop(1)
0x414: PushEmpty(string)
0x415: Call2 0x74d

0x416: Pop(0)
0x417: @@ SetPhoto(Stack[-1])
0x418: Pop(1)
0x419: PushEmpty(string)
0x41a: Call2 0x74f

0x41b: Pop(0)
0x41c: @@ SetPhoto2(Stack[-1])
0x41d: Pop(1)
0x41e: PushEmpty(int)
0x41f: Call2 0x7dc

0x420: Pop(0)
0x421: @@ SetPlayerName(Stack[-1])
0x422: Pop(1)
0x423: Stack[-2] = (int) -1
0x424: @ IsOverrideActive(Stack[-3])
0x425: Pop(0)
0x426: Push(Stack[-3])
0x427: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x428: Stack[-10] = (int) -2
0x429: Return(); Pop(8)

0x42a: @ DoDialog(Stack[-4])
0x42b: Pop(0)
0x42c: PushEmpty(bool, object)
0x42d: PushEmpty(object)
0x42e: Call2 0x701

0x42f: Stack[-2] = Stack[-1]
0x430: Pop(1)
0x431: Call2 0x642

0x432: Pop(2)
0x433: PushEmpty(object, object)
0x434: Stack[-2] = Stack[-11]
0x435: Stack[-1] = Stack[-6]
0x436: Push(-2, 4); TaskCall(7)
0x437: Call2 0x44e

0x438: Pop(-2, 4); TaskReturn
0x439: Pop(2)
0x43a: @@ IsDialogEnd(Stack[-1])
0x43b: Pop(0)
0x43c: Pop(0); Push((bool) Stack[-1] == 0)
0x43d: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43e: @ sync()
0x43f: Pop(0)
0x440: @@ IsDialogEnd(Stack[-1])
0x441: Pop(0)
0x442: GOTO 0x43c

0x443: PushEmpty(object)
0x444: Stack[-1] = Stack[-10]
0x445: Call2 0x630

0x446: Pop(1)
0x447: @ StopDialog(Stack[-4])
0x448: Pop(0)
0x449: @@ GetReturnValue(Stack[-2])
0x44a: Pop(0)
0x44b: Stack[-10] = Stack[-2]
0x44c: Return(); Pop(8)

0x44d: Stack[-4] = 0
0x44e: PushEmpty()
0x44f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x450: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x451: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x452: Push((int) 1)
0x453: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x454: PushEmpty(string)
0x455: Stack[-1] = "Neutral"
0x456: Call2 0x488

0x457: Pop(1)
0x458: Push((int) 540539)
0x459: @@ SetMessage(Stack[-1])
0x45a: Pop(1)
0x45b: @@ ClearReplies()
0x45c: Pop(0)
0x45d: Push((int) 540540)
0x45e: Push((int) -1)
0x45f: Push((int) 42549)
0x460: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x461: Pop(3)
0x462: Push((int) 540799)
0x463: Push((int) -1)
0x464: Push((int) 42848)
0x465: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(3)
0x467: GOTO 0x46a

0x468: Return(); Pop(0)

0x469: GOTO 0x452

0x46a: PushEmpty(bool)
0x46b: Call2 0x751

0x46c: Pop(0)
0x46d: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x46e: @ lshWaitForAnimEnd()
0x46f: Pop(0)
0x470: Push( Stack[3 + Tasks[-1].StackPointer] )
0x471: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x472: GOTO 0x478

0x473: PushEmpty(string)
0x474: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x475: Call2 0x6cc

0x476: Pop(1)
0x477: GOTO 0x46e

0x478: GOTO 0x487

0x479: Push("all")
0x47a: Push("idle")
0x47b: @ PlayAnimation(Stack[-2], Stack[-1])
0x47c: Pop(2)
0x47d: @ WaitForAnimEnd()
0x47e: Pop(0)
0x47f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x480: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x481: GOTO 0x487

0x482: Push("all")
0x483: Push("idle")
0x484: @ PlayAnimation(Stack[-2], Stack[-1])
0x485: Pop(2)
0x486: GOTO 0x47d

0x487: Return(); Pop(0)

0x488: PushEmpty()
0x489: PushEmpty(bool)
0x48a: Call2 0x751

0x48b: Pop(0)
0x48c: Pop(1); Push((bool) Stack[-1] == 0)
0x48d: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48e: Return(); Pop(0)

0x48f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x490: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x491: Return(); Pop(0)

0x492: PushEmpty(string, bool)
0x493: Stack[-2] = Stack[-3]
0x494: Push("")
0x495: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x497: Stack[-1] = (bool) 0
0x498: GOTO 0x49a

0x499: Stack[-1] = (bool) 1
0x49a: Call2 0x6dc

0x49b: Pop(2)
0x49c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x49d: Return(); Pop(0)

0x49e: PushEmpty()
0x49f: Push((int) 1)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4a1: PushEmpty()
0x4a2: Call2 0x6fa

0x4a3: Pop(0)
0x4a4: Push((int) 42548)
0x4a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4a7: PushEmpty(string)
0x4a8: Stack[-1] = "Neutral"
0x4a9: Call2 0x488

0x4aa: Pop(1)
0x4ab: Push((int) 540539)
0x4ac: @@ SetMessage(Stack[-1])
0x4ad: Pop(1)
0x4ae: @@ ClearReplies()
0x4af: Pop(0)
0x4b0: Push((int) 540540)
0x4b1: Push((int) -1)
0x4b2: Push((int) 42549)
0x4b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b4: Pop(3)
0x4b5: Push((int) 540799)
0x4b6: Push((int) -1)
0x4b7: Push((int) 42848)
0x4b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b9: Pop(3)
0x4ba: Return(); Pop(0)

0x4bb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4bc: PushEmpty(bool)
0x4bd: Call2 0x751

0x4be: Pop(0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c0: @ lshStopAnimation()
0x4c1: Pop(0)
0x4c2: GOTO 0x4c5

0x4c3: @ StopAnimation()
0x4c4: Pop(0)
0x4c5: Return(); Pop(0)

0x4c6: GOTO 0x49f

0x4c7: Return(); Pop(0)

0x4c8: Push(GlobalVars[1])
0x4c9: Stack[-1] = (bool) 0
0x4ca: GlobalVars[1] = Stack[-1]; Pop(1)
0x4cb: PushEmpty()
0x4cc: Call2 0x4cf

0x4cd: Pop(0)
0x4ce: Return(); Pop(0)

0x4cf: PushEmpty(bool)
0x4d0: Call2 0x5e6

0x4d1: Pop(0)
0x4d2: Pop(1); Push((bool) Stack[-1] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d4: @ Hold()
0x4d5: Pop(0)
0x4d6: @ GetDirection(Stack[-0])
0x4d7: Pop(0)
0x4d8: PushEmpty()
0x4d9: Call2 0x57f

0x4da: Pop(0)
0x4db: GOTO 0x4d8

0x4dc: Return(); Pop(0)

0x4dd: PushEmpty(object, object)
0x4de: Push("player")
0x4df: @ FindActor(Stack[-2], Stack[-1])
0x4e0: Pop(1)
0x4e1: Pop(0); Push((bool) Stack[-1] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e3: Stack[-3] = (bool) 0
0x4e4: Return(); Pop(2)

0x4e5: PushEmpty(bool, object)
0x4e6: Stack[-1] = Stack[-3]
0x4e7: Call2 0x5dd

0x4e8: Stack[-5] = Stack[-2]
0x4e9: Pop(2)
0x4ea: Return(); Pop(2)

0x4eb: Stack[-1] = 0
0x4ec: Push(CvectorIndex(Stack[-0], 0))
0x4ed: Push(CvectorIndex(Stack[-0], 2))
0x4ee: @ RotateAsync(Stack[-2], Stack[-1])
0x4ef: Pop(2)
0x4f0: Return(); Pop(0)

0x4f1: PushEmpty(object, bool, object, bool)
0x4f2: Push("player")
0x4f3: @ FindActor(Stack[-3], Stack[-1])
0x4f4: Pop(1)
0x4f5: Pop(0); Push((bool) Stack[-2] == 0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: Stack[-5] = (bool) 0
0x4f8: Return(); Pop(4)

0x4f9: PushEmpty(float, object)
0x4fa: Stack[-1] = Stack[-4]
0x4fb: Call2 0x5cb

0x4fc: Pop(1)
0x4fd: Push((float)90000.0)
0x4fe: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x4ff: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x500: Stack[-5] = (bool) 0
0x501: Return(); Pop(4)

0x502: @ CanSee(Stack[-1], Stack[-2])
0x503: Pop(0)
0x504: Stack[-5] = Stack[-1]
0x505: Return(); Pop(4)

0x506: Stack[-2] = 0
0x507: PushEmpty(float, float)
0x508: Push((int) 8)
0x509: Push((int) 16)
0x50a: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(2)
0x50c: Push((int) 10)
0x50d: @ SetTimer(Stack[-1], Stack[-2])
0x50e: Pop(1)
0x50f: Return(); Pop(2)

0x510: Push((int) 10)
0x511: @ KillTimer(Stack[-1])
0x512: Pop(1)
0x513: Return(); Pop(0)

0x514: PushEmpty()
0x515: Push((int) 10)
0x516: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x518: PushEmpty()
0x519: Call2 0x510

0x51a: Pop(0)
0x51b: PushEmpty(bool)
0x51c: Stack[-1] = (bool) 0
0x51d: PushEmpty(bool)
0x51e: Call2 0x5e6

0x51f: Pop(0)
0x520: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x521: PushEmpty(bool)
0x522: Call2 0x4f1

0x523: Pop(0)
0x524: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x525: Stack[-1] = (bool) 1
0x526: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x527: PushEmpty(bool)
0x528: Call2 0x4dd

0x529: Pop(0)
0x52a: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x52b: PushEmpty(bool, object)
0x52c: PushEmpty(object)
0x52d: Call2 0x701

0x52e: Stack[-2] = Stack[-1]
0x52f: Pop(1)
0x530: Call2 0x67c

0x531: Pop(2)
0x532: GOTO 0x539

0x533: PushEmpty()
0x534: Call2 0x4ec

0x535: Pop(0)
0x536: PushEmpty()
0x537: Call2 0x507

0x538: Pop(0)
0x539: Return(); Pop(0)

0x53a: PushEmpty()
0x53b: Call2 0x5c6

0x53c: Pop(0)
0x53d: PushEmpty()
0x53e: Call2 0x510

0x53f: Pop(0)
0x540: @ lshStopSpeech()
0x541: Pop(0)
0x542: @ lshStopAnimation()
0x543: Pop(0)
0x544: @ StopAsync()
0x545: Pop(0)
0x546: @ Hold()
0x547: Pop(0)
0x548: Return(); Pop(0)

0x549: @ StopGroup0()
0x54a: Pop(0)
0x54b: PushEmpty()
0x54c: Call2 0x510

0x54d: Pop(0)
0x54e: PushEmpty(string)
0x54f: Stack[-1] = "Neutral"
0x550: Call2 0x6cc

0x551: Pop(1)
0x552: PushEmpty()
0x553: Call2 0x507

0x554: Pop(0)
0x555: Return(); Pop(0)

0x556: PushEmpty()
0x557: Push(Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x559: PushEmpty()
0x55a: Call2 0x507

0x55b: Pop(0)
0x55c: GOTO 0x561

0x55d: PushEmpty(string)
0x55e: Stack[-1] = "Neutral"
0x55f: Call2 0x6cc

0x560: Pop(1)
0x561: Return(); Pop(0)

0x562: PushEmpty(bool, bool)
0x563: @ IsOverrideActive(Stack[-1])
0x564: Pop(0)
0x565: Pop(0); Push((bool) Stack[-1] == 0)
0x566: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x567: EventDisable(0)
0x568: PushEmpty()
0x569: Call2 0x5c6

0x56a: Pop(0)
0x56b: PushEmpty(bool, object)
0x56c: Stack[-1] = Stack[-5]
0x56d: Call2 0x5dd

0x56e: Pop(2)
0x56f: EventEnable(0)
0x570: PushEmpty(object)
0x571: Stack[-1] = Stack[-4]
0x572: Call2 0x7ed

0x573: Pop(1)
0x574: PushEmpty(string)
0x575: Stack[-1] = "Neutral"
0x576: Call2 0x6cc

0x577: Pop(1)
0x578: PushEmpty()
0x579: Call2 0x510

0x57a: Pop(0)
0x57b: PushEmpty()
0x57c: Call2 0x507

0x57d: Pop(0)
0x57e: Return(); Pop(2)

0x57f: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x580: @ WaitForAnimEnd()
0x581: Pop(0)
0x582: PushEmpty(bool)
0x583: Call2 0x5e6

0x584: Pop(0)
0x585: Pop(1); Push((bool) Stack[-1] == 0)
0x586: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x587: Return(); Pop(12)

0x588: PushEmpty(int)
0x589: Call2 0x738

0x58a: Stack[-7] = Stack[-1]
0x58b: Pop(1)
0x58c: Stack[-5] = (int) 0
0x58d: PushEmpty(bool)
0x58e: Stack[-1] = (bool) 0
0x58f: Push((int) 5)
0x590: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x592: PushEmpty(bool)
0x593: Call2 0x5e6

0x594: Pop(0)
0x595: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x596: Stack[-1] = (bool) 1
0x597: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x598: Pop(0); Push((bool) Stack[-6] == 0)
0x599: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59a: Push((int) 3)
0x59b: @ Sleep(Stack[-1], Stack[-5])
0x59c: Pop(1)
0x59d: Pop(0); Push((bool) Stack[-4] == 0)
0x59e: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59f: GOTO 0x5c1

0x5a0: GOTO 0x5b6

0x5a1: @ irand(Stack[-3], Stack[-6])
0x5a2: Pop(0)
0x5a3: Push((int) 5)
0x5a4: @ irand(Stack[-3], Stack[-1])
0x5a5: Pop(1)
0x5a6: Push((int) 0)
0x5a7: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a9: Stack[-3] = (int) 0
0x5aa: Push("all")
0x5ab: PushEmpty(string, int)
0x5ac: Stack[-1] = Stack[-6]
0x5ad: Call2 0x731

0x5ae: Pop(1)
0x5af: @ PlayAnimation(Stack[-2], Stack[-1])
0x5b0: Pop(2)
0x5b1: @ WaitForAnimEnd(Stack[-1])
0x5b2: Pop(0)
0x5b3: Pop(0); Push((bool) Stack[-1] == 0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b5: GOTO 0x5c1

0x5b6: PushEmpty(bool)
0x5b7: Call2 0x5c4

0x5b8: Pop(0)
0x5b9: Pop(1); Push((bool) Stack[-1] == 0)
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5bb: GOTO 0x5c1

0x5bc: @ ResetAAS()
0x5bd: Pop(0)
0x5be: Push((int) 1)
0x5bf: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x5c0: GOTO 0x58d

0x5c1: @ ResetAAS()
0x5c2: Pop(0)
0x5c3: Return(); Pop(12)

0x5c4: Stack[-1] = (bool) 1
0x5c5: Return(); Pop(0)

0x5c6: @ StopAnimation()
0x5c7: Pop(0)
0x5c8: @ StopGroup0()
0x5c9: Pop(0)
0x5ca: Return(); Pop(0)

0x5cb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5cc: @ GetPosition(Stack[-3])
0x5cd: Pop(0)
0x5ce: @@ GetPosition(Stack[-2])
0x5cf: Pop(0)
0x5d0: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5d1: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5d2: Return(); Pop(6)

0x5d3: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x5d4: @ GetPosition(Stack[-3])
0x5d5: Pop(0)
0x5d6: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x5d7: Push(CvectorIndex(Stack[-2], 0))
0x5d8: Push(CvectorIndex(Stack[-3], 2))
0x5d9: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x5da: Pop(2)
0x5db: Stack[-8] = Stack[-1]
0x5dc: Return(); Pop(6)

0x5dd: PushEmpty(cvector, cvector)
0x5de: @@ GetPosition(Stack[-1])
0x5df: Pop(0)
0x5e0: PushEmpty(bool, cvector)
0x5e1: Stack[-1] = Stack[-3]
0x5e2: Call2 0x5d3

0x5e3: Stack[-6] = Stack[-2]
0x5e4: Pop(2)
0x5e5: Return(); Pop(2)

0x5e6: PushEmpty(bool, bool)
0x5e7: @ IsLoaded(Stack[-1])
0x5e8: Pop(0)
0x5e9: Stack[-3] = Stack[-1]
0x5ea: Return(); Pop(2)

0x5eb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x5ec: @@ GetPosition(Stack[-8])
0x5ed: Pop(0)
0x5ee: @@ GetEyesHeight(Stack[-9])
0x5ef: Pop(0)
0x5f0: Push(CvectorIndex(Stack[-8], 1))
0x5f1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5f2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5f3: @ GetPosition(Stack[-7])
0x5f4: Pop(0)
0x5f5: @ GetEyesHeight(Stack[-9])
0x5f6: Pop(0)
0x5f7: Push(CvectorIndex(Stack[-7], 1))
0x5f8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5f9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x5fa: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x5fb: Push(CvectorIndex(Stack[-6], 1))
0x5fc: Stack[-1] = (int) 0
0x5fd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x5fe: Pop(0); Push(Stack[-6] | Stack[-6]);
0x5ff: Pop(1); Push(Sqrt(Stack[-1]))
0x600: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x601: Stack[-5] = -Stack[-6]; Pop(0);
0x602: Pop(0); Push(Stack[-6] * Stack[-19]);
0x603: PushEmpty(cvector, cvector)
0x604: Push(CVector(0.0, 1.0, 0.0))
0x605: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x606: Call2 0x707

0x607: Pop(1)
0x608: Push((int) 25)
0x609: Pop(2); Push(Stack[-2] * Stack[-1]);
0x60a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x60b: Push(CVector(0.0, 10.0, 0.0))
0x60c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x60d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x60e: @ IsOverrideActive(Stack[-2])
0x60f: Pop(0)
0x610: Push(Stack[-2])
0x611: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x612: Stack[-21] = (bool) 0
0x613: Return(); Pop(18)

0x614: @ StopWorld()
0x615: Pop(0)
0x616: Push((bool) 1)
0x617: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x618: Pop(1)
0x619: Push(CvectorIndex(Stack[-4], 0))
0x61a: Push(CvectorIndex(Stack[-5], 2))
0x61b: @ Rotate(Stack[-2], Stack[-1])
0x61c: Pop(2)
0x61d: PushEmpty(bool)
0x61e: Call2 0x751

0x61f: Pop(0)
0x620: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x621: GOTO 0x62a

0x622: Push("head")
0x623: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x624: Pop(1)
0x625: Push(Stack[-1])
0x626: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x627: Push("head")
0x628: @ LookAsyncCamera(Stack[-1])
0x629: Pop(1)
0x62a: @ CameraWaitForPlayFinish()
0x62b: Pop(0)
0x62c: @ ResumeWorld()
0x62d: Pop(0)
0x62e: Stack[-21] = (bool) 1
0x62f: Return(); Pop(18)

0x630: PushEmpty(bool, bool)
0x631: Push((bool) 1)
0x632: @ CameraSwitchToNormal(Stack[-1])
0x633: Pop(1)
0x634: PushEmpty(bool)
0x635: Call2 0x751

0x636: Pop(0)
0x637: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x638: GOTO 0x641

0x639: Push("head")
0x63a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x63b: Pop(1)
0x63c: Push(Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63e: Push("head")
0x63f: @ UnlookAsync(Stack[-1])
0x640: Pop(1)
0x641: Return(); Pop(2)

0x642: PushEmpty(int, int, int, int)
0x643: Push("voice_common")
0x644: @ GetVariable(Stack[-1], Stack[-3])
0x645: Pop(1)
0x646: Push(Stack[-2])
0x647: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x648: PushEmpty(bool, object)
0x649: Stack[-1] = Stack[-7]
0x64a: Call2 0x67c

0x64b: Pop(1)
0x64c: Pop(1); Push((bool) Stack[-1] == 0)
0x64d: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x64e: PushEmpty(bool, object)
0x64f: Stack[-1] = Stack[-7]
0x650: Call2 0x6a1

0x651: Pop(1)
0x652: Pop(1); Push((bool) Stack[-1] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: Stack[-6] = (bool) 0
0x655: Return(); Pop(4)

0x656: Push((int) 2)
0x657: @ irand(Stack[-2], Stack[-1])
0x658: Pop(1)
0x659: Push(Stack[-1])
0x65a: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x65b: Push("voice_common")
0x65c: Push((int) 1)
0x65d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x65e: Push((int) 3)
0x65f: Pop(2); Push(Stack[-2] % Stack[-1]);
0x660: @ SetVariable(Stack[-2], Stack[-1])
0x661: Pop(2)
0x662: GOTO 0x667

0x663: Push("voice_common")
0x664: Push((int) 0)
0x665: @ SetVariable(Stack[-2], Stack[-1])
0x666: Pop(2)
0x667: GOTO 0x67a

0x668: PushEmpty(bool, object)
0x669: Stack[-1] = Stack[-7]
0x66a: Call2 0x6a1

0x66b: Pop(1)
0x66c: Pop(1); Push((bool) Stack[-1] == 0)
0x66d: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x66e: PushEmpty(bool, object)
0x66f: Stack[-1] = Stack[-7]
0x670: Call2 0x67c

0x671: Pop(1)
0x672: Pop(1); Push((bool) Stack[-1] == 0)
0x673: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x674: Stack[-6] = (bool) 0
0x675: Return(); Pop(4)

0x676: Push("voice_common")
0x677: Push((int) 1)
0x678: @ SetVariable(Stack[-2], Stack[-1])
0x679: Pop(2)
0x67a: Stack[-6] = (bool) 1
0x67b: Return(); Pop(4)

0x67c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x67d: Stack[-5] = "c"
0x67e: Stack[-4] = (int) 0
0x67f: Push((int) 1)
0x680: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x681: Push((int) 1)
0x682: Pop(1); Push(Stack[-5] + Stack[-1]);
0x683: Pop(1); Push(Stack[-6] + Stack[-1]);
0x684: @@ HasProperty(Stack[-1], Stack[-4])
0x685: Pop(1)
0x686: Pop(0); Push((bool) Stack[-3] == 0)
0x687: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x688: GOTO 0x68c

0x689: Push((int) 1)
0x68a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x68b: GOTO 0x67f

0x68c: Pop(0); Push((bool) Stack[-4] == 0)
0x68d: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68e: Stack[-12] = (bool) 0
0x68f: Return(); Pop(10)

0x690: Stack[-2] = (int) 0
0x691: Push((int) 1)
0x692: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x693: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x694: @ irand(Stack[-2], Stack[-4])
0x695: Pop(0)
0x696: Push((int) 1)
0x697: Pop(1); Push(Stack[-3] + Stack[-1]);
0x698: Pop(1); Push(Stack[-6] + Stack[-1]);
0x699: @@ GetProperty(Stack[-1], Stack[-2])
0x69a: Pop(1)
0x69b: PushEmpty(bool, string)
0x69c: Stack[-1] = Stack[-3]
0x69d: Call2 0x6eb

0x69e: Stack[-14] = Stack[-2]
0x69f: Pop(2)
0x6a0: Return(); Pop(10)

0x6a1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6a2: Push("d")
0x6a3: PushEmpty(int)
0x6a4: Call2 0x722

0x6a5: Pop(0)
0x6a6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6a7: Push("m")
0x6a8: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6a9: Stack[-4] = (int) 0
0x6aa: Push((int) 1)
0x6ab: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6ac: Push((int) 1)
0x6ad: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6ae: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6af: @@ HasProperty(Stack[-1], Stack[-4])
0x6b0: Pop(1)
0x6b1: Pop(0); Push((bool) Stack[-3] == 0)
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6b3: GOTO 0x6b7

0x6b4: Push((int) 1)
0x6b5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6b6: GOTO 0x6aa

0x6b7: Pop(0); Push((bool) Stack[-4] == 0)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b9: Stack[-12] = (bool) 0
0x6ba: Return(); Pop(10)

0x6bb: Stack[-2] = (int) 0
0x6bc: Push((int) 1)
0x6bd: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6bf: @ irand(Stack[-2], Stack[-4])
0x6c0: Pop(0)
0x6c1: Push((int) 1)
0x6c2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6c3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6c4: @@ GetProperty(Stack[-1], Stack[-2])
0x6c5: Pop(1)
0x6c6: PushEmpty(bool, string)
0x6c7: Stack[-1] = Stack[-3]
0x6c8: Call2 0x6eb

0x6c9: Stack[-14] = Stack[-2]
0x6ca: Pop(2)
0x6cb: Return(); Pop(10)

0x6cc: PushEmpty(bool, float, float, bool, float, float)
0x6cd: @ lshHasAnimation(Stack[-3], Stack[-7])
0x6ce: Pop(0)
0x6cf: Push(Stack[-3])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6d1: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x6d2: Pop(0)
0x6d3: Push((bool) 0)
0x6d4: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6d5: Pop(1)
0x6d6: GOTO 0x6db

0x6d7: Push("Can't find lsh animation : ")
0x6d8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6d9: @ Trace(Stack[-1])
0x6da: Pop(1)
0x6db: Return(); Pop(6)

0x6dc: PushEmpty(bool, float, float, bool, float, float)
0x6dd: @ lshHasAnimation(Stack[-3], Stack[-8])
0x6de: Pop(0)
0x6df: Push(Stack[-3])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e1: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x6e2: Pop(0)
0x6e3: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x6e4: Pop(0)
0x6e5: GOTO 0x6ea

0x6e6: Push("Can't find lsh animation : ")
0x6e7: Pop(1); Push(Stack[-1] + Stack[-9]);
0x6e8: @ Trace(Stack[-1])
0x6e9: Pop(1)
0x6ea: Return(); Pop(6)

0x6eb: PushEmpty(bool, bool)
0x6ec: PushEmpty(bool)
0x6ed: Call2 0x751

0x6ee: Pop(0)
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f0: @ lshHasSpeech(Stack[-1], Stack[-3])
0x6f1: Pop(0)
0x6f2: Push(Stack[-1])
0x6f3: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f4: @ lshPlaySpeech(Stack[-3])
0x6f5: Pop(0)
0x6f6: Stack[-4] = (bool) 1
0x6f7: Return(); Pop(2)

0x6f8: Stack[-4] = (bool) 0
0x6f9: Return(); Pop(2)

0x6fa: PushEmpty(bool)
0x6fb: Call2 0x751

0x6fc: Pop(0)
0x6fd: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6fe: @ lshStopSpeech()
0x6ff: Pop(0)
0x700: Return(); Pop(0)

0x701: PushEmpty(object, object)
0x702: @ self(Stack[-1])
0x703: Pop(0)
0x704: Stack[-3] = Stack[-1]
0x705: Return(); Pop(2)

0x706: Stack[-1] = 0
0x707: PushEmpty(float, float)
0x708: Pop(0); Push(Stack[-3] | Stack[-3]);
0x709: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x70a: Push((float)0.0)
0x70b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x70e: Return(); Pop(2)

0x70f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x710: Return(); Pop(2)

0x711: PushEmpty(int, int)
0x712: @ GetVariable(Stack[-3], Stack[-1])
0x713: Pop(0)
0x714: Stack[-4] = Stack[-1]
0x715: Return(); Pop(2)

0x716: PushEmpty(object, object)
0x717: @ FindActor(Stack[-1], Stack[-4])
0x718: Pop(0)
0x719: Pop(0); Push((bool) Stack[-1] == 0)
0x71a: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x71b: Stack[-5] = (bool) 0
0x71c: Return(); Pop(2)

0x71d: @ Trigger(Stack[-1], Stack[-3])
0x71e: Pop(0)
0x71f: Stack[-5] = (bool) 1
0x720: Return(); Pop(2)

0x721: Stack[-1] = 0
0x722: PushEmpty(float, float)
0x723: @ GetGameTime(Stack[-1])
0x724: Pop(0)
0x725: Push((int) 1)
0x726: PushEmpty(int)
0x727: Push((int) 24)
0x728: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x729: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x72a: Return(); Pop(2)

0x72b: PushEmpty()
0x72c: PushEmpty(int)
0x72d: Call2 0x722

0x72e: Pop(0)
0x72f: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x730: Return(); Pop(0)

0x731: PushEmpty(string, string)
0x732: Stack[-1] = "idle"
0x733: Push(Stack[-3])
0x734: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x735: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x736: Stack[-4] = Stack[-1]
0x737: Return(); Pop(2)

0x738: PushEmpty(int, bool, int, bool)
0x739: Stack[-2] = (int) 0
0x73a: Push("all")
0x73b: PushEmpty(string, int)
0x73c: Stack[-1] = Stack[-5]
0x73d: Call2 0x731

0x73e: Pop(1)
0x73f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x740: Pop(2)
0x741: Pop(0); Push((bool) Stack[-1] == 0)
0x742: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x743: GOTO 0x747

0x744: Push((int) 1)
0x745: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x746: GOTO 0x73a

0x747: Stack[-5] = Stack[-2]
0x748: Return(); Pop(4)

0x749: Stack[-1] = (int) 515545
0x74a: Return(); Pop(0)

0x74b: Stack[-1] = (int) 502870
0x74c: Return(); Pop(0)

0x74d: Stack[-1] = "ui/NPC_Mat.png"
0x74e: Return(); Pop(0)

0x74f: Stack[-1] = "ui/NPC_Mat_b.png"
0x750: Return(); Pop(0)

0x751: Stack[-1] = (bool) 1
0x752: Return(); Pop(0)

0x753: PushEmpty()
0x754: Push("k8q01")
0x755: Push((int) 2)
0x756: @ SetVariable(Stack[-2], Stack[-1])
0x757: Pop(2)
0x758: PushEmpty()
0x759: Call2 0x799

0x75a: Pop(0)
0x75b: Return(); Pop(0)

0x75c: PushEmpty()
0x75d: Push("k8q01")
0x75e: Push((int) 4)
0x75f: @ SetVariable(Stack[-2], Stack[-1])
0x760: Pop(2)
0x761: PushEmpty()
0x762: Call2 0x7a6

0x763: Pop(0)
0x764: PushEmpty(bool, string, string)
0x765: Stack[-2] = "quest_k8_01"
0x766: Stack[-1] = "unlock_boiny"
0x767: Call2 0x716

0x768: Pop(3)
0x769: Return(); Pop(0)

0x76a: PushEmpty()
0x76b: PushEmpty()
0x76c: Call2 0x78c

0x76d: Pop(0)
0x76e: PushEmpty(bool, string, string)
0x76f: Stack[-2] = "quest_k8_01"
0x770: Stack[-1] = "fail"
0x771: Call2 0x716

0x772: Pop(3)
0x773: Return(); Pop(0)

0x774: PushEmpty()
0x775: PushEmpty(int, string)
0x776: Stack[-1] = "k8q01"
0x777: Call2 0x711

0x778: Pop(1)
0x779: Push((int) 1)
0x77a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x77b: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x77c: Stack[-2] = (bool) 1
0x77d: Return(); Pop(0)

0x77e: Stack[-2] = (bool) 0
0x77f: Return(); Pop(0)

0x780: PushEmpty()
0x781: PushEmpty(int, string)
0x782: Stack[-1] = "k8q01"
0x783: Call2 0x711

0x784: Pop(1)
0x785: Push((int) 3)
0x786: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x787: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x788: Stack[-2] = (bool) 1
0x789: Return(); Pop(0)

0x78a: Stack[-2] = (bool) 0
0x78b: Return(); Pop(0)

0x78c: PushEmpty(object, object)
0x78d: Push((int) 530)
0x78e: Push((int) 1)
0x78f: Push((int) 530194)
0x790: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x791: Pop(3)
0x792: PushEmpty(bool, object, int)
0x793: Stack[-2] = Stack[-4]
0x794: Stack[-1] = (int) 438
0x795: Call2 0x7c0

0x796: Pop(3)
0x797: Return(); Pop(2)

0x798: Stack[-1] = 0
0x799: PushEmpty(object, object)
0x79a: Push((int) 440)
0x79b: Push((int) 1)
0x79c: Push((int) 526465)
0x79d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x79e: Pop(3)
0x79f: PushEmpty(bool, object, int)
0x7a0: Stack[-2] = Stack[-4]
0x7a1: Stack[-1] = (int) 438
0x7a2: Call2 0x7c0

0x7a3: Pop(3)
0x7a4: Return(); Pop(2)

0x7a5: Stack[-1] = 0
0x7a6: PushEmpty(object, object)
0x7a7: Push((int) 442)
0x7a8: Push((int) 1)
0x7a9: Push((int) 526467)
0x7aa: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7ab: Pop(3)
0x7ac: PushEmpty(bool, object, int)
0x7ad: Stack[-2] = Stack[-4]
0x7ae: Stack[-1] = (int) 438
0x7af: Call2 0x7c0

0x7b0: Pop(3)
0x7b1: Return(); Pop(2)

0x7b2: Stack[-1] = 0
0x7b3: PushEmpty(object, object)
0x7b4: @ GetDiaryRoot(Stack[-1])
0x7b5: Pop(0)
0x7b6: Pop(0); Push((bool) Stack[-1] == 0)
0x7b7: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b8: Push("Can't retrieve diary root")
0x7b9: @ Trace(Stack[-1])
0x7ba: Pop(1)
0x7bb: Stack[-3] = (bool) 0
0x7bc: Return(); Pop(2)

0x7bd: Stack[-3] = Stack[-1]
0x7be: Return(); Pop(2)

0x7bf: Stack[-1] = 0
0x7c0: PushEmpty(object, object, int, object, object, int)
0x7c1: PushEmpty(object)
0x7c2: Call2 0x7b3

0x7c3: Stack[-4] = Stack[-1]
0x7c4: Pop(1)
0x7c5: @@ Find(Stack[-7], Stack[-2])
0x7c6: Pop(0)
0x7c7: Pop(0); Push((bool) Stack[-2] == 0)
0x7c8: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7c9: Push("Can't find diary parent with id: ")
0x7ca: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7cb: @ Trace(Stack[-1])
0x7cc: Pop(1)
0x7cd: Stack[-9] = (bool) 0
0x7ce: Return(); Pop(6)

0x7cf: @@ AddChild(Stack[-8])
0x7d0: Pop(0)
0x7d1: Push((int) 7)
0x7d2: @ SendWorldWndMessage(Stack[-1])
0x7d3: Pop(1)
0x7d4: @@ GetCategory(Stack[-1])
0x7d5: Pop(0)
0x7d6: @ SetDiarySection(Stack[-1])
0x7d7: Pop(0)
0x7d8: Stack[-9] = (bool) 0
0x7d9: Return(); Pop(6)

0x7da: Stack[-2] = 0
0x7db: Stack[-3] = 0
0x7dc: PushEmpty(int, int)
0x7dd: Push("branch")
0x7de: @ GetVariable(Stack[-1], Stack[-2])
0x7df: Pop(1)
0x7e0: Push((int) 0)
0x7e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e3: Stack[-3] = (int) 1
0x7e4: Return(); Pop(2)

0x7e5: GOTO 0x7eb

0x7e6: Push((int) 1)
0x7e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e8: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e9: Stack[-3] = (int) 2
0x7ea: Return(); Pop(2)

0x7eb: Stack[-3] = (int) 3
0x7ec: Return(); Pop(2)

0x7ed: PushEmpty()
0x7ee: Push(GlobalVars[1])
0x7ef: Pop(1); Push((bool) Stack[-1] == 0)
0x7f0: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f1: PushEmpty(int, object)
0x7f2: Stack[-1] = Stack[-3]
0x7f3: Push(-2, 1); TaskCall(0)
0x7f4: Call2 0x0

0x7f5: Pop(-2, 1); TaskReturn
0x7f6: Pop(2)
0x7f7: Push(GlobalVars[1])
0x7f8: Stack[-1] = (bool) 1
0x7f9: GlobalVars[1] = Stack[-1]; Pop(1)
0x7fa: PushEmpty(bool, int)
0x7fb: Stack[-1] = (int) 8
0x7fc: Call2 0x72b

0x7fd: Pop(1)
0x7fe: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x7ff: PushEmpty(int, object)
0x800: Stack[-1] = Stack[-3]
0x801: Push(-2, 1); TaskCall(2)
0x802: Call2 0xd8

0x803: Pop(-2, 1); TaskReturn
0x804: Pop(2)
0x805: Return(); Pop(0)

0x806: PushEmpty(bool, int)
0x807: Stack[-1] = (int) 12
0x808: Call2 0x72b

0x809: Pop(1)
0x80a: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x80b: PushEmpty(int, object)
0x80c: Stack[-1] = Stack[-3]
0x80d: Push(-2, 1); TaskCall(4)
0x80e: Call2 0x2fa

0x80f: Pop(-2, 1); TaskReturn
0x810: Pop(2)
0x811: Return(); Pop(0)

0x812: PushEmpty(int, object)
0x813: Stack[-1] = Stack[-3]
0x814: Push(-2, 1); TaskCall(6)
0x815: Call2 0x3fd

0x816: Pop(-2, 1); TaskReturn
0x817: Pop(2)
0x818: Return(); Pop(0)

