# Billing-System ![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)


In this c++ project I tried to creat a full fledge Billing System. In which user can do data adjustment, adding , moditify or delete any file record.

user can also login as an Admistrator or as a Buyer with thir registered **EmailID** and **Password**

After login user get *Admin Menu* if they log in as Admistrator **or** *Buyers Menu* if log in as a Buyer.

If login as an Administrator -> After successfully Login user can do following process as shown bellow.
1) Add the product
2) Modify the product
3) Delete the product
4) List of the Product
5) Back to the Main Menu

If login in as a Buyer user can add Products to his cart and get his Billing Recipt with all the details like Product number, Product Name,Product Quantity,  Price,  Amount, Amount with discount, etc. as you can seen bellow for your refrence.

Run `billing_system.cpp` to see it working.


###  DEMO - billing_system.cpp
```
 =====================================================================

                              Supermarket Main Menu

 =====================================================================
 
                        |         1.)  Admistrator      |
                        |                               |
                        |         2.)  Buyer            |
                        |                               |
                        |         3.)  Exit             |
                        |                               |

              Please enter your choice :


```
> ### **Pressing-'1'** for Admistrator Window:
``` 
 =====================================================================

                               Supermarket Main Menu

 =====================================================================

                        |         1.)  Admistrator      |
                        |                               |
                        |         2.)  Buyer            |
                        |                               |
                        |         3.)  Exit             |
                        |                               |

         Please enter your choice : 1


=====================================================================

                           -----|  Login  |-----

=====================================================================

                       Enter Email      : eddy@email.com
                       Password         : ********

```



> ### After successfully Login:

```
 =====================================================================

                         -----|  Admin Menu  |-----

 =====================================================================

                |                                    |
                |_______1) Add the product___________|
                |                                    |
                |_______2) Modify the product________|
                |                                    |
                |_______3) Delete the product________|
                |                                    |
                |_______4) List of the Product_______|
                |                                    |
                |_______5) Back to the Main Menu_____|
                |                                    |

     Please enter your choice :
```
> ### **Pressing-'2'** for Buyer and Billing Window: 

```
=====================================================================

                           -----|  Buyer  |-----

=====================================================================

                      1) Buy Product

                      2) Go back

           Enter your choice :
```

> **PRESS-'1'** For Buying Product
```

                        ----------| Product List|-------------

=======================================================================================
proNo           Name            Price

=======================================================================================
1               Apple           50
2               Mango           40
3               Orange          60
4               cherry          70



                ===========================================

                        Please Place the order

                ===========================================


Enter Product Code : 1


Enter the Quantity : 2


 Do you want to buy another product? if yes then press y or else n  : n
```
> Finally , the Billing Receipt is formed .
~~~
==============================| RECEIPT |==============================

Product no      Product Name    ProductQuantity   Price   Amount  Amount with discount

1               Apple                2              50      100           90

==============================================
 Total Amount : 90
-------------------------------

 Press any key to go back to Buyer Main Menu....

~~~

PLEASE FEEL FREE TO FORK THE PROJECT AND START CONTRIBUTING. :)

## PRE-REQUISITES
Your laptop with C++ installed.

**NOTE:** Those with Linux and MacOSX would have C++ installed by default, no action required.

Windows: Download the version for your laptop via https://sourceforge.net/projects/orwelldevcpp/

**NOTES**
In your preferred editor, make sure indentation is set to "4 spaces".

---

## Run using Python3.8+
1. Clone or download repositiory: https://github.com/eddyvk01/Billing-System.git
2. In source folder, run `billing_system.cpp` to start program, optionally, run with `--help` argument to see other runtime options.
 
### ThankYou!
