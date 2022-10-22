package com.contract.planet.bal.test;

import static org.junit.Assert.assertTrue;

import com.alipay.chainstack.ittest.mychain.collector.*;
import com.alipay.chainstack.ittest.mychain.runner.MyChainJunitRunner;
import com.alipay.chainstack.jbcc.mychainx.domain.account.Account;
import com.alipay.chainstack.jbcc.mychainx.model.receipt.ReceiptModel;
import com.alipay.chainstack.jbcc.mychainx.model.transaction.TransactionModel;
import com.contract.planet.bal.bao.*;
import com.contract.planet.bal.data.*;
import com.contract.planet.bal.log.*;
import com.contract.planet.bal.model.*;
import com.contract.planet.bal.parser.*;
import org.junit.Test;
import org.junit.runner.RunWith;

@RunWith(MyChainJunitRunner.class)
public class GetRandomKItemsInterfaceTest extends PlanetAutoConfigTestBase {

    @Test
    public void getRandomKItemsTest() {

        // 1. 构造请求账户
        Account testAccount = getTestBlockChain().getAdminAccount();

        // 2. 构造请求参数
        // 2.1. 构造合约参数DO

        // 2.2. 构造request
        GetRandomKItemsRequest getRandomKItemsRequest = new GetRandomKItemsRequest();
        getRandomKItemsRequest.getReqContext().setAccountName(testAccount.getName());
        // set other params...

        // 3. 执行请求
        GetRandomKItemsResponse getRandomKItemsResponse =
                planetBAO.getRandomKItems(getRandomKItemsRequest);

        // 4. 收集请求执行的区块链交易信息
        // 4.1. 查看请求关联的交易、收据
        ReceiptModel receipt = collectReceipt(getRandomKItemsRequest);
        TransactionModel transaction = collectTransaction(getRandomKItemsRequest);

        PlanetTransactionParser parser = new PlanetTransactionParser(receipt);
        // 4.2. 通过parser判断receipt是否有指定的log
        // parser.hasXxxLog();
        // 4.2. 通过parser查看指定的log类型xxx
        // parser.getXxxLog();
        // 4.3. 更多parser用法，查看bal里parse包

        // 5. 检查请求是否成功
        assertTrue(
                getRandomKItemsResponse.getRespContext().getErrorMsg(),
                getRandomKItemsResponse.getRespContext().isSuccess());
    }
}
