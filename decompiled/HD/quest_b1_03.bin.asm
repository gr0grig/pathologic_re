GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	quest_b1_01
	remove_cutscene
	b1q03
	place_doberman
	pt_b1q03_doberman
	pers_doberman
	b1q03_doberman.xml
	doberman_dead
	b1q03_dead
	ACHIEVEMENT_DONT
	cleanup
	Remove
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	UnlockAchievement (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0xe Vars = (string)
		EVENT_9 Op = 0x64 Vars = (int, float)


0x0: PushEmpty(bool, string, string)
0x1: Stack[-2] = "quest_b1_01"
0x2: Stack[-1] = "remove_cutscene"
0x3: Call2 0x81

0x4: Pop(3)
0x5: Push("b1q03")
0x6: Push((int) 1)
0x7: @ SetVariable(Stack[-2], Stack[-1])
0x8: Pop(2)
0x9: PushEmpty(int)
0xa: Stack[-1] = (int) 1
0xb: Call2 0x51

0xc: Pop(1)
0xd: Return(); Pop(0)

0xe: PushEmpty(object, object)
0xf: @ Trace(Stack[-3])
0x10: Pop(0)
0x11: Push("place_doberman")
0x12: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x14: @ GetMainOutdoorScene(Stack[-1])
0x15: Pop(0)
0x16: PushEmpty(object, object, string, string, string)
0x17: Stack[-4] = Stack[-6]
0x18: Stack[-3] = "pt_b1q03_doberman"
0x19: Stack[-2] = "pers_doberman"
0x1a: Stack[-1] = "b1q03_doberman.xml"
0x1b: Call2 0x6f

0x1c: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1d: Pop(5)
0x1e: Stack[-1] = 0
0x1f: GOTO 0x31

0x20: Push("doberman_dead")
0x21: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x23: Push("b1q03_dead")
0x24: Push((int) 1)
0x25: @ SetVariable(Stack[-2], Stack[-1])
0x26: Pop(2)
0x27: Push("ACHIEVEMENT_DONT")
0x28: @ UnlockAchievement(Stack[-1])
0x29: Pop(1)
0x2a: GOTO 0x31

0x2b: Push("cleanup")
0x2c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2e: PushEmpty()
0x2f: Call2 0x45

0x30: Pop(0)
0x31: Return(); Pop(2)

0x32: PushEmpty(int, int)
0x33: Push("b1q03")
0x34: @ GetVariable(Stack[-1], Stack[-2])
0x35: Pop(1)
0x36: Push((int) 1000)
0x37: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x39: PushEmpty()
0x3a: Call2 0x3d

0x3b: Pop(0)
0x3c: Return(); Pop(2)

0x3d: Push("b1q03")
0x3e: Push((int) -1)
0x3f: @ SetVariable(Stack[-2], Stack[-1])
0x40: Pop(2)
0x41: PushEmpty()
0x42: Call2 0x45

0x43: Pop(0)
0x44: Return(); Pop(0)

0x45: EventDisable(26)
0x46: Push( Stack[0 + Tasks[-1].StackPointer] )
0x47: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x48: @@ Remove()
0x49: Pop(0)
0x4a: Stack[0 + Tasks[-1].StackPointer] = 0
0x4b: PushEmpty(object)
0x4c: Call2 0x69

0x4d: Pop(0)
0x4e: @ RemoveActor(Stack[-1])
0x4f: Pop(1)
0x50: Return(); Pop(0)

0x51: PushEmpty(float, float)
0x52: @ GetGameTime(Stack[-1])
0x53: Pop(0)
0x54: Push((int) 24)
0x55: Pop(1); Push(Stack[-4] * Stack[-1]);
0x56: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x58: PushEmpty()
0x59: Call2 0x45

0x5a: Pop(0)
0x5b: GOTO 0x63

0x5c: Push((int) 0)
0x5d: Push((int) 24)
0x5e: Pop(1); Push(Stack[-5] * Stack[-1]);
0x5f: @ SetTimeEvent(Stack[-2], Stack[-1])
0x60: Pop(2)
0x61: @ Hold()
0x62: Pop(0)
0x63: Return(); Pop(2)

0x64: PushEmpty()
0x65: PushEmpty()
0x66: Call2 0x32

0x67: Pop(0)
0x68: Return(); Pop(0)

0x69: PushEmpty(object, object)
0x6a: @ self(Stack[-1])
0x6b: Pop(0)
0x6c: Stack[-3] = Stack[-1]
0x6d: Return(); Pop(2)

0x6e: Stack[-1] = 0
0x6f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x70: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x71: Pop(0)
0x72: Pop(0); Push((bool) Stack[-4] == 0)
0x73: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x74: Push("Locator ")
0x75: Pop(1); Push(Stack[-1] + Stack[-12]);
0x76: Push(" doesn't exist")
0x77: Pop(2); Push(Stack[-2] + Stack[-1]);
0x78: @ Trace(Stack[-1])
0x79: Pop(1)
0x7a: Stack[-1] = 0
0x7b: GOTO 0x7e

0x7c: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x7d: Pop(0)
0x7e: Stack[-13] = Stack[-1]
0x7f: Return(); Pop(8)

0x80: Stack[-1] = 0
0x81: PushEmpty(object, object)
0x82: @ FindActor(Stack[-1], Stack[-4])
0x83: Pop(0)
0x84: Pop(0); Push((bool) Stack[-1] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x86: Stack[-5] = (bool) 0
0x87: Return(); Pop(2)

0x88: @ Trigger(Stack[-1], Stack[-3])
0x89: Pop(0)
0x8a: Stack[-5] = (bool) 1
0x8b: Return(); Pop(2)

0x8c: Stack[-1] = 0
