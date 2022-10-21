package com.contract.planet.bal.test;

import com.alipay.chainstack.ittest.mychain.base.ChainStackTestBase;
import com.alipay.chainstack.ittest.mychain.contract.TestContractBuilder;
import com.alipay.chainstack.jbcc.mychainx.domain.contract.Contract;
import com.alipay.chainstack.jbcc.mychainx.model.account.Identity;
import com.alipay.mychain.sdk.domain.account.Account;
import com.contract.planet.bal.bao.*;
import java.io.IOException;
import org.junit.Before;
import org.junit.BeforeClass;

public class PlanetAutoConfigTestBase extends ChainStackTestBase {
    protected volatile PlanetBAO planetBAO;

    @BeforeClass
    public static void beforeAll() {
        // mychain sdk will output tons of logs,
        // sometimes this will make it hard to read the actual print from your test case,
        // thus we disable to sdk output by default,
        // if you need the actual output, please remove the following line
        disableSdkOutput();
    }

    @Before
    public void beforeEachTest() throws IOException {
        // the following setup can be modified with your own use case,
        // by default each contract will be created deployed before each test case,
        // which means you will get a clean test contract everytime, old contract will be disposed.
        // if you need to use a fixed contract for all tests,
        // you can use .deployName("{fixed-name}") of TestContractBuilder to use a fixed contract.
        Contract testContract =
                new TestContractBuilder("Planet").chain(getTestBlockChain()).build();

        // deploy the contract
        deploy(testContract);

        // instantiate the bao
        planetBAO = new PlanetBAO(testContract);
    }
}
