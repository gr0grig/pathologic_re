GlobalVarCount = 0

Strings:
	woman
	dt_house_1_07
	EnableSubset
	d2q01_house1
	pt_woman
	pers_woman
	d2q01_woman.xml
	cursed_women
	pt_enemy01
	d2q01_zombie_woman.xml
	pt_enemy02
	cleanup
	fail
	completed
	d2q01
	GetLocator
	Locator 
	 doesn't exist

Import:
	Hold (0 args)
	Trace (1 args)
	FindActor (2 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	SetVariable (2 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(object, object, object, object, object, object)
0x5: @ Trace(Stack[-7])
0x6: Pop(0)
0x7: Push("woman")
0x8: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0xa: Push("dt_house_1_07")
0xb: @ FindActor(Stack[-4], Stack[-1])
0xc: Pop(1)
0xd: Push((int) 200)
0xe: Push((bool) 1)
0xf: @@ EnableSubset(Stack[-2], Stack[-1])
0x10: Pop(2)
0x11: Push("d2q01_house1")
0x12: @ GetSceneByName(Stack[-3], Stack[-1])
0x13: Pop(1)
0x14: PushEmpty(object, object, string, string, string)
0x15: Stack[-4] = Stack[-7]
0x16: Stack[-3] = "pt_woman"
0x17: Stack[-2] = "pers_woman"
0x18: Stack[-1] = "d2q01_woman.xml"
0x19: Call 0x55

0x1a: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1b: Pop(5)
0x1c: Stack[-2] = 0
0x1d: Stack[-3] = 0
0x1e: GOTO 0x45

0x1f: Push("cursed_women")
0x20: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x22: Push("d2q01_house1")
0x23: @ GetSceneByName(Stack[-2], Stack[-1])
0x24: Pop(1)
0x25: PushEmpty(object, object, string, string, string)
0x26: Stack[-4] = Stack[-6]
0x27: Stack[-3] = "pt_enemy01"
0x28: Stack[-2] = "pers_woman"
0x29: Stack[-1] = "d2q01_zombie_woman.xml"
0x2a: Call 0x55

0x2b: Pop(5)
0x2c: PushEmpty(object, object, string, string, string)
0x2d: Stack[-4] = Stack[-6]
0x2e: Stack[-3] = "pt_enemy02"
0x2f: Stack[-2] = "pers_woman"
0x30: Stack[-1] = "d2q01_zombie_woman.xml"
0x31: Call 0x55

0x32: Pop(5)
0x33: Push("cleanup")
0x34: @ Trigger(Stack[-0], Stack[-1])
0x35: Pop(1)
0x36: Stack[-1] = 0
0x37: GOTO 0x45

0x38: Push("fail")
0x39: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3b: PushEmpty()
0x3c: Call 0x46

0x3d: Pop(0)
0x3e: GOTO 0x45

0x3f: Push("completed")
0x40: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x42: PushEmpty()
0x43: Call 0x46

0x44: Pop(0)
0x45: Return(); Pop(6)

0x46: Push("d2q01")
0x47: Push((int) 1000)
0x48: @ SetVariable(Stack[-2], Stack[-1])
0x49: Pop(2)
0x4a: PushEmpty()
0x4b: Call 0x4e

0x4c: Pop(0)
0x4d: Return(); Pop(0)

0x4e: EventDisable(26)
0x4f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x50: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x51: Push("cleanup")
0x52: @ Trigger(Stack[-0], Stack[-1])
0x53: Pop(1)
0x54: Return(); Pop(0)

0x55: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x56: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x57: Pop(0)
0x58: Pop(0); Push((bool) Stack[-4] == 0)
0x59: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5a: Push("Locator ")
0x5b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x5c: Push(" doesn't exist")
0x5d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5e: @ Trace(Stack[-1])
0x5f: Pop(1)
0x60: Stack[-1] = 0
0x61: GOTO 0x64

0x62: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x63: Pop(0)
0x64: Stack[-13] = Stack[-1]
0x65: Return(); Pop(8)

0x66: Stack[-1] = 0
