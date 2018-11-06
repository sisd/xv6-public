# Change of Scheduler : Report

**Made By** Siddharth Jain

-----------
- I  have changed to scheduler from round-robin to priority based.
- Higher the priority is represented by lower number.
- Incase of ties round robin is used.
--------
## View Processes with their priorities
    ps
#### Expected output format

Name | Pid| Priority| Status_number
---|---|---|--
ps | 3 | 1 | 4
long | 5 | 60 | 4
long | 6 | 60 | 3
-------------------

#### Status_number
Status | Number
---|---
SLEEPING | 2
RUNNABLE | 3
RUNNING | 4
--------------------

## Change priority
    setpr <pid> <priority>
----------

## A bulky process for checking purposes
    long &
-------------

## Example for 2 long processes

    $ long &
    $ long &
    $ ps

Name | Pid | Priority | Status_number
---|---|---|--
ps | 6 | 60 | 4
long | 3 | 60 | 3
long | 5 | 60 | 4

    $ setpr 5 70
    $ ps

Name | Pid | Priority | Status_number
---|---|---|--
ps | 8 | 60 | 4
long | 3 | 60 | 4
long | 5 | 70 | 3

    $ setpr 5 55
    $ ps

Name | Pid | Priority | Status_number
---|---|---|---
ps | 10 | 60 | 4
long | 3 | 60 | 3
long | 5 | 55 | 4

---------------
__________
# Siddharth Jain - 20171169
